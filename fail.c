#include<stdio.h>
//create points massiv
#define SIZE_NUMBER 5
int main()
{
	int number[5]= {1,2,3,4,5};
	int *p_num1 = &number[0];
	int *p_num2 = &number[1];
	int *p_num3 = &number[2];
	int *p_num4 = &number[3];
	int *p_num5 = &number[4];

	int *p_numbers[5] = {p_num1,p_num2,p_num3,p_num4,p_num5};
	for(int i = 0; i < SIZE_NUMBER; ++i)
	{
printf("Position [%d]\tAdress=%p\tValue=%d\n",i,p_numbers[i],*p_numbers[i]);
	}
	char str[5] = {'I','d','o','n','e'};
	char *p_str1 = &str[0];
	char *p_str2 = &str[1];
	char *p_str3 = &str[2];
	char *p_str4 = &str[3];
	char *p_str5 = &str[4];

	char *p_strs[5] = {p_str1,p_str2,p_str3,p_str4,p_str5};
	for(int i = 0;i < 5;++i)
	{
printf("Position %d\t%c\tAdress = %p\n",i,*p_strs[i],p_strs[i]);
	}

}
