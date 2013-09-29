#include <stdio.h>
#include <stdlib.h>

void main()
{
    long int n,size=sizeof(int),i,j,c1=0,c2=0;
    int* a,b;
    int k=1;
    
    while(k<=10)
    {
	scanf("%d",&n);
	a=(int*)calloc(n,size);
	b=(int*)calloc(n,size);
	for(i=0;i<n-2;i++)
	{
	    c1=0;
	    b[c1]=a[i];
	    for(j=i+1;j<n;j++)
	    {
		if(a[i]<a[j])
		{
		    b[c1]=a[j];
		    c1++;
		}
		if(c1==3)
		{
		    c2++;
		    break;
		}
	    }
	}
	k++;
    }
}