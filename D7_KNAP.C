#include<stdio.h>
#include<conio.h>
struct objects
 {
 int wt,val;
 }ob[4];
void main()
 {
 int T[10][10],i,j,c,a,b;
 clrscr();
//Accepting the objects, their weights and profits from the user
 printf("Enter the capacity of the Knapsack:");
 scanf("%d",&c);
 printf("\nEnter the weights and profits of the object:");
 for(i=0;i<4;i++)
  {
  printf("\n%d:",i+1);
  scanf("%d %d",&ob[i].wt,&ob[i].val);
  }
//Making the Profit matrix
 for(i=0;i<5;i++)
  {
  for(j=0;j<=c;j++)
   {
   if(i==0)
    T[i][j]=0;
   else
    {
    if(j<(ob[i-1].wt))
     {
     T[i][j]=T[i-1][j];
     }
    else
     {
     a=(ob[i-1].val+T[i-1][j-ob[i-1].wt]);
     b=T[i-1][j];
     if(a>b)
      T[i][j]=a;
     else
      T[i][j]=b;
     }
    }
   }
  }
 printf("\nThe maximum profit is:%d",T[4][c]);
 getch();
 }