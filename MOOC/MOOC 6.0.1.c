#include <stdio.h>
int main()
{
	int a=2;
	//scanf("%d",&a);
	int i, j, k;
	i=a;
	
	while(i<=a+3)
	{
		j=a;
		while (j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j){
					if(j!=k){
						int cnt=0;
						if(i!=k){
							printf("%d%d%d", i,j,k);
							cnt++;
							if(cnt==6){
								printf("\n");
								cnt=0;
							}
							else{
								printf(" ");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
