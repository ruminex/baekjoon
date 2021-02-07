#include <stdio.h>

int main(void)
{
	int Test_Case, Num, tmp;
	double Percent, Mean;
	
	scanf("%d", &Test_Case); //몇번 할건지 표현
	
	for(int i=0; i<Test_Case; i++){
		
		int total = 0;  //입력한 점수의 총점(평균구할때 씀)
		int M_over = 0; //평균을 넘는 원소의 개수
		scanf("%d", &Num);
		int Point[Num]; //학생의 수만큼 입력할 공간 만듬 
		
		for(int j=0; j<Num; j++){
			scanf("%d", &tmp);
			Point[j] = tmp;
			total += tmp;
		}
		Mean = ((double)total / (double)Num);
		
		for(int k=0; k<Num; k++){
			 if(Point[k]>Mean){
				 M_over++;
			 }	
		}
		
		Percent = (((double)M_over / (double)Num))*100; 
		printf("%.3lf%%\n",Percent);
	}
	
	return 0;
}
