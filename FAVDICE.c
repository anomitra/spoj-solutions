#include <stdio.h>

int main()
{
	int t,n,j;
	float val;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		val=1.0;
		for(j=2;j<=n;j++)
			val+=(float) (1/(float)j);
		printf("%.2f\n",(float) (n*val));
	}
	return 0;
}
		
