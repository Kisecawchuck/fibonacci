#include <stdio.h>

int main()
{
	int i, j, b;
	 i = 1;
	 j = 1;
	 b = i + j;
	printf("%d\t%d\t%d\n", i, j, b);

	while (b <= 233) {
		j = b;
		b = i + j;
		printf("%d\t%d\t%d\n", i, j ,b);
		i = j;
	}
}
