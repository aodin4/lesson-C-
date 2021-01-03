#include<stdio.h>
	
int main()
{
	int sum;
	int nechet;
	int i;
	sum = nechet = 0;
	for ( i = 0; i <=100; i++) 
		if ( i%2 == 0) { 
		sum = sum + i;
		
}

		if ( i%2 != 0) {
		nechet = nechet + i;
}		 
	printf("%d\t%d\n", sum, nechet);		   
	return 0;
}
