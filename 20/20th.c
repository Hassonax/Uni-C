#include <stdio.h>

main(){

    int X[5] = {5, -5, 0, 8, 3};
    int tempstorage, i, j;

    for(i = 0; i < 4; i++){
        for(j = i + 1; j <= 4; j++){
            if(X[i] > X[j]){
                tempstorage = X[i];
                X[i] = X[j];
                X[j] = tempstorage;
            }
        }
    }

    for(i = 0; i <= 4; i++){
        printf("%i ", X[i]);
    }

}
