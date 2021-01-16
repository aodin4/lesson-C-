#include<stdio.h>

#define IN 1
#define OUT 0

int htoi(char s[]);
int main()
{
char hox[4] = {'0','x','F','f'};
printf("%d\n",htoi(hox));
return 0;


}

int htoi(char s[])
{
	int i, number, ndigit,hexdig;
	i = 0;
	if(s[i] == '0')
	{
		i++;
		if(s[i]=='x' || s[i]=='X')
			i++;
}
ndigit = IN;
number = 0;
for(;ndigit == IN; i++)
{
	if(s[i] >= '0' && s[i] <= '9')
		hexdig = s[i] - '0';
	else if(s[i] >= 'a' && s[i] <= 'z')
		hexdig = s[i] - 'a' + 10;
	else if(s[i] >= 'A' && s[i] <= 'Z')
		hexdig = s[i] - 'A' + 10;
	else
		ndigit = OUT;
	if(ndigit == IN)
		number = number*16 + hexdig;
	}
	return number;
}



