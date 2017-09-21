#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main()
{
	char name[40];
	
	printf("what is your name?\n");
	scanf("%s", name);
	printf("hello, %s, %s\n", name, PRAISE);
	return 0;
 } 
