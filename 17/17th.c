#include <stdio.h>

main(){
 int i,j,switcher=1,array1[3][3];

  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        if(switcher==1){
            array1[i][j] = 4;

        }else {
        array1[i][j] = 5;
        }
         switcher= switcher*-1;


    }
  }
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
        printf("%d ",array1[i][j]);
    } printf("\n");

    }

}
