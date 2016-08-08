#include<stdio.h>
#include<math.h>
int x[4];
int place(int k,int i){
	int j;
	for(j=1;j<=k-1;j++)
	{
		if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
		{
			return 0;
		}
		
	}
	return 1;
}

void display(int n){
	int temp;
	int temp1;
	printf(" \n Possible combination : \n");
	for(temp=1;temp<=n;temp++){
         	{
			 for(temp1=1;temp1<=n;temp1++)
			  { 
			     if(x[temp]==temp1)
			 	printf(" Q ");
			 	else
			 	printf(" - ");
              } 
              printf("\n");
			}
	}
}
void nQueen(int k,int n){
	int i;
	for(i=1;i<=n;i++){
		if(place(k,i)==1){
			x[k]=i;
			if(k==n){
				display(n);
			}
			else nQueen(k+1,n);
		}
	}
}
int main(){
	printf("NQueen : \n");
	int n=4,i;
	for(i=1;i<=4;i++){
		x[i]=0;
	}
	nQueen(1,n);
	return 0;
}
