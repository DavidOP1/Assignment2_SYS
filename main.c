#include <stdio.h>
#include "my_mat.h"
//#include "my_mat.h"
#define size 10
int main(){
    int i,j;
    char choice;
    while (choice!='D')
    {
        scanf(" %c",&choice);
        if(choice=='A'){
            assignValues();
        }else if(choice=='B'){
            scanf("%d",&i);
            scanf("%d",&j);
            checkRoute(i,j);
        }else if(choice=='C'){
        scanf("%d",&i);
        scanf("%d",&j);
        if(shortestRoute(i,j)>0) printf("%d\n" , shortestRoute(i,j));
        else printf("-1\n");
        }
    }
    
    return 0;
}

