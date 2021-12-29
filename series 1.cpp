#include<stdio.h>
int main()
{
	int i,n;
	float s=0;
	
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(float)1/i;
		
	}
	printf("%f",s);
}

