#include<stdio.h>
#define V 5
int path[V];
int isSafe(int v,int Graph[V][V],int pos){
	int i;
	if(Graph[path[pos-1]][v]==0)
	return 0;
	for(i=0;i<V;i++){
		if(path[i]==v){
			return 0;
		}
		
	}
	return 1;
}
void printSolution(){
	int i;
	for(i=0;i<V;i++){
		printf(" %d ",path[i]);
		
	}
	printf("%d",path[0]);
	printf("\n");
}
int hamCycleUtil(int Graph[V][V],int pos){
  int v;
   if(pos==V){
   	if(Graph[path[pos-1]][path[0]]==1)
   	  {
	
   		return 1;
     }
	   else{
	   
	   return 0;
  }
   }
   for(v=1;v<V;v++){
   	  if(isSafe(v,Graph,pos)==1){
   	  	path[pos]=v;
   	    if(hamCycleUtil(Graph,pos+1)==1){
   	    	return 1;
		   }  	
		   path[pos]=-1;
	 }
   }	
   return 0;

}
int hamCycle(int Graph[V][V]){
	 int i;
	 for(i=0;i<V;i++){
	 	path[i]=-1;
	 	 }
	path[0]=0;
	if(hamCycleUtil(Graph,1)==0){
		printf("Solution does'n exist '");
		return 0;
	}
	printSolution();
	return 1;
}
int main(){
	int Graph[V][V]={{0, 1, 0, 1, 0},
					{1, 0, 1, 1, 1},
					{0, 1, 0, 0, 1},
					{1, 1, 0, 0, 1},
					{0, 1, 1, 1, 0},
				};
	printf("Hamilton Cycle :");
	hamCycle(Graph);
	return 0;
}
