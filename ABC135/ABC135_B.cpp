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
 
	int n; 
	std::cin >> n;

	std::vector<int> p(n);
	for(int i=0; i<n; i++){
		std::cin >> p[i];
	}
	
	int count = 0;
	for(int i=0;i<n;i++){
		if(p[i] != i+1) count++;
	}

	if(count <= 2){
		std::cout << "YES" << std::endl;
	}else{
		std::cout << "NO" << std::endl;
	}
}