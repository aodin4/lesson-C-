#include<stdio.h>

#define IN 1 
#define OUT 0

int main() 
{
	int c, state, i, nc, ndigit[11], j;
	state = OUT;
	nc = 0;
	
	for (i = 0; i < 11; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != '1') {
		++nc;
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			--nc;
		if (nc <= 10)
			++ndigit[nc];
		nc = 0;

}
	else if (state == OUT)
	{
		state = IN; 
	}

	
}
	for (i = 1; i < 11; i++) {
	printf("%d: ", i);
	for (j = 1; j <= ndigit[i]; ++j)
		printf("#");
	printf("\n");

}
	return 0;
}
