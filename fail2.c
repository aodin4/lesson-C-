#include<stdio.h>
#define SIZE 5


typedef struct 
{

	int x;
	int y;


} Point;

typedef struct
{
	
	Point a;
	Point b;


} Box;

Point top = {33,44};
Box up = {55,32,67,89};

int main()
{
	fprintf(stdout,"Point top.x = %d\n",top.x);
	fprintf(stdout,"Point top.y = %d'n",top.y);
	fprintf(stdout,"Box up.a.x = %d\n",up.a.x);
	fprintf(stdout,"Box up.b.y = %d\n",up.b.y);
	fprintf(stdout,"Box up.x = %d\n",up.a.y);
	fprintf(stdout,"Box up.y =%d\n",up.b.x);



}
