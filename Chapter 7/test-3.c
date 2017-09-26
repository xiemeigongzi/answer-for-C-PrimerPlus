#include <stdio.h>
int main()
{
	int i,a,t;
	i=0;
	a=10;
	t=0;
	for(i=0;i<a;i++)
	{
		if(i%2==0)
		  break;
		t+=i;
	}
	printf("%d",t);
	return 0;
}

//  i   t
//  0   0
//  1   1
//  2   1
//  3   4
//  4   4
//  5   9
//  6   9
//  7  16
//  8  16
//  9  25
//  10  25
