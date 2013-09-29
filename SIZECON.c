#include<stdio.h>
int main()
{
    int t,s=0,n;
    scanf("%d",&t);
    while(t--)
    {
	scanf("%d",&n);
	s+=(n>0?n:0);
    }
    printf("%d",s);
    return 0;
}