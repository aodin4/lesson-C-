#include<stdio.h>
#define SIZE_STR 100
void string(char *p_string);
int main()
{	
	char str[SIZE_STR];
	char *p_string= str;
	printf("Add number for shift\n");
	fgets(str,SIZE_STR,stdin);
	string(str);
	fprintf(stdout,"Shifr string: %s\n",str);
	printf("Razshifr strok");
	string(str);
	printf("Rasshifr stroka: %s\n",str);

}

void string(char *p_string)
{
	while(*p_string)
	{
	*p_string = *p_string ^ 31;
	p_string++;
	}
}
