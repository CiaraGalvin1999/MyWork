#include "pch.h"
#include <iostream>
int main()
{	int i;
	double total = 0, array1[10], average, max = 0, min = 0;
	printf("Enter up to numbers to get average, max and min. To finish entering numbers, enter 0.0 \n");
	for (i = 0; i < 10; i++) {
		printf("\n Enter number %d: ", i + 1);
		scanf_s("%lf", &array1[i]);
		total += array1[i];
		if (array1[i] == 0.0)
		{break;
		}
		if (array1[i] > max)
		{
			max = array1[i];
		}
		if (i == 0) {
			min = array1[i];
		}
		if (array1[i] < min) {
			min = array1[i];
		}
	}
	printf("Total = %.2lf \n", total);
	average = total / 10;
	printf("Average: %.2f \nMax = %.2lf \nMin = %.2lf \n", average, max, min);
}

