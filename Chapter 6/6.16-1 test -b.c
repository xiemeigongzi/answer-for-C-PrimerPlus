#include <stdio.h>
int main()
{
	int a[26];
	int cnt=0;
	a[0]='a';
	int i;
	for (i=0;i<26;i++){
		cnt++;
		a[i]='a'+i;
		printf("a[%d]=%c  ", i,a[i]);
		if(cnt==5){
			printf("\n");
			cnt=0;
		}
	} 
	
	return 0;
}
