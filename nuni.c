#include<stdio.h>
int lower(int c);


int main(void)
{
		int i;
		int b;
		int c;
		while((b = lower(c)) && b != '\n')
			putchar(b);
}
int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
