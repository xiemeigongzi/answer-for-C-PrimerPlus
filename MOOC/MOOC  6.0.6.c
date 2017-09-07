#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int z=2,m=1;
	double sum=0.0;
	int i;
	int t;
	for(i=1;i<=n;i++){
	 sum=sum+z/m;
	 t=z;
	 z=m+z;
	 m=t;		
	}
	printf("%d %d \n",z,m);
	printf("%0.3f\n",sum);
	return 0;
}
