#include <stdio.h>
int search();
int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("a[%d]=%d\n", i,a[i]);
	}
	printf("%d\n", sizeof(a)/sizeof(a[0]));
	
	int x;
	scanf("%d", &x);
	int location;
	location = search(x,a, sizeof(a)/sizeof(a[0]));
	if(location !=-1){
		printf("%d at site of %d", x,location);
	}
	else{
		printf("None");
	}
	return 0;
}

int search(int x, int a[],int length){
	int ret=-1;
	int i=0;
	for(;i<length;i++){
		if(x==a[i]){
			ret=i;
			break;
		}
	}
	return ret;
}
