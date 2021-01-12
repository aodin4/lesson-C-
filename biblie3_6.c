#include<stdio.h>


int main(void)
{
	int c;

	while((c=getchar()) != EOF)
	{
		if(c == ' ' || c == '\t')
		{
			putchar(c);
			printf("\n");
		}
		else
		{
			putchar(c);
		}

	}

}
