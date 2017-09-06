#include <stdio.h>
int main()
{
	int a=2;
	int cnt=0;
	int i;
	for(i=a;i<=a+3;i++){
		int j;
		for(j=a;j<=a+3;j++){
			int k;
			for(k=a;k<=a+3;k++){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							printf("%d%d%d",i,j,k);
							cnt++;
							if(cnt==6){
								cnt=0;
								printf("\n");
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
}
