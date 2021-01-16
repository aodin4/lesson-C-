#include<stdio.h>
void show_message(void);

int main(void)
{
	int count;
	count =0;
	while(count < 10)
	{
		show_message();
		count++;

	}
}

void show_message(void)
{
	printf("hello\n");
	
}
