#include <stdio.h>
void butler(void);
int main()
{ 
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	return 0;
}
void butler()
{
	printf("You rang, sir?\n");
}
