#include <stdio.h>
double divide(int a, int b, double *c);
int main()
{
	int a=5;
	int b=2;
	double c;
	if(divide(a,b,&c)){
		printf("%d/%d=%f",a,b,c);
	}
	return 0;
}

double divide(int a, int b, double *c)
{
	int ret=1;
	if(b==0){
		ret=0;
	}
	else{
		*c=a/b;
	}
	return ret;
}
