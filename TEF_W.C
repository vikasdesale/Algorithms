#include<stdio.h>
#include<conio.h>
#define N 10
int A[N][N], cost[N][N];
int min(int a, int b){
 if(a < b)
  return a;
 else
  return b;
 }
void main(){
 int n, i, j, k;
 clrscr();
 printf("\nenter the number of vertices:");
 scanf("%d", &n);
 for(i=0; i<n; i++)
  for(j=0; j<n; j++){
   printf("\nenter the edge-cost between %d->%d:",i+1, j+1);
   scanf("%d", &cost[i][j]);
   if(cost[i][j]==0 && i!=j)
	cost[i][j]=999;
   A[i][j]=cost[i][j];
   }
   printf("\nthe costs of edges are:\n");
   for(i=0; i<n; i++){
    for(j=0; j<n; j++)
     printf("\t%d",A[i][j]);
    printf("\n");
    }
  for(k=0; k<n; k++){
   printf("\nmatrix A-%d:\n",k+1);
   for(i=0; i<n; i++){
    for(j=0; j<n; j++)
    {
    A[i][j] = min(A[i][j], A[i][k]+A[k][j]);
    printf("\t%d",A[i][j]);
    }
   printf("\n");
   }
  }
 getch();
}