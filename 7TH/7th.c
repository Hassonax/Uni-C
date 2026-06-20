#include <stdio.h>

main(){
    //مصفوفه عشوائية ك مثال فقط
 int numbers[50] = {
    14, 27,  5, 42, 19, 31,  8, 23, 49, 12,
    36,  3, 22, 17, 45, 28,  1, 33, 20, 11,
     6, 39, 25, 14, 48,  9, 30, 16, 41, 24,
    13,  7, 34, 18, 47,  2, 29, 15, 43, 21,
    10, 35, 26,  4, 38, 12, 46, 32,  7, 25
};

 int min ;
 int max = 0;
 float avg;
 int i;

 for(i =1;i<=50;i++){
    if(i>max){
        max = i;
    }
    if(i < min){
        min = i;
    }

 }


    avg = (min + max)/2;

    printf("max is %d and min is%d and the avg is %.1f", max,min,avg);



}
