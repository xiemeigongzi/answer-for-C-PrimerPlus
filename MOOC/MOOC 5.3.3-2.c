#include <stdio.h>
int main()
{
	int a=18;
	int b=12;
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
	return 0;
}

//t   a   b 
//    12  18
// 12  18  12
// 6   12  6
// 0   6  0
