#include <stdio.h>

main()
{
	int n, i;

	printf("Enter which number table do you want : ");
	scanf("%d", &n);
	i = 1;
	while (i <= 10)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		++i;
	}
}