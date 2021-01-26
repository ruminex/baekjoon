#include <stdio.h>

int main(void)
{
    int N, I_tmp, M;
	double Mean;
	
	scanf("%d",&N); //몇개를 받는지 표현
	
	int Init[N];
	double Second[N];
	
	for(int i=0; i<N; i++){
		scanf("%d",&I_tmp);
		Init[i] = I_tmp;        //처음 기록 받은걸 배열에 저장
	}
	
	M = Init[0];
	
	for(int j=0; j<N; j++){
		if(M < Init[j]){
			M = Init[j];
		}	
	}                           //최대값 찾기
	
	for(int k=0; k<N; k++){
		Second[k] = ((double)Init[k] / (double)M * 100.0);		//점수/M*100 조건 적용
	}
	
	for(int l=0; l<N; l++){
		Mean += Second[l];
	}
	
	Mean = (Mean/N);    //평균구함
	printf("%lf",Mean);
	
	return 0;
}
