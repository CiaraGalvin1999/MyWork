
#include "pch.h"
#include <iostream>

int main()
{
	int i;
	i = 0;
	float a;
	float total;
	for (i = 0, i < 10, i++);
	{
		printf("Enter number %d: ", i);
		scanf_s("%f", &a);
		total = total + a;
	}
	printf("Total = %.2f", total);
}


