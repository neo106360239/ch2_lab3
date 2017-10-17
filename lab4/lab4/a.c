#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int grade;
	int acount = 0;
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	int fcount = 0;
	printf("enter the letter grades. \n");
	printf("enter the EOF character to end input. \n");
	while ((grade = getchar()) != EOF)
	{
		switch (grade)
		{
		case 'a':
			case 'A':
				++acount;
				break;
			case 'b':
			case 'B':
				++bcount;
				break;
			case 'c':
				case 'C':
					++ccount;
					break;
				case 'd':
				case 'D':
					++dcount;
					break;
				case 'f':
				case 'F':
					++fcount;
					break;
				case '\n':
				case '\t':
				case' ':
					break;
				default:
					printf("incorrect letter grade entered.\n");
					printf("enter new grade.\n");

		}
	}
	printf("\ntotals for each letter grade are : \n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);
	system("pause");
	return 0;
}