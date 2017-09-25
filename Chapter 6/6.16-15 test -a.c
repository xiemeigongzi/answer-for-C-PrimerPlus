#include <stdio.h>
int main()
{
	char ch[255];
	int i=0;
	
	while(scanf("%c", &ch[i] ), ch[i]!='\n')
	{
		
		i++;
	}
	for(;i>=0;i--){
		printf("ch[%d]=%c\n",i,ch[i]);
	}
	return 0;
}
