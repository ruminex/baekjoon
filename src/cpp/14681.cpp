#include <iostream>
using namespace std;

int main() {
	
	int x,y;
	int quad;
	
	std::cin >> x >> y;
	
	if(x>0 && y>0){
		quad = 1;
	}
	
	if(x<0 && y>0){
		quad = 2;
	}
	

	if(x<0 && y<0){
		quad = 3;
	}
		
	if(x>0 && y<0){
		quad = 4;
	}
	
	std::cout << quad;
	return 0;	
}
