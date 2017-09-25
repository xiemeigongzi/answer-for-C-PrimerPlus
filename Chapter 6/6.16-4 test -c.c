#include <stdio.h>
int main()
{
	int i;
	char a='a';
	for(i=0;i<6;i++){
		int j;
			for (j=0;j<=i;j++){
				printf("%c", a++);
			}
		printf("\n");
	}
	return 0;
}
