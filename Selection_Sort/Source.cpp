#include <iostream>

void selectionSort(int arr[], const int& size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int j{}; int k{};
		
		for (j = k = i; j < size; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}

		std::swap(arr[i], arr[k]);
		std::cout << "Swap " << arr[i] << " with " << arr[k] << "\n";
	}
}

void display(int arr[], const int& size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 9, 2, 1, 3, 7, 0, 4 };

	int size = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, size);
	display(arr, size);


	std::cout << "\n\n";
	system("pause");
	return 0;
}