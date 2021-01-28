#include <stdio.h>
#include <string.h>

int main(void)
{
	int Test_N;
	char Case[81];
	
	scanf("%d", &Test_N);
	
	for(int i=0; i<Test_N; i++)
	{
		int Score = 0;
		scanf("%s", Case);
		int j=0;
		int repeat = 1; 	//반복횟수
		while(Case[j] != '\0') // 배열마지막이 NULL 이면 탈출
		{
			
			if(Case[j] == 'O')
			{
				Score += repeat; //반복된 횟수 만큼 더하기
				repeat++;
			}
			
			if(Case[j] == 'X')
			{
				repeat = 1;
			}
			
			j++;
		}
		printf("%d\n",Score);
					
	}
		
	return 0;
}
