#include<stdio.h>
#include<conio.h>
#define N 10
void prim(int[][N], int);
void main(){
 int a[N][N], nod;
 int v1, v2, len, i, j, n;
 clrscr();
 printf("enter the number of nodes in the graph:");
 scanf("%d", &nod);
 printf("\nenter the number of edges in the graph:");
 scanf("%d",&n);
 for(i=0; i<nod; i++)
  for(j=0; j<nod; j++)
   a[i][j]=0;
 printf("\nenter the edges and their weights:");
 for(i=0; i<nod; i++){
  printf("\nenter edge by v1 and v2:");
  scanf("%d%d",&v1, &v2);
  printf("\nenter the weight between %d and %d:",v1, v2);
  scanf("%d",&len);
  a[v1][v2]=a[v2][v1]=len;
 }
 getch();
 printf("\n");
 prim(a, nod);
 getch();
}
void prim(int a[][N], int nod){
 int sel[N], i, j ,k;
 int min, v1, v2, tot=0;
 for(i=0; i<nod; i++)
  sel[i]=0;
 printf("\n minimal spanning tree:\n");
 sel[0]=1;
 for(k=1; k<nod; k++){
  min=3000;
  for(i=0; i<nod; i++){
   for(j=0; j<nod; j++){
	if(a[i][j]&&((sel[i]&&!sel[j])||(!sel[i]&&sel[j]))){
	 if(a[i][j]<min){
	  min=a[i][j];
	  v1=i;
	  v2=j;
	  }
	 }
	}
   }
  printf("\nedge(%d%d)and weight=%d",v1,v2,min);
  sel[v1]=sel[v2]=1;
  tot=tot+min;
  }
 printf("\n\ntotal path length:%d",tot);
 }