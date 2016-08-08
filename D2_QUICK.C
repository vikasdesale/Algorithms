#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 6000

void quick(int x[],int lb,int ub);
int partition(int x[],int lb,int ub);

void main()
{
	int i,n,x[MAX];
	time_t start,end;
	clrscr();
	printf("Enter the number of elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		x[i]=rand();

	printf("\nEntered array is \n");
	for(i=0;i<n;i++)
		printf("%d ",x[i]);

	start=time(NULL);
	quick(x,0,n-1);
	end=time(NULL);

	printf("Sorted array is as shown:\n");
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	getch();

}

void quick(int x[],int lb,int ub)
{
	int j;
	if(lb<ub)
	{
		printf("\n");
		j=partition(x,lb,ub);
		quick(x,lb,j-1);
		quick(x,j+1,ub);
	}
}

int partition(int x[],int lb,int ub)
{
	int a,down,up,temp;
	a=x[lb];
	up=ub;
	down=lb;

	while(down<up)
	{
		while(x[down]<=a&&down<ub)
			down++;
		while(x[up]>a)
			up--;
		if(down<up)
		{
			temp=x[down];
			x[down]=x[up];
			x[up]=temp;
		}
	}

	x[lb]=x[up];
	x[up]=a;

	return up;
}