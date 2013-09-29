#include <stdio.h>

int main()
{
    long long int a,b,s;
    int t,i,r,d,n;
    scanf("%d",&t);
    while(t--)
    {
	scanf("%lld %lld %lld",&a,&b,&s);
	n=2*s/(a+b);
	d=(b-a)/(n-6);
	r=a-3*d;
	printf("%d\n",n);
	for(i=1;i<=n;i++)
	{
	    printf("%lld ",(r+i*d));
	}
    }
    return 0;
}
	