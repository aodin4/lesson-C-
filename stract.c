#include<stdio.h>

struct coords
{
	int x;
	int y;

} Point;

struct coords Top;


int main()
{
	Point.x = 18;
	Point.y = 68;
	Top.x = 120;
	Top.y = 587;
	fprintf(stdout, "Point x = %d\n",Point.x);
	fprintf(stdout, "Point y = %d\n",Point.y);
	fprintf(stdout, "Top x = %d\n", Top.x);
	fprintf(stdout, "Top y = %d\n", Top.y);
}
