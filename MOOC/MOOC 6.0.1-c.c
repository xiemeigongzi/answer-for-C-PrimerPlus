#include <stdio.h>
int main()
{
	int a=3;
	int i,j,k;
	int cnt=0;
	i=a;
	while(i<=a+3)
	{
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j&&j!=k && k!=i){
					cnt++;
					printf("%d%d%d",i,j,k);
					if(cnt==6){
						printf("\n");
						cnt=0;
					}else{
						printf(" ");
					}
				}
				k++;
			}
			j++;
		} 
		i++;
	 } 
	return 0;
}
