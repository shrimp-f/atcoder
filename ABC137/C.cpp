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

	std::vector<std::string> s(N);

	std::unordered_map<std::string, int> mp;

	for(int i=0; i<N; i++){
		std::cin >> s[i];
		std::sort(s[i].begin(),s[i].end()); //1つのstringのソート
		
	}

	std::sort(s.begin(),s.end()); //vector<string>全体のソート

/*
	for(int i=0; i<N; i++){
		cout << s[i] << endl;	
	}
*/

//	cout << *s[0].begin() << " " << *s[0].end() << endl;

	ll answer = 0;
	for(int i=0; i<N; i++){

/*
		cout << "size: "<< mp.size() << endl;
		cout << mp[s[i]] << endl;
*/
		if( mp[s[i]]==0 ){
			mp[s[i]]++;
		}else if(mp[s[i]] >= 1){
			answer+= mp[s[i]];
			mp[s[i]]++;
		}

	}

	std::cout << answer << std::endl;


}