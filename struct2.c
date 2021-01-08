#include<stdio.h>

typedef struct 
{
	char str[5];


} ArrType;

typedef struct
{
char *str;

} PtrType;


ArrType arr = {'B','A','D','!','\0'};
PtrType ptr = {"GOOD"};


int main()
{
	printf("Massiv char: %s\n",arr.str);
	char *ukazat = "idea";
	for(int i = 0; i < 5; ++i)
		arr.str[i] = *ukazat++;
	//arr.str[0] = 'i';
	//arr.str[1] = 'd';
	//arr.str[2] = 'e';
	//arr.str[3] = 'a';
	//arr.str[4] = '\0';
	printf("%s\n",arr.str);

	printf("Strok ykaz: %s\n",ptr.str);
	ptr.str = "idea";
	printf("%s\n",ptr.str);
}
