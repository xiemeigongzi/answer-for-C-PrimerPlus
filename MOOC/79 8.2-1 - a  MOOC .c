#include <stdio.h>
int search(int key, int a[], int length);
int main()
{
	int x;
	scanf("%d",&x);
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int loc;
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d %d \n",x,n);
	loc=search(x,a,n);
	while(x!=-1){

		if(loc>0){
			printf(" %d at %d site.\n",x,loc);
		}
		else{
			printf("Not in the queue.\n");
		}
		scanf("%d", &x);
		loc=search(x,a,n);
}
	return 0;
}

int search(int key, int a[], int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
		}
	}
	return ret;
}
