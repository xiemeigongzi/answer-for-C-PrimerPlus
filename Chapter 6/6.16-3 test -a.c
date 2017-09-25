#include <stdio.h>   // A B C D E F 
int main()           // 1 2 3 4 5 6
{
	int i;
	char ch='F';
	for(i='F';i>='A';i--){
		int j;
		for(j='F';j>=i;j--){
			printf("%c",j);
		}
		printf("\n");
	}
	
	return 0;
}
