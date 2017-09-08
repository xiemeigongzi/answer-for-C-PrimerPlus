#include <stdio.h>
int search();
int main()
{
	int x;
	printf("Input one number\n");
	scanf("%d", &x);
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	
	int location;
	location=search(x,a,sizeof(a)/sizeof(a[0]));
	if(location!=-1){
		printf("%d at %d site.\n", x, location);
	}
	else{
		printf("Not the the queue.\n");
	}
	return 0;
}

int search(int y, int a[], int length )
{
	int i;
	int result=-1;
	for(i=0;i<length;i++){
		if(a[i]==y){
			result=i;
			break;
		}
		else{
			result=-1;
		}
	}
	return result;
}
