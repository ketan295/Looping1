#include <stdio.h>

main()
{
	int n;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("\nEven Numbers from %d to 1:\n", n);
	while (n>=1)
	{
		if ((n% 2)== 0)
			printf("%d ", n);
		    n--;
	}
}