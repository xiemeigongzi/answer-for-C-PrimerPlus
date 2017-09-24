#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int count=1 ;
	int mag=1;
	while(t>9)
	{
		t=t/10;
		mag=mag*10;
		count++;
	 } 
	printf("there are %d bits , and mag is %d. \n", count,mag);
	
	int a;
	int ret=0;
	t=n;
	while(t>0){
		a=t/mag;
		ret=ret*10+a;
		mag=mag/10;
		printf("%d\t",a);
	} 
	printf("the reslut is %d \t. ", ret);
	return 0;
}
