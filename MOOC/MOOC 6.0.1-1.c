#include <stdio.h>
int main()
{
	int a=2;
	//scanf("%d", &a);
	int i=0,j=0,k=0;
	int cnt=0;
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=k+3;k++){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							cnt++;
							printf("%d%d%d",i,j,k);
				/*if(cnt==6){
					printf("\n");
					cnt=0;
				}
				else{
					printf(" ");
						}*/
					}
				}
				}
			}
		}
	}return 0;
}
