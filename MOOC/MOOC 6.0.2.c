#include <stdio.h>
int main()
{
	int a,b,c;
	int cnt=0;
	int i;
	while (i<=9){
		int j;
		while(j<=9){
			int k;
			int cnt=0;
			while(k<=9){
				if(i>=1){
					if(j>=1){
						if(k>=1){
if(100*i+10*j+k==i*i*i+j*j*j+k*k*k){
			printf("%d%d%d",i,j,k);
		cnt++;
}
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
	printf("%d%d%d",i,j,k);
				k++;
			}
			j++;
		}
		i++;
	}

	return 0;
}
