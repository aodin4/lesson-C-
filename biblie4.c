#include<stdio.h>

int main()
{
	int c, i ,nwhite, nother;
	nwhite = nother = 0;
	int ndigit[10];

	for(i = 0; i < 10;i++)
		ndigit[i] = 0;
	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else
			++nother;
	}
		printf("digits=");
		for(i = 0; i < 10; i++)
			printf(" %d",ndigit[i]);
		printf(", nwhite = %d, nother = %d\n",nwhite,nother);


}

