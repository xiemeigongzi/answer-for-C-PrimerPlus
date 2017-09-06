#include <stdio.h>
int main()
{
	int n=3;
	int first=1;
	int i=1;
	while(i<n){
		first*=10;
		i++;
	}
	i=first;
	int t=0, sum=0;
	while(i<first*10){
		t=i;
		int d;
		do{
			d=t%10;
			t=t/10;
			int p=1;
			int j=0;
			while(j<n){
			p=p*d;
			j++;	
			} 
			sum=sum+p;
		} while(t>0);
		if(sum==i){
			printf("%d",i);
		}
		i++;
	}
	return 0;
}
