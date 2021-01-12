#include<stdio.h>

int main()
{
	int c;
	int i;
	i = 0;
	int massiv[128];

	for(i = 0; i < 128; i++)
		massiv[i] = 0;

	while((c = getchar()) != '\n')
	{
		++massiv[c];
	}
	for(i = 0; i < 128;i++)
		{
			if(massiv[i] != 0)
			{
				c = i;
				printf("symbols %c vstrch %d raz\n",c,massiv[i]);
			}
		}	


}
