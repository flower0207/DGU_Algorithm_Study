#include <stdio.h>

int main()
{
	int i, j, k, l;
	scanf("%d %d", &i, &j);
	for(k = 0; k < i; k++)
	{
		scanf("%d", &l);
		if(l < j)
		{
			printf("%d", l);
			printf(" "); 
		}
	}
	return 0;
}
