#include <stdio.h>
int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	printf("Input One number.\n");
	scanf("%d", &x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d at %d site\n",x,loc);
	}
	else{
		printf("%d is not in the queue.\n",x);
	}
	return 0;
}

int search( int key, int a[], int length)
{
	int i;
	int ret=-1;
	for(i=0;i<length;i++){
		if(key==a[i]){
			ret=i;
			break;
		}
		else{
			ret=-1;
		}
	}
	return ret;
}
