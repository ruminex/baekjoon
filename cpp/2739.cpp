#include <iostream>
using namespace std;

int main(){
	
	int N;
	int mul = 1;
	std::cin >> N;
	
	for(int i = 0; i<9; i++){
		std::cout << N << " * " << (i+1) << " = " << mul * N <<endl;
		mul++;
	}
	
}