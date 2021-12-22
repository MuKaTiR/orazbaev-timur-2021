#include <iostream>

using namespace std;

void increase_size(int** arr, int* size, int* capacity)
{
	if (*size + 1 > *capacity)
	{
		int* temp = new int[*capacity * 2];
		for (int f = 0; f < *size; ++f)
		{
			temp[f] = (*arr)[f];
		}
		*arr = temp;
		*capacity = *capacity * 2;
	}
	++(*size);
}

void move_arr(int* arr, int arr_size, int delta)
{
	if (delta > 0)
	{
		for (int g = arr_size - 1; g >= 0; --g)
		{
			if (g + delta < arr_size)
			{
				arr[g + delta] = arr[g];
			}
		}
	}
	else
	{
		for (int i = 0; i < arr_size; ++i)
		{
			if (i + delta >= 0)
			{
				arr[i + delta] = arr[i];
			}
		}
	}
}

int main(int argc, char** argv)
{
	int size = 0;
	int capacity = 1;
	int* arr = new int[1];

	while (true)
	{
		cout << "=== Options ===\n";
		cout << "1 - Exit\n";
		cout << "2 - Print array\n";
		cout << "3 - Append element to the end\n";
		cout << "4 - Append element to the beginning\n";
		cout << "5 - Remove last element\n";
		cout << "6 - Remove first element\n";
		cout << "7 - Reverse array\n";
		cout << "===============\n";

		char command = '\x00';
		cin >> command;

		switch (command)
		{
		case '1':
		{
			return EXIT_SUCCESS;
		}
		case '2':
		{
			for (int f = 0; f < size; ++f)
			{
				cout << arr[f] << " ";
			}
			cout << "\n";
			break;
		}
		case '3':
		{
			increase_size(&arr, &size, &capacity);
			cout << "Enter new element: ";
			cin >> arr[size - 1];
			break;
		}
		case '4':
		{
			increase_size(&arr, &size, &capacity);
			move_arr(arr, size, 1);
			cout << "Enter new element: ";
			cin >> arr[0];
			break;
		}
		case '5':
		{
			if (size > 0)
			{
				--size;
			}
			break;
		}
		case '6':
		{
			if (size > 0)
			{
				move_arr(arr, size, -1);
				--size;
			}
			break;
		}
		case '7':
		{
			for (int i = 0; i < size / 2; ++i)
			{
				int t = arr[i];
				arr[i] = arr[size - 1 - i];
				arr[size - 1 - i] = t;
			}
			break;
		}
		default:
			break;
		}
	}
}