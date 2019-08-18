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

	std::vector<double> A(N);

	double ans_inv = 0.0;

	for(int i=0; i<N; i++){
		std::cin >> A[i];		
		ans_inv += 1/A[i];
	}

	double ans = 1./ans_inv;

	std::cout << std::setprecision(9) << ans << std::endl;


}