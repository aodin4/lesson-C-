#include<stdio.h>
#include<string.h>
#define SIZE 50

int main()
{
	int count;
	int count1;
	char c;
	int digit[10];
	count = count1 = 0;
	for(int i = 0; i < 10; i++)
		digit[i] = 0;
	while((c = getchar()) != EOF)
	{
		if(c != ' ')
		{
			count++;
		}
		else 
{
			digit[count1] = count;
				++count1;
				count = 0;
		}
	}

	for(int i = 0;i < count1;i++)
	{
		for(int j = 0; j < digit[i];j++)
				printf("#");
				printf("\n");
	}
	
	
}

