#include<stdio.h>
int main()
{
	int massiv[5] = {1,2,3,4,5};
	int *p_mas1 = &massiv[0];
	int *p_mas2 = &massiv[1];
	int *p_mas3 = &massiv[2];
	int *p_mas4 = &massiv[3];
	int *p_mas5 = &massiv[4];
	int *p_mass[5] = {p_mas1, p_mas2, p_mas3, p_mas4, p_mas5};
	for(int i = 0; i < 5; i++)
		printf("Index=%d\tValue=%d\tAdress=%p\n",i,*p_mass[i],p_mass[i]);
}
