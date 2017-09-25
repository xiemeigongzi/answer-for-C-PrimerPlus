#include <stdio.h>
int main()
{
 	int x;
	double sum=0;
	int cnt=0;
	int number[100];
	int a;
	a= scanf("%d",&x);
//	printf("a=%d and x=%d\n", a,x);
	while(a==1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d", &x);
	} 
	
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<=cnt;i++){
			if(number[i]>sum/cnt){
				printf("%d\n", number[i]);
			}
		}
	}
	return 0;
 } 
