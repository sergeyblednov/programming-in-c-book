#include <stdio.h>

void sort(int a[], int n)
{
	int i, j, temp;

	for ( i = 0; i < n - 1; ++i)
		for ( j = i + 1; j < n; ++j )
			if ( a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main(void) 
{
	int i;
	int array[16] = { 34, 4, -5, 7, 45, 60, 100, 33, -6, -3, 25, 78, 43, 18, -34, 98 };

	void sort(int a[], int n);

	printf("The array before sorting:\n");
	for ( i = 0; i < 16; ++i) 
		printf("%i  ", array[i]);

	sort(array, 16);

	printf("\n\nThe array after sorting:\n");
	for ( i = 0; i < 16; ++i) 
		printf("%i  ", array[i]);

	printf("\n");
}