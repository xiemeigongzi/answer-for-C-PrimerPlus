#include <stdio.h>
int main()
{
	int x;
	double sum=0.00;
	int cnt=0;
	
	int number[100];
	
	scanf("%d",x);
	while(x!=-1){
		number[cnt]=x;
		//
			int i;
			for(i=0;i<=cnt;i++){
				printf("%d\n", number[i]);
			}
			printf("\n");
		
		//
		sum=sum+x;
		cnt++;
		scanf("%d", &x);
		printf("%d\t",cnt);
	}
	if(cnt>0){
		printf("%f\n", sum/cnt);
		int i;
		for(i=0;i<=cnt;i++){
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);
			}
		}
	}
	return 0;
}
