#include <stdio.h>
int main()
{
	char a;
	char c1,c2;
	do
	{
		scanf("%c", &a);
	}  while(a<'A'||a>'Z');
	
	for(c1='A'; c1<=a;c1++)
	{
		int i;
		for(i=0;i<c1;i++){
			printf(" ");
		}
		
		for(c2='A'; c2<c1;c2++){
			printf("%c", c2);
		}
		for (;'A'<=c2;c2--){
			printf("%c", c2);
		}
	}
	return 0;
}
