#include<stdio.h>
int main()
{
	int n,sum=0,i;
	float avg;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
		avg=sum/10.0;
	}
	printf("sum=%d",sum);
	printf("avg=%.2f",avg);

	return 0;
}
