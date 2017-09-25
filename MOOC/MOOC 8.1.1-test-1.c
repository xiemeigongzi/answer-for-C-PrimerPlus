#include <stdio.h>
int main()
{
	int x;
	int cnt=0;
	double sum=0;
	int number[100];
	int a=1;
	double average;
	while(a==1)
	{	
		a=scanf("%d", &x);
		number[cnt]=x;
		cnt++;
		sum=sum+x;
		printf("a=%d x=%d cnt=%d sum=%f\n",a,x,cnt,sum); 
	   
	    if (a==0){
	    	cnt=cnt-1;
	    	number[cnt]='\0';
	    	sum=sum-x;
		}
	}
	printf("sum=%f, cnt=%d and average =%f \n ", sum, cnt,sum/cnt);
	
	int i;
	for(i=0;i<=cnt;i++){
		if(number[i]>sum/cnt){
		
		printf("number[%d]=%d .\n", i,number[i]);
	}}
	return 0;
}
