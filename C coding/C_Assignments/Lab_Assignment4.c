#include <stdio.h>
#include <conio.h>
void main()
{
	int num,res=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	res=(num);
	if(res==0)
		printf("\n%d Number is prime",num);
	else
		printf("\n%d Number is not prime",num);
	
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}