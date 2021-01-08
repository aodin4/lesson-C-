#include<stdio.h>
#include<conio.h>

long int  factorial(long int n);
int main()
{
	long int n;
	
	scanf("%d",&n);
	if (n > 0)
	printf("%d! = %d\n",n,factorial(n));
	else
		printf("Error. n must be >= 0\n");

}


long int factorial(long int n)
{	
	
	if(n == 0 || n == 1) return 1;
	return n * factorial(n-1);	
	
}
