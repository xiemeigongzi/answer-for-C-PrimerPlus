#include <stdio.h>
int main()
{
	int x;
	int cnt=1;
	double sum=0;
	int number[100];
	int a=scanf("%d", &x);
	number[0]=x;
	while(a==1){
		a=scanf("%d", &x);
		number[cnt]=x;
		cnt++;
		sum=sum+x;
		printf("a=%d x=%d cnt=%d sum=%f\n",a,x,cnt,sum); 
		/*int i;
		for (i=0;i<=cnt;i++){
			printf("number[%d]=%d cnt=%d a=%d sum=%f\n", i,number[i], cnt, a, sum);
		}
		*/ 
	}
	printf("sum=%f, cnt=%d and average =%f \n ", sum, cnt,sum/cnt);
	
	return 0;
}
