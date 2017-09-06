#include <stdio.h>
int main()
{
	int i;
	int N;
	for(i=1;i<=9;i++){
		int j;
		for(j=0;j<=9;j++){
			int k;
			for(k=0;k<=9;k++){
				if(i<10){
					if(j<10){
						if(k<10){
					if(100*i+10*j+k==i*i*i+j*j*j+k*k*k){
	printf("%d %d %d", i,j,k);
						}
					}
				}
	
	}
			}
		}
	}
	
	return 0;
}
