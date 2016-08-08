#include<stdio.h>
#include<conio.h>
#define N 20
int a[N];
void quicksort(int, int);
int part(int, int);
void main(){
 int n, i;
 clrscr();
 printf("enter the number of elements in your array:");
 scanf("%d",&n);
 printf("\nenter the elements in your array:\n");
 for(i=0; i<n; i++)
 scanf("%d",&a[i]);
 printf("\nthe unsorted array is: ");
 for(i=0; i<n; i++)
 printf("%d ",a[i]);
 quicksort(0, n-1);
 printf("\nthe sorted array is: ");
 for(i=0; i<n; i++)
 printf("%d ",a[i]);
 getch();
 }
void quicksort(int p, int q){
 int r;
 if(p<q){
  r=part(p, q);
  quicksort(p, r-1);
  quicksort(r+1, q);
  }
 }
int part(int p, int q){
 int x, i, j, t;
 x=a[q];
 i=p-1;
 for(j=p; j<q; j++){
  if(a[j]<x){
   i=i+1;
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
  }
 t=a[i+1];
 a[i+1]=a[q];
 a[q]=t;
 return (i+1);
 }