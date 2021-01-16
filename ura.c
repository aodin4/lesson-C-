#include<stdio.h>
#include<string.h>
#include<math.h>
long htoi(char s[], int count);

int main()
{

	char c;
	int i;
	char mass[100];
	i = 0;
	while((c = getchar()) != '\n')
	{
		mass[i] = c;

		++i;


		
	}
	printf("%ld\n",htoi(mass,i - 1));

}

long htoi(char s[], int count)
{
	long Q;
	Q = 0;
	int i;
	i = 2;
	int t;
	t = 0;
	while(count - i >= 0)
	{
		t = 0;
		if(s[i] == 'A' || s[i] == 'a')
			t = 10;
		else if(s[i] == 'B' || s[i] == 'b')
			t = 11;
		else if(s[i] == 'C' || s[i] == 'c')
			t = 12;
		else if(s[i] == 'D' || s[i] == 'd')
			t = 13;
		else if(s[i] == 'E' || s[i] == 'e')
			t = 14;
		else if(s[i] == 'F' || s[i] == 'f')
			t = 15;
		else
			t = s[i] - 48;
	
		Q = Q + t*pow(16, (count - i));
		++i;
		
	}	
	
	return Q;

}
