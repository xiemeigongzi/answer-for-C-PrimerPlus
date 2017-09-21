#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 
int main()
{
	char name[40];
	double weight, volume;
	int size;
	int letters;
	
	printf(" Hi , what is your name£¿\n");
	scanf("%s",name);
	printf("%s £¬what is your weight?\n",name);
	scanf("%lf",&weight);
	size = sizeof(name);
	letters=strlen(name);
	
	volume=1.0*weight/DENSITY;
	printf("well, %s, your volume is %2.2f cubic feet.\n",name,volume);
	printf("also, your first name has %d letters.\n",letters);
	printf("and we have %d bytes to store it.\n", size);
	
	return 0;
}
