#include<stdio.h>
#define SIZE 5



int main()
{
	int number[5] ={1,2,3,4,5};
	int *p_num1 = &number[0];
	int *p_num2 = &number[1];
	int *p_num3 = &number[2];
	int *p_num4 = &number[3];
	int *p_num5 = &number[4];

	int *p_numbers[5] = {p_num1,p_num2,p_num3,p_num4,p_num5};
	for(int i = 0;i<SIZE;i++)
	fprintf(stdout,"Posit[%d]\tValue %c\tAdress =%p\n",i,*p_numbers[i],p_numbers[i]);

	char str[5] = {'i','d','o','n','e'};
	char *p_str1 = &str[0];
	char *p_str2 = &str[1];
	char *p_str3 = &str[2];
	char *p_str4 = &str[3];
	char *p_str5 = &str[4];

	char *strs[5] = {p_str1,p_str2,p_str3,p_str4,p_str5};
	for(int i = 0;i < SIZE;i++)
	fprintf(stdout,"Posit[%d]\tValue %d\tAdress=%p\n",i,*strs[i],strs[i]);


}
