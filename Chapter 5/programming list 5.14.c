#include <stdio.h>
int main()
{
	char ch;
	int i;
	float f1;
	
	f1=i=ch='C';
	printf("ch=%c, i=%d, f1=%2.2f\n", ch, i, f1);
	// ch=C  i=67  f1=67.00
	ch= ch+1;    // ch = D  68
	i=f1+2*ch;    // i=67+2*68= 203
	f1=2.0*ch+i;  //f1=2*68+ 203= 339
	printf("ch=%c, i=%d, f1=%2.2f\n", ch, i, f1);
	ch=1107;
	printf("now ch = %c\n",ch);
	ch=80.89;
	printf("now ch = %c \n",ch);
	
	return 0;
}
