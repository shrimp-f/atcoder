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
 
	int K, X;
 
	std::cin >> K >> X;
 
	int min = X-(K-1);
	int max = X+(K-1);

	if(min < -1000000){
		min = -1000000;
	}
	if(max > 1000000){
		max = 1000000;
	}

	for(int i=0;i<max-min+1;i++){
			std::cout <<  min+i << " ";
	}
 
 
}