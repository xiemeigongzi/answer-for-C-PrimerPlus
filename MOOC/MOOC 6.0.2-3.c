#include <stdio.h>
int main()
{
	int n;  int i=1;
	scanf("%d", &n);
	int first =1;
	while(i<n){
		first=first*10;
		i++;
	}
	printf(" first=%d i=%d\n", first,i);	
	i=first;
	while(i<10*first){
		int t=i;
		int sum=0;
		do{
			int d;
			d=t%10;
			t=t/10;
			int p=1;
			int j=0;
			while(j<n){
				p*=d;
				j++;
			sum+=p;
			}
		}while(t>0);
		if(sum==i){
			printf("%d\n",i);
		}
		i++;
}
	return 0;
}
