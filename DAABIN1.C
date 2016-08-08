#include<conio.h>
#include<stdio.h>
#define N 20
void main(){
 int a[N], i, n, x, l=0, h=0, m=0, f=0;
 clrscr();
 printf("\nenter the number of elements in the array:");
 scanf("%d",&n);
 printf("\nenter the elements in the array in a sorted manner:");
 for(i=0; i<n; i++)
  scanf("%d",&a[i]);
 printf("\nenter the number to be searched:");
 scanf("%d",&x);
 l=0;
 h=n-1;
 while(l<h){
  m=(l+h)/2;
  if(x==a[m]){
	f=1;
	printf("%d was found at %d position", x ,m+1);
	break;
   }
  else if(x<a[m])
   h=m-1;
  else
   l=m+1;
  }
  if(f==0){
	printf("%d wasn't found in the array",x);
  }
 getch();
 }