// Sorting Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"


int main()//sort from lowest to highest
{
	int i, temp, swapped;
	int howMany = 10;
	int goals[10];//can't put howMany in this bracket
	for (i = 0; i < howMany; i++) {
		goals[i] = (rand() % 25) + 1;
	}
	printf_s("original list\n");
	for (i = 0; i < howMany; i++) {
		printf_s("%d\n", goals[i]);
	}
	while (i) {
		swapped = 0;
		for (i = 0; i < howMany - 1; i++) {
			if (goals[i] < goals[i + 1]) {
				int temp = goals[i];
				goals[i] = goals[i + 1];
				goals[i + 1] = temp;//storing numbers in a list for comparison.
				swapped = 1;
			}
		}//you miss placed this bracket. That was why the code did not sort it self out the first time.
			if (swapped == 0) {
				break;
			}
		
	}
	printf_s("\nSorted List\n");
	for (i = 0; i < howMany; i++) {
		printf_s("%d \n", goals[i]);
	}

    return 0;
}

