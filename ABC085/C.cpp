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
	int N,Y;
	std::cin >> N >> Y;

	for(int x=0; x<N+1; x++){
		for(int y=0; y<N+1; y++){
			int z = N-x-y;
//				std::cout << x << " " << y << " " << z <<std::endl;
			if(z>=0 && x+y+z == N && 10000*x+5000*y+1000*z == Y){
				std::cout << x << " " << y << " " << z <<std::endl;
				return 0;
			}
		}
	}


	std::cout << -1 << " " << -1 << " " << -1 <<std::endl;

	return 0;

}