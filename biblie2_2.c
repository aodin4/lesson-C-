#include<stdio.h>


int main()
{
	int c, i;
	char s[40];
	char b[40];
	while((c = getchar()) != EOF)
	{
		for(i = 0; i < 40;i++)
		{
			s[i] = c;
			for(int j = 0; j < s[i]; j++)
				if(c != '\n')
				{
					b[j] = c;
					j++;
					printf("%d",b[j]);
				}
			
		}	

	}
}
