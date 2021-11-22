#include <stdio.h>
#include <limits.h>
//#include "my_mat.h"
#define size 10
void assignValues(int graph[size][size]);
void checkRoute(int graph[size][size],int,int);
int shortestRoute(int graph[size][size],int,int);
int main(){
    int graph[size][size];
    int i,j;
    printf("HEllo\n");
    char choice;
    while (choice!='D')
    {
        printf("Enter A to perform function number 1.\n");
        printf("Enter B to perform function number 2.\n");
        printf("Enter C to perform function number 3.\n");
        printf("Enter D to exit the program.\n");
        scanf("%c",&choice);
        switch (choice)
        {
        case 'A':
            assignValues(graph);
            break;
        case 'B':
            printf("Enter i and j: ");
            scanf("%d %d",&i,&j);
            checkRoute(graph,i,j);
          break;
        case 'C':
        printf("Enter i and j: ");
        scanf("%d %d",&i,&j);
        if(shortestRoute(graph,i,j)>0) printf("%d" , shortestRoute(graph,i,j));
          break;
        default:
            break;
        }
    }
    
    return 0;
}

