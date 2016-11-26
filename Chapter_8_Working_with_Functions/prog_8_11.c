#include <stdio.h>

void multylyBy2(float array[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		array[i] *= 2;
}

int main(int argc, char const *argv[])
{
	float floatVals[4] = { 1.2f, -3.4f, 6.3f, 8.55f };
	int i;
	void multylyBy2(float array[], int n);	
	
	multylyBy2(floatVals, 4);

	for (i = 0; i < 4; ++i)
		printf("%.2f    ", floatVals[i]);

	printf("\n");

	return 0;
}