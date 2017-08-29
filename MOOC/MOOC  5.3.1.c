#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    double sum=0.0000;
    
    for(i=1;i<n;i++)
    {
		sum=sum+1.0000/i;
	}
	
	printf("f(%d)=%f\n", n,sum);
	return 0;
}
