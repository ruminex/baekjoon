#include <stdio.h>

int main() {
	
	int up_input, down_input;
	int first, second, third, final_result;
	
	scanf("%d",&up_input);
	scanf("%d",&down_input);
	
	first = up_input % 10;
	up_input = up_input / 10;
	
	second = up_input % 10;
	up_input = up_input / 10;
	
	third = up_input % 10;
	
	
	first = first * down_input;
	second = second * down_input * 10;
	third = third * down_input * 100;
	final_result = first + second + third;
	
	printf("%d\n",&first);
	printf("%d\n",&second);
	printf("%d\n",&third);
	printf("%d\n",&final_result);
	
}
