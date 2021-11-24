#include <stdio.h>
#include "my_mat.h"
#define size 10
#define BIG_NUM 10000000
int graph[size][size]={0};
void assignValues()
{
//        for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//        printf("%d", graph[i][j]);
//     }
// }
int value;
//int length = sizeof graph[0] / sizeof graph[0][0];
for(int i=0;i<size;i++)
{
    for (int j = 0; j < size; j++)
    {
        //printf("Assign value at position (%d,%d):\n",i,j);
        scanf("%d" , &value);
        graph[i][j]=value;
    }
    
}
}
void checkRoute(int begin,int final){
   if(shortestRoute(begin,final)>0&&shortestRoute(begin,final)<BIG_NUM) printf("True\n");
   else printf("False\n");
}
int shortestRoute(int begin,int final){
    for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(i!=j&&graph[i][j]==0) graph[i][j]=BIG_NUM;
    }
}
for(int k=0;k<size;k++){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=k&&j!=k&&i!=j){
                  graph[i][j]=((graph[i][j])-(graph[i][k]+graph[k][j])<=0)?(graph[i][j]):(graph[i][k]+graph[k][j]);
            }
        }
    }
} if(graph[begin][final]!=BIG_NUM&&graph[begin][final]>0)return graph[begin][final];
else return 0;
}
