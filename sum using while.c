#include <stdio.h>

main()
{ 
	int number=1,N;
	long sum=0;
	printf("Enter how many numbers of sum do you want from (1 to N) :");
	scanf("%d",&N);
	while(number<=N)
	{
		sum=sum+number;
		number++;
	}
	printf("\nSum of 1 to %d = %ld\n",N,sum);
}