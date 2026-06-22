#include <stdio.h>
main(){
int m , n;
printf("enter the number of rows and coloums");
scanf("%d %d",&n,&m);
int i,j,rowsum=0,array1[n][m];
printf("enter the array nums");
for(i=0;i<=(n-1);i++){

    for(j=0;j<=(m-1);j++){
        scanf("%d",&array1[i][j]);

    }
}

for(i=0;i<=(n-1);i++){
rowsum=0;
    for(j=0;j<=(m-1);j++){
            printf("%d",array1[i][j]);
            rowsum = rowsum + array1[i][j];
    }
    printf(" = %d\n",rowsum);
}



}
