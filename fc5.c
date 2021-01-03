#include<stdio.h>

int main()
{
	int n; 		/* число n */
	int sum;	/* сумма числа n */
	int k;		/* количество цифр числа n */
	
	sum = k = 0;
	printf("n=");
	scanf("%d", &n);
	
	do
	{
	  k++;
	sum += n%10;
	n /= 10;
 	} while (n != 0) ;
	printf("sum = %d k = %d\n", sum, k);
	return 0;








}
