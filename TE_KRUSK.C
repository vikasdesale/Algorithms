#include<stdio.h>
#include<conio.h>
#define N 10
int i, j, k, a, b, u, v, n, ne=1;
int min, mincost=0; cost[N][N], parent[N];
int find(int);
int uni(int, int);
void main(){
 clrscr();
 printf("\nenter the number of vertices:");
 scanf("%d",&n);
 printf("\nenter the cost adjacency matrix");
 for(i=1; i<=n; i++)
  for(j=1; j<=n; j++){
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=999;
   }
 printf("\nthe edges of minimum cost spanning tree are:\n");
  while(ne<n){
  for(i=1 , min==999; i<=n; i++)
   for(j=1; j<=n; j++)
    if(cost[i][j]<min){
     min=cost[i][j];
     a=u=i;
     b=v=j;
     }
  u=find(u);
  v=find(v);
  if(uni(u, v)){
   printf("\n%d edge (%d, %d)=%d\n",ne++,a,b,min);
   mincost+=min;
   }
  cost[a][b]=cost[b][a]=999;
  }
 printf("\nmininum cost=%d\n",mincost);
 getch();
 }
int find(int i){
 while(parent[i])
  i=parent[i];
 return i;
 }
int uni(int i, int j){
 if(i!=j){
  parent[j]=i;
  return 1;
  }
 return 0;
 }