#include<stdio.h>

int partition(int A[],int start,int end){
	int pivot=end;
	int partition_index=start;
	int i;
   int temp;
	for(i=start;i<end;i++){
		if(A[i]<A[pivot]){
			temp=A[i];
			A[i]=A[partition_index];
			A[partition_index]=temp;
      partition_index++;
		}
	}
   	temp=A[partition_index];
   	A[partition_index]=A[end];
   	A[end]=temp;
	return partition_index;
}
void QuickSort(int A[],int start,int end){
	 if(start<end){
	  int partition_index=partition(A,start,end);
	  QuickSort(A,start,partition_index-1);
	  QuickSort(A,partition_index+1,end);
	 }
}
int main()
{  int i;
   int n=6;
    int A[]={3,4,7,2,1,0,9};
printf("*****Quick Sort***** \n");
	QuickSort(A,0,n);
	for(i=0;i<=n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}

