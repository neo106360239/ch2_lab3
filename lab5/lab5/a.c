#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double f = 1;
	float population = 6763;
	float rate = 0.0118;
	float newpop = population;
	float newpop0 = population;
	int years;
	printf("%15s%30s%25s\n", "years from now", " population (in millions)", "increase (in millions)");
	for (years = 1; years <= 75; years++)
	{
		newpop0 = newpop;
		newpop = newpop0*rate + newpop0;
	
		printf("%15d%30.2f%25.2f\n", years, newpop, newpop - newpop0);
	}
	system("pause");
	return 0;
}