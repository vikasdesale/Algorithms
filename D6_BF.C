#include<stdio.h>
#include<assert.h>
#include<conio.h>
#include<stdlib.h>
#define maxVertices 100
#define INF 999
void BellmanFord(int graph[][maxVertices],int cost[][maxVertices],int size[],int source,int vertices)
 {
 int distance[maxVertices];
 int iter,jter,from,to;
 for(iter=0;iter<vertices;iter++)
 {
  distance[iter] = INF;
 }
 distance[source] = 0;
/* We have to repeatedly update the distance |V|-1 times
where |V| represents number of vertices */
 for(iter=0;iter<vertices-1;iter++)
  {
  for(from=0;from<vertices;from++)
   {
   for(jter=0;jter<size[from];jter++)
    {
    to = graph[from][jter];
    if(distance[from] + cost[from][jter] < distance[to])
     {
     distance[to] = distance[from] + cost[from][jter];
     }
    }
   }
  }
 for(iter=0;iter<vertices;iter++)
  {
  printf("The shortest distance to %d is %d\n",iter,distance[iter]);
  }
 }
 void main()
 {
 int graph[maxVertices][maxVertices],size[maxVertices]={0};
 int cost[maxVertices][maxVertices];
 int vertices,edges,iter,jter;
 int source;
 int vertex1,vertex2,weight;
 clrscr();
 printf("\n enter the no of vertices & edges:");
 scanf("%d %d",&vertices,&edges);
 printf("\n enter v1,v2 & wt:");
 for(iter=0;iter<edges;iter++)
  {
  scanf("%d %d %d",&vertex1,&vertex2,&weight);
  graph[vertex1][size[vertex1]] = vertex2;
  cost[vertex1][size[vertex1]] = weight;
  size[vertex1]++;
  }
 printf("\n enter source vertex:");
 scanf("%d",&source);
 BellmanFord(graph,cost,size,source,vertices);
 getch();
}