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

	std::vector<int> A(N+1);
	std::vector<int> B(N);

	ll ans = 0;


	for(int i=0; i<N+1; i++){
		std::cin >> A[i];
//	A[i] = 1e9;
	}

	for(int i=0; i<N; i++){
		std::cin >> B[i];
//	B[i] = 1e9;
	}

	//0番目の街
/*	int left = std::min(A[0],B[0]);
	ans += left;
	A[0] -= left;
	B[0] -= left;
*/

	for(int i=0;i<N+1;i++){
		int left = std::min(A[i],B[i]);
		ans += left;
		A[i] -= left;
		B[i] -= left;

		int right = std::min(A[i+1],B[i]);
		ans += right;
		A[i+1] -= right;
		B[i] -= right;
	}


	std::cout << ans << std::endl;


}