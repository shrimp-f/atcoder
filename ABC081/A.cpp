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
	string s;
	cin >> s;

//	cout << s.length();

	int count =0 ;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='1'){
			count++;
		}
	}

	cout << count << endl;

}