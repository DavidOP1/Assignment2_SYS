#include <stdio.h>
#include "my_mat.h"
#define size 10
void assignValues(int graph[size][size])
{
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
void checkRoute(int graph[size][size],int i,int j){
   if(shortestRoute(graph,i,j)>0) printf("True\n");
   else printf("False\n");
}
int shortestRoute(int graph[size][size],int i,int j){
    for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(i!=j&&graph[i][j]==0) graph[i][j]=10*10*10*10*10*10*10;
    }
}
    //int sudo=0;
    int matrix[size][size][size]={0};

     for(int k=0;k<size;k++){
         for(int i=0;i<size;i++){
             for(int j=0;j<size;j++){
                 if(k==0){
                 if(i==0||j==0) matrix[k][i][j]=graph[i][j];
                 if(i!=j){
                    matrix[k][i][j]=((graph[i][j])-(graph[i][0]+graph[0][j])<=0)?graph[i][j]:(graph[i][0]+graph[0][j]);
                 }} else{
                   if(i==k-1||j==k-1)matrix[k][i][j]=matrix[k-1][i][j];
                    if(i!=j){
                        matrix[k][i][j]=((matrix[k-1][i][j])-(matrix[k-1][i][k]+matrix[k-1][k][j])<=0)?(matrix[k-1][i][j]):(matrix[k-1][i][k]+matrix[k-1][k][j]) ;
                    }
                 }
                 
                 }
         }
     }
    //  for(int i=0;i<size;i++)
    //     {
    //         for(int j=0;j<size;j++){
    //             printf("%d\n",matrix[size-1][i][j]);
    //         }
    //     }
    if(matrix[size-1][i][j]!=0){ return matrix[size-1][i][j];}
    else { return 0;}
}
