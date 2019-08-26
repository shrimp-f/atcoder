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
	cin >> N;

	vector<int> A(N);

	for(int i=0; i<N; i++){
		cin >> A[i];
	}

//	sort(A.begin(), A.end());

	int count=0;
	while(1){
		for(int i=0; i<N; i++){
			if(A[i]%2==1){
				cout << count << endl;
				return 0;
			}else{
				A[i] = A[i] / 2;
			}
		}
		count++;
	}
}