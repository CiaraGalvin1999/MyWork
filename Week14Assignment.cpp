#include "pch.h"
#include <iostream>
#include <stdio.h>

FILE *fptr;
void openFile();
void closeFile();
void parseFile(FILE *fptr);
void main()
{
	openFile();
	parseFile(fptr);
	closeFile();
}

void openFile()
{
	fptr = fopen("C:\\Users\\ciara\\Documents\\Programming\\week14\\data.txt", "r");
}

void closeFile()
{
	fclose(fptr);
}

void parseFile(FILE *fptr) {
	char orderDate[15], region[15], rep[15], item[15], fline[80];
	float units;
	float unitCost, total, totalSales = 0.0;
	char userInput[15];
	int i;

	for (i = 1; i < 10; i++) {

		printf("Enter product name (or return to quit): ");
		gets_s(userInput);
		if (strlen(userInput) < 1) return;
		fseek(fptr, 0, SEEK_SET);
		fgets(fline, 80, fptr);

		while (!feof(fptr))
		{
			fscanf(fptr, "%s\t%s\t%s\t%s\t%f\t%f\t%f", orderDate, region, rep, &item, &units, &unitCost, &total);

			if (strcmp(userInput, item) == 0)
			{
				totalSales = totalSales + total;
			}

		}
		printf("Total Sales: %.2f \n\n", totalSales);
		totalSales = 0.0;
		
	}
}
