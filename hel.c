#include<stdio.h>
int main()
{
	int c, nl, nt, ks;
	nt = 0;
	nl = 0;
	ks = 0;
	while((c = getchar()) != '1') {

	     if (c =='0')
	      ++ks;
	     if (c =='\t')
	      ++nt;
	     if (c ==' ')
	      ++nl;
}
	printf("%d %d %d\n",ks,nt,nl);
	return 0;






}
