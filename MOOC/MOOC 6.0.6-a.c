#include <stdio.h>
int main()
{
	double sum=2.0;
	double a=2,b=1;
	double c;
	int i;
	int cnt=2;
	int n;
	scanf("%d", &n);
	while (cnt<=n){   //  a   b   c      sum
		c=a+b;        //  2   1  3    
		b=a;          //   
		              //       
		sum+=c/b;     // 
		a=c;          // 
		cnt++;       //
	}	
	printf("%.2f", sum); 
	return 0;
}
