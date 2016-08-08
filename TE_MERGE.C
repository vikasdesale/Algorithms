#include<stdio.h>
#include<conio.h>
#define N 20
int a[N];
void merge(int l, int m, int h){
 int t[N], i, j, k, mid;
 j=l;
 mid=m+1;
 for(i=l; j<=m && mid<=h; i++){
  if(a[j]<=a[mid]){
   t[i]=a[j];
   j++;
   }
  else{
   t[i]=a[mid];
   mid++;
   }
  }
 if(j>m){
  for(k=mid; k<=h; k++)
   {
   t[i]=a[k];
   i++;
   }
  }
 else{
  for(k=j; k<=m; k++){
   t[i]=a[k];
   i++;
   }
  }
 for(k=l; k<=h; k++)
  a[k]=t[k];
 }
void part(int l, int h){
 int m;
 if(l<h){
  m=(l+h)/2;
  part(l, m);
  part(m+1, h);
  merge(l, m, h);
  }
 }
void main(){
 int i, n;
 clrscr();
 printf("enter the number of elements in the array:");
 scanf("%d",&n);
 printf("\nenter the elements in the array:");
 for(i=0; i<n; i++)
  scanf("%d",&a[i]);
 part(0, n-1);
 printf("\nthe sorted elements are:");
 for(i=0; i<n ; i++)
  printf("%d  ",a[i]);
 getch();
 }