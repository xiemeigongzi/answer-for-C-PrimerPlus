#include <stdio.h>
int main()
{
	int number;
	int count=0;
	int sum=0;
	
	do{
	scanf("%d", &number);
	if(number!=-1){
		sum=sum+number;
		count++;
	}
	}while(number!=-1);
	printf("%f\n",1.0*sum/count);
	return 0;
}
