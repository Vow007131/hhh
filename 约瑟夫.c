#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int i;
    int a[20005];
    int b[20005];
    int front=0;
    int rear=n-1;	 
    for(i=0;i<n;i++)
    {
    	a[i]=i+1;
	}
	int j=0;
	while(front<=rear)
	{
		rear++;
		a[rear]=a[front];
		front++; 
		b[j]=a[front];
		j++;
		front++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
