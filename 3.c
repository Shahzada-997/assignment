#include<stdio.h>
int main()
 {
 	int n,sum=0,i;
 	scanf("%d",&n);
 	for(i=1;i<=n;i+=2)
 	{
 	printf("%d\n",i);
 	sum=sum+i;
	 }
 	printf("sumation=%d",sum);

 	return 0;
 }
