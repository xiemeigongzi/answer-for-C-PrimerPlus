#include <stdio.h>
int main()
{
	int sum=0;
	int cnt=0;
	int x=0;
	scanf("%d", &x);
	while(x!=-1){
		scanf("%d", &x);
		sum=sum+x;
		cnt++;		
	}
	printf("%f",1.0*sum/cnt);	
	return 0;
 } 
