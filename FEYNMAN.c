#include <stdio.h>

int main()
{
    int result,n;
    do
    {	
	scanf("%d",&n);
	if(n==0)
	    exit(0);
	result=n*(n+1)*(2n+1)/6;
	printf("%d",result);
    }
    while(1);
}