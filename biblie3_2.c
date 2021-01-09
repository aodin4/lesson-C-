#include<stdio.h>


int main()
{
	int c;
	int nl;
	int nt;
	int ny;
	nl = 0;
	nt = 0;
	ny = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			nt++;
		} 
		else if(c == '\n')
		{
			nl++;
		}
		else if(c == '\t')
		{	
			ny++;
		}

	}	
	printf("Probel = %d Nextstring = %d Endstring = %d\n",nt,nl,ny);


}
