#include <stdio.h>

int amt,t;
float bal,k;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d %f",&amt,&bal);
	if((amt%10!=0)||((float)(amt+0.5)>bal))
		printf("%.2f",bal);
	else
	{
		k=(float) (bal-amt-0.5);
		printf("%.2f",k);
	}
	}
	return 0;
}