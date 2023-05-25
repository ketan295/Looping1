#include <stdio.h>

main()
{ 
	int number=1,N;
	printf("Enter how many numbers do you want to print (1 to N) :");
	scanf("%d",&N);
	printf("Numbers from 1 to %d is: \n",N);
	while(number<=N)
	{

		printf("%d ",number);
		number++;
	}
}