#include<stdio.h>



int main() 
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != '1')
	     if (c == '\n')
		++nl;
	printf("%d\n", nl);
	return 0;



}
