#include <stdio.h>
#define RATE1 0.13230 
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1  360
#define BREAK2  468
#define BREAK3  720
#define BASE1  (RATE*BREAK1)
#define BASE2  (BASE1+ (RATE2*(BREAK2-BREAK1)))
#define BASE3  (BASE1+BASE2+ (RATE3*(BREAK3-BREAK2)))
int main()
{
	double kwh;
	double bill;
	
	
	
	return 0;
}
