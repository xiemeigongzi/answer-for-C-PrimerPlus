#include <stdio.h>
int main()
{
	double value;
	int i;
	for(i=1,value=36; value>0; i++, value/=2)
		printf("%d %3.1000f\n", i,value);
	return 0;
}
