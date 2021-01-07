#include<stdio.h>
#define UPPER 300
#define STEP 20
void fahrent(int fahr, int celsius);
int main()
{	
	int fahr;
	int celsius;
	printf("Fahrengeit\tCelsius\n");
	fahrent(fahr,celsius);
}

void fahrent(int fahr, int celsius)
{
	for(fahr = 0;fahr <= 300;fahr = fahr + 20)
	printf(" %d\t        %d\n", fahr, celsius = (5 * (fahr - 32) / 9));
		
}

