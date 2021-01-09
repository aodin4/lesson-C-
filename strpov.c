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


struct coords
{
	int x;
	int y;
} Point;

struct coords Top;
int main()
{

	printf("Value in massiv %s\n",arr.str);

	char *ukazatel = "idea";
	for(int i = 0; i < 5; ++i)
		arr.str[i] = *ukazatel++;
	printf("%s\n",arr.str);
	Point.x = 10;
	Point.y = 58;
	fprintf(stdout,"Point.x = %d\n",Point.x);
	fprintf(stdout,"Point.y = %d\n",Point.y);
	Top.x = 88;
	Top.y = 14;
	fprintf(stdout,"Top.x = %d\n",Top.x);
	fprintf(stdout,"Top.y = %d\n",Top.y);
	ptr.str = "idea";
	printf("%s\n",ptr.str);



}
