#include <stdio.h>
void sum(int begin, int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum=sum+i;
	}
	printf("the sum of %d to %d is %d\n",begin,end,sum);
}

int main()
{
	sum(0,10);
	sum(20,30);
	sum(35,45);
	return 0;
}
