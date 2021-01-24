#include <stdio.h>

/*int main() {
	int tmp,Max,index;
	int N[9];
	
	for(int i=0; i<9; i++){
		scanf("%d",&tmp);
		N[i] = tmp;
	}
	Max = N[0];
	
	for(int j=0; j<9; j++){
		if(Max < N[j]){
			Max = N[j];
			index = j;
		}
	}
	
	printf("%d\n",Max);
	printf("%d",(index+1));
	
	return 0;
}
 내가 써본 코드 (21번에서 오류남)*/

int main() {
    int arr[9], Max = 0, index;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > Max)
        {
            Max = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", Max, index+1);
}


