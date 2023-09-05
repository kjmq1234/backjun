int	compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2)
		return (1);
	else if (num1 < num2)
		return (-1);
	else
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

int	compare(const void* a, const void* b)
{
	char* one = *(char**)a;
	char* two = *(char**)b;

	if (strcmp(one, two) > 0)
		return (1);
	else if (strcmp(one, two) < 0)
		return (-1);
	else
		return (0);
}