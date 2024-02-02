int	binarysearch(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
			low = mid + 1;
		else if (key < arr[mid])
			top = mid - 1;
		else if (key == arr[mid])
			return (mid);
	}
	return (-1);
}

int	binarysearch(poketmon* arr, int size, char* key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (strcmp(key, arr[mid].name) > 0)
			low = mid + 1;
		else if (strcmp(key, arr[mid].name) < 0)
			top = mid - 1;
		else if (strcmp(key, arr[mid].name) == 0)
			return (mid);
	}
	return (-1);
}

int	binarysearch(char** arr, int size, char* key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (strcmp(key, arr[mid]) > 0)
			low = mid + 1;
		else if (strcmp(key, arr[mid]) < 0)
			top = mid - 1;
		else if (strcmp(key, arr[mid]) == 0)
			return (mid);
	}
	return (-1);
}