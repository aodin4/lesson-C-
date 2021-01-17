#include<stdio.h>


int main()
{	
	int massiv[10];
	for( int i = 0; i < 10; i++)
		massiv[i] = 0;
	
	int i;
	i = 1;
	while(i < 10)
	{
		if(i <=4)
		{
			massiv[i] = i;
			printf("%d = %d\n",i,massiv[i]);
		}
		else if(i >= 5)
		{
			
			massiv[i] = i * i;
			printf("%d = %d\n", i, massiv[i]);

		}
	i++;
	}
}

