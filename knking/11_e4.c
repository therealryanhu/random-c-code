void swap(int *p, int *q);

int main(void)
{
	int a = 0;
	int b = 6;

	swap(&a, &b);

	if (a == 6 && b == 0)
		return 0;
	else
		return 1;
}

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
