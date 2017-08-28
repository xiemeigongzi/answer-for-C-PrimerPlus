#include <stdio.h>
int main()
{
	int a=0, b=0, c=0;
	printf("INput 3 numbers: \n");
	scanf("%d %d %d", &a, &b,&c);
	
	int max=0;
	if(a>b){
		max=a;
		if(max>c){
			printf("MAX is %d\n", max);}
        else{
        	max=c;
        	printf("MAX is %d\n", max);
		}			
		}
	else{
		max=b;
		if(max>c){
		printf("MAX is %d\n", max);}
		else{
			max=c;
			printf("MAX is %d\n", max);
		}
		
	}
	
	return 0;
}

