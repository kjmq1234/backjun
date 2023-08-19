int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 != num2)
		return (num1 - num2);
	return (0);
}

int	compare(const void* a, const void* b)
{
	poketmon one = *(poketmon*)a;
	poketmon two = *(poketmon*)b;

	if (strcmp(one.name, two.name) > 0)
		return (1);
	else if (strcmp(one.name, two.name) < 0)
		return (-1);
	else
		return (0);
}

int	binarysearch(int* arr, int size, int key)
{
	int	low = 0;
	int top = size - 1;
	int mid;

	while (low <= top)
	{
		mid = (low + top) / 2;
		if (key > arr[mid])
		{
			low = mid + 1;
		if (key < arr[mid])
			top = mid - 1;

	}
	return (-1);
}