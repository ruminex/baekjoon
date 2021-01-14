#include <iostream>
using namespace std;

int main(){
	
	int first, second;
	std::cin >> first >> second;
	
	if(first > second){
		std::cout << ">" <<endl;
	}
	
	if(first == second){
		std::cout << "==" <<endl;
	}
	
	if(first < second){
		std::cout << "<" <<endl;
	}
	
}