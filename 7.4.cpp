#include<iostream>
#include<stdio.h>

#define SIZE 5

int main()
{
	int array[SIZE];
	int max;

	for (int i = 0; i < SIZE; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &array[i]);
	}
	max = array[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (max < array[i])
			max = array[i];

	}

	std::cout << "Максимальне значення: " << max << std::endl;
}
