#include <stdio.h>
int main()
{
	printf("Type int has a size of %d bytes.\n", sizeof(int));  //ֻ��C99 ֧�� %zd; û��Ҫ��ס��
	printf("Type char has a size of %d bytes.\n", sizeof(char));
	printf("Type long has a size of %d bytes.\n", sizeof(long));
	printf("Type long long has a size of %d bytes.\n", sizeof(long long));
	printf("Type double has a size of %d bytes.\n", sizeof(double));
	printf("Type long double has a size of %d bytes.\n", sizeof(long double)); 

	return 0;
}
