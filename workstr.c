#include<stdio.h>
//strcat strncat 
#include<string.h>
#define SIZE 200

int main(int argc, char const *argv[])
{
	char str1[SIZE] = "I study programming";
	char str2[] = " on language C";
	char str3[SIZE] = "All customer will be";
	char str4[] = "professional programmer on language C";
	char str5[SIZE] = "We work on";
	char str6[] = " operation Linux";

	strcat(str1,str2);
	fputs(str1,stdout);
	printf("\n");
	

	strncat(str3,str4,70);
	fputs(str3,stdout);
	printf("\n");

	strcat(str5,(str6+10));
	fprintf(stdout,"%s\n",str5);
}
