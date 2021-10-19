
#include<stdio.h>
#define base  10
int main()
{
	int lastdigit, frq[base],i=0;
	long int n,num;

	printf("Enter the number: ");
	scanf("%ld", &n);

	num = n ;

	for(i = 0; i < base; i++)
	{
		frq[i] = 0;
	}
	
	while(num!=0)
{
	lastdigit = num % 10;
	num /= 10;
	frq[lastdigit]++;
}

for(i = 0; i< base; i++ )
{
	printf("\nThe frequency of %d is: %d\n",i,frq[i]);
}

return 0;
}
