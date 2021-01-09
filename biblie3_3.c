#include<stdio.h>


int main(void)
{
	int c;
	int nl;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{	
			nl++;
			if(nl <=1)
			{
			putchar(c);
			}	
		}
		else
		{
			nl = 0;
			putchar(c);
		}
	}


}



