#include <stdio.h>
int main()
{
	char i;
	for(i='f';i>='a';i--){
		char j;
		for(j='f';j>=i;j--){
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
 } 
