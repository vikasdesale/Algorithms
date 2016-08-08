#include <stdio.h>
 
int max(int a, int b) { return (a > b)? a : b; }
// Returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   printf("\t Weight :");
   printf("\n");
   printf("Items :");
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
           
		           K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
                        
		   else
                 K[i][w] = K[i-1][w];
          printf("\t %d ",K[i][w]);          
       }
       printf("\n");
       if(w==3){
       	printf("Items :");
	   }
   }
 
   return K[n][W];
}
 
int main()
{
  //  int val[] = {60, 100, 120};
    //int wt[] = {10, 20, 30};
     int val[] = {3,7,2,9};
      int wt[] = {2,3,4,5};
//	int  W = 50;
  int W=5;
    int n = sizeof(val)/sizeof(val[0]);
    printf("\nValue = %d", knapsack(W, wt, val, n));
    return 0;
}