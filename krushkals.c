#include<stdio.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int main()
{
	printf("\n\n\tImplementation of Kruskal's algorithm\n\n");
	printf("\nEnter the no. of vertices\n");
	scanf("%d",&n);
   printf("\nEnter the cost adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		scanf("%d",&cost[i][j]);
		   if(cost[i][j]==0)
		   {
		   	cost[i][j]=999;
		   }
		}
	}
   return 0;
}
