#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	char b[100];
	scanf("%s", a);
	printf("%s\n", a);
	printf("%d\n", strlen(a));
	char i;
	int j;
	for(j=0,i=strlen(a)-1; i>=0;j++,i--){
		b[j]=a[i];
	}
	
	for(j=0;j<strlen(a);j++){
		printf("b[%d]=%c\n", j, b[j]);
	}
	return 0;
}
