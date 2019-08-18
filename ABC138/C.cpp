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

int main()
{
	int N;
	std::cin >> N;
	int Q;
	std::cin >> Q;

	std::vector<int> a(N-1);
	std::vector<int> b(N-1);

	for(int i=0; i<N-1; i++){
		cin >> a[i];
		cin >> b[i];
	}

//	std::sort(v.begin(),v.end()); //vector<string>全体のソート 昇順
	std::sort(v.begin(),v.end(),std::greater<double>()); //vector<string>全体のソート 順

//		cout << v.size() << endl;//1オリジン

	for(int i=0; i<N-1; i++){
		v[v.size()-2] = ( v[v.size()-2] + v[v.size()-1] ) / 2;
//		cout << v[v.size()-2] << endl;
		v.pop_back();
	}

	cout << std::setprecision(9) << v[0] << endl;
}