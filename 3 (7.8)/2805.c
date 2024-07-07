#include <stdio.h>

long long treen = 0, need = 0, right = 0;
long long list[1000005] = { 0 };
long long BinarySearch(long long left, long long right);
long long check(long long high);

int main() 
{
	scanf("%d", &treen);
	scanf("%d", &need);
	for (long long i = 0; i < treen; i++) 
    {
		scanf("%d", &list[i]);
		if (list[i] > right) right = list[i];
	}
	printf("%d", BinarySearch(0, right));
}

long long BinarySearch(long long left, long long right) 
{
	long long height = 0;
	while (left <= right) 
    {
		long long mid = (left + right) / 2;
		if (check(mid) >= need) 
        {
			left = mid+1;
			if (mid > height) height = mid;
		}
		else 
			right = mid-1;
	}
	return height;
}

long long check(long long high) 
{
	long long sum = 0;
	for (int i = 0; i < treen; i++) 
    {
		if ((list[i] - high) > 0) 
			sum = sum + list[i] - high;
	}
	return sum;
}
