//参考サイト
//https://qiita.com/drken/items/996d80bcae64649a6580
//https://qiita.com/drken/items/4a7869c5e304883f539b#2-%E8%A8%88%E7%AE%97%E6%A9%9F%E4%B8%8A%E3%81%A7%E3%81%AE%E3%82%B0%E3%83%A9%E3%83%95%E3%81%AE%E8%A1%A8%E3%81%97%E6%96%B9

#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
#include <functional>
#include <string>
#include <iomanip>
#include <queue>
#include <map>
#include <unordered_map>
typedef long long ll;
using namespace std;
using graph = std::vector<std::vector<int>>;

//頂点0から、その頂点までの距離を計算するBFS

int main(){
	//頂点数N, 辺数M
	int N,M;
	std::cin >> N >> M;

	graph g(N);

	for(int i=0; i<M; i++){
		int a,b;
		std::cin >> a >> b;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}

	//BFSのためのデータ構造
	std::vector<int> dist(N, -1);//全頂点を「未発見」に初期化
	queue<int> que;

	//初期条件(頂点0を初期ノードとする)
	dist[0] = 0;
	que.push(0); //頂点0を橙頂点(訪問予定)にする

	//BFS開始
	while(!que.empty()){
		int v = que.front(); //キューから訪問予定の先頭頂点を取り出す。訪問。
		que.pop(); //取り出したら削除

		// vから辿れる頂点をすべて調べる。ここから周辺の頂点に対象が移る
		for(int nv : g[v]){
			if(dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない。continueはループ処理のスキップをする文。

			// 新たに白色頂点(未訪問、未発見)について距離情報を更新してキューに追加する
			dist[nv] = dist[v] + 1;
			que.push(nv); // 訪問予定に追加
		}
	}

	// 結果出力(各頂点の頂点0からの距離を見る)
	for(int v=0; v<N; v++) std::cout << v << ": " << dist[v] << std::endl;

	return 0;

}

/*
入力例
9 13
0 1
0 4
0 2
1 4
1 3
1 8
2 5
3 8
4 8
5 8
5 6
3 7
6 7

出力例
1: 1
2: 1
3: 2
4: 1
5: 2
6: 3
7: 3
8: 2
*/