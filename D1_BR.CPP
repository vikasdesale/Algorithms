#include<conio.h>
#include<stdio.h>
#define N 20
int a[N];
int search(int x, int l, int h){
 int m;
 while(l<=h){
  m=(l+h)/2;
  if(x==a[m])
   return m;
  else if(x<a[m])
   search(x, l, m-1);
  else if(x>a[m])
   search(x, m+1, h);
  else
   return (-1);
  }
 }
void main(){
 int i, n, x, f=0;
 clrscr();
 printf("\nenter the number of elements in the array:");
 scanf("%d",&n);
 printf("\nenter the elements in the array in a sorted manner:");
 for(i=0; i<n; i++)
  scanf("%d",&a[i]);
 printf("\nenter the number to be searched:");
 scanf("%d",&x);
 f=search(x, 0, n-1);
 if(f==(-1))
  printf("%d wasn't found in the array");
 else
  printf("%d was found at %d position",x ,f+1);
 getch();
 }