#include<stdio.h>


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
Point bottom;
Box rect  = {96,12,43,44};


int main()
{
	fprintf(stdout,"bottom.x = %d\n",bottom.x);
	fprintf(stdout,"bottom.y = %d\n",bottom.y);
	fprintf(stdout,"Point top.x = %d\n",top.x);
	fprintf(stdout,"Point top.y = %d\n",top.y);
	fprintf(stdout,"Box rect.a.x = %d\n",rect.a.x);
	fprintf(stdout,"Box rect.a.y = %d\n",rect.a.y);
	fprintf(stdout,"Box rect.b.x = %d\n",rect.b.x);
	fprintf(stdout,"Box rect.b.y = %d\n",rect.b.y);


}
