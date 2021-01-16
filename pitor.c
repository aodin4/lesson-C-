#include<stdio.h>
#include<stdlib.h>
//Program to find prime numbers//

int main()
{
	int c;

	while((c = getchar()) != 'a')
	{
		if(c != '\n')
		{
			printf("c was %c, value %d\n", c, c);
			c = getchar();
		}
	}

}




