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
int main()
{
 
	double A, B;
 
	std::cin >> A >> B;
 
	double K;
 
	K = (A + B) / 2;
 
	if (ceil(K) != floor(K)) {
		std::cout << "IMPOSSIBLE";
	}
	else {
		std::cout << int(K);
 
	}
 
 
 
}