#include <stdio.h>
#include <stdlib.h>

int main(voud)
{
	int count;
	float total = 0;
	float amount = 0;
	float tax = 0;
	printf("welcome to the fair tax calculator!");
	printf("\nhere are some common expens categories");
	printf("\n1: houseing , 2: food , 3: clothing , 4: transportation ,5: education \n6: health care , 7: vacations \n");
	for (count = 1; count <= 7; count++)
	{
		printf("please input how much you paid for expenses in categories %d :", count);
		scanf_s("%f", &amount);
		total += amount;
	}
	tax = total *.23;
	printf("your total fair tax would be $%.2f\n", tax);
	system("pause");
	return 0;
}