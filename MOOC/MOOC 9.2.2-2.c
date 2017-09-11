#include <stdio.h>
int main()
{
	int i[10]={0};
	int *p=&i[0];
	
	printf("%p\n",p);
	printf("%p\n",&i);
	
	
	return 0;
}
