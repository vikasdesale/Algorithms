#include<stdio.h>
int Graph[50][50],x[50];
void nextColor(int k){
   	int i;
	x[k]=1;

	for(i=0;i<k;i++){
		if(Graph[i][k]!=0&&x[k]==x[i]){
			x[k]=x[i]+1;
		}
	}
	
}

int main()
{
	int v,e,v1,v2,i,j;
	printf("Enter the number of vertex :");
	scanf("%d",&v);
	printf("Enter the number of edges :");
	scanf("%d",&e);
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			Graph[i][j]=0;
		}
	}
	printf("Enter the adjacent vertex...i.e their index :");
	for(i=0;i<e;i++){
		scanf("%d%d",&v1,&v2);
	  Graph[v1][v2]=1;
	  Graph[v2][v1]=1;
	}
	for(i=0;i<v;i++){
	
	nextColor(i);
}
	printf("\nGraph Coloring is as follows :\n");
	for(i=0;i<v;i++){
		printf(" Vertex[%d] = %d",i,x[i]);
	}
	return 0;
}
