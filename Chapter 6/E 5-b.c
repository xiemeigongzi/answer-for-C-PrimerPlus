#include <stdio.h>
int main()
{
	int i,j;
	scanf("%d", &j);
	i=1+2*(j-1);
	char c;
	scanf("%c", &c);
	int a[j][i];
	int p,q;
	for(p=0;p<j;p++)
	{
		for(q=0;q<i;q++)
		{
			if(q==i/2+1){
				a[p][q]=c+p;
			printf("%c",a[p][q]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
