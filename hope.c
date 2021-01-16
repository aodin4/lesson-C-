#include<stdio.h>
#include<math.h>
long hsof(char s[], int lin);
int main()
{
	char c;
	int i;
	char massiv[100];
	i = 0;
	while((c = getchar()) != '\n')
	{
		massiv[i] = c;
		++i;


	}
	printf("%ld\n",hsof(massiv,i - 1));

}

long hsof(char s[], int lin)
{
	long R;
	R = 0;
	int i;
	i = 0;
	int P;
	P = 0;

	while(lin - 1 >= 0)
	{
		P = 0;
		if(s[i] >= '0' && s[i] <= '9')
			P = s[i] - 48;
		
			R = R + P*pow(8,(lin - 1));
		    i++;

	}
	return R;
}

