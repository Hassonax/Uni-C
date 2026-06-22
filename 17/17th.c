#include <stdio.h>

main(){

 int TheArray[3][3];
 int i , j;

 for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        scanf("%d",&TheArray[i][j]);
    }

 }

 for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        printf("%d",TheArray[i][j]);
        printf(" ");
    }
 printf("\n");
}
}
