//
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main()
{
	char name[40];
	
	printf("what is your name?\n");
	scanf("%s", name);
	printf("hello, %s, %s\n", name, PRAISE);
	printf("you name of %u letters occupies %u memory cells.\n",
			strlen(name), sizeof(name));
	printf("the phrase of praise has %u letters", strlen(PRAISE)); 
	printf("and occupies %u memeory cells.\n", sizeof(PRAISE)); 
	
	
	return 0;
 } 
 
