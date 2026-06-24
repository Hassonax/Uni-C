#include <stdio.h>


main(){

    int n,m;
    printf("enter the num of rows and coloums ");
    scanf("%d %d",&n,&m);
    int array1[n][m], i , j , array2[m];


    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d",&array1[i][j]);
        }
    }

    for(j=0;j<=m-1;j++){
        for(i=0;i<=n-1;i++){
            array2[j]+= array1[i][j];
        }
    }

    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=m-1;i++){
        printf("%d ",array2[i]);
    }

}
