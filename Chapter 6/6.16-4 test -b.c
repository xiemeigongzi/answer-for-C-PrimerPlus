// Use nested loops to produce the following pattern:
// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU
#include <stdio.h>
int main()
{
	char ch='A';
	int i;
	for (i=0;i<7;i++){
		int j;
		for(j=0;j<i;j++){
			printf("%c", ch++);	
		}
		printf("\n");
	}
	return 0;
}
