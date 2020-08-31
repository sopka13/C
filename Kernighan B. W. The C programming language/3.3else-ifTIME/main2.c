#include <stdio.h>

double startTime, endTime;
double getCPUTime(void);

// binsearch: поиск х в v[0] <= v[1] ... <= v[n-1]

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
//		{
//			if (x > v[mid])
//				low = mid + 1;
//			else
				return mid;
//		}
	}
	return -1;						// нет соответствия
}

int main(void)
{
	startTime = getCPUTime();
	int x = 3;
	int v[6] = {1, 2, 3, 4, 5, 6};
	int n = 5;

	printf("%d\n", binsearch(x, v, n));
	endTime = getCPUTime();
	fprintf(stderr, "CPU time used = %lf\n", (endTime - startTime));
	return 0;
}
