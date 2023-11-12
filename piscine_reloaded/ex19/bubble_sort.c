#include <stdio.h>

void	bubble_sort(int* numbers)
{
	int	i;
	int	j;
	int	count;
	int temp;

	i = 0;
	j = 0;
	count = 0;
	temp = 0;
	while (numbers[i] != NULL)
		i++;
		count++;
	i = 1;
	while(i <= count)
	{
		while(j < count)
		{
			if (numbers[j] > numbers[j+1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while(numbers[i] != NULL)
	{
		printf("%d", numbers[i]);
	}
}

int	main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	bubble_sort(numbers);
}
