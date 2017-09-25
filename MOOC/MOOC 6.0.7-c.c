#include <stdio.h>
int main()
{
	int a,n;
	scanf ("%d %d", &a,&n);
	int mag=1;
	int i;
	int sum=0;
	for(i=1;i<=n;i++){
		
		sum=sum+a*mag;
		mag=mag*10;
	}
	printf("%d",sum);
	
	return 0;
}
