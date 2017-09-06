#include <stdio.h>
int main()
{
	int n=4;
	int cnt=0;
	int i;
	while(n>0){
	n--; cnt++;}
	printf("%d",cnt);
	for(i=1;i<=9;i++){
		int j;
		for(j=0;j<=9;j++){
			int k;
			for(k=0;k<=9;k++){
if(100*i+10*j+k==pow(i,cnt)+pow(j,cnt)+pow(k,cnt)){
	printf("%d %d %d ", i,j,k);
}
			}
		}
	}
	return 0;
}
