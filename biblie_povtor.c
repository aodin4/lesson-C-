#include<stdio.h>

int main(void)
{
	char c;
	int count,count1;
	count = count1 = 0;
	int ndigit[10];
	
	for(int i = 0; i< 10;i++)
		ndigit[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c != ' ')
		{
			count++;
		}
		else
{
		  ndigit[count1] = count;
			++count1;
			count = 0;
		}
	}

	for(int i = 0; i < count1;i++)
	{
		for(int j = 0; j < ndigit[i];j++)
				printf("#");
				printf("\n");
	}
}
