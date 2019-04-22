#include <stdio.h>

int main()
{
	int i, j, temp, index;
	int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	for(i = 0; i < 10; i++)
	{
		int min = 9999;
		
		for(j = i; j < 10; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
