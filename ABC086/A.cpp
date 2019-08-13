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
	int A,B;
	std::cin >> A >> B;

	if(A*B%2 == 1){
		std::cout << "Odd" << std::endl;
	}else{
		std::cout << "Even" << std::endl;
	}

	return 0;

}