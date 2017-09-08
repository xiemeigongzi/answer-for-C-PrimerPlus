#include <stdio.h>
int main()
{
	int i;
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int location;
	printf("Input One number\n");
	scanf("%d", &x);
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
	if(a[i]==x){
		location=i;
		break;
	}
	else{
		location=-1;
	}
}
	if(location!=-1){
		printf("%d at %d site.\n",x,location);
	}
	else{
		printf("Not in the queue.\n");
	}
return 0;}
