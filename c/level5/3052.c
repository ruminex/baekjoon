#include <stdio.h>

int main(void)
{
    int a;
	int result = 0;
	int Remain[10] = { 0 };
	
	for(int i=0;i<10;i++){
		scanf("%d", &a);
		Remain[i] = (a % 42);
	} //나머지를 배열 속에 저장
    
	for(int j=0;j<10;j++){
		int count = 0;
		for(int k=(j+1);k<10;k++){
			if(Remain[j] == Remain[k]){
				count++;
			}	
		}
		if(count == 0){
			result++;}
	}
	//겹치는게 한번 이라도 나오면 숫자 갯수에 포함x
	printf("%d",result);
   
    return 0;
}
