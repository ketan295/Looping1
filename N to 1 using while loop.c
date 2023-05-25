#include <stdio.h>

main()
{ 
	int N;
	printf("Enter how many numbers do you want to print (N to 1) :");
	scanf("%d",&N);
	printf("Numbers from %d to 1 is: \n",N);
	while(N>=1)
	{

		printf("%d ",N);
		N--;
	}
}