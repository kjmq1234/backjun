int	binarysearch_lower(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
			low = mid + 1;
		else
			top = mid - 1;
	}

	return (low);
}


int	binarysearch_upper(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key < arr[mid])
			top = mid - 1;
		else
			low = mid + 1;
	}