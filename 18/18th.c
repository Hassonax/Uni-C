#include <stdio.h>

main(){
    int m, i, even_nums = 0, oddNumCount = 0, oddNumSum = 0;
    float odd_numAvg;

    printf("enter the num: ");
    scanf("%d", &m);

    i = 1;
    while(i <= m){
        if(i % 2 == 0){
            even_nums += 1;
        } else {
            if(i % 5 == 0){
                oddNumCount += 1;
                oddNumSum += i;
            }
        } 
        i++;
    }

    if(oddNumCount > 0) {
        odd_numAvg = (float)oddNumSum / oddNumCount;
        printf("The average of odd numbers % by 5 is: %f\n", odd_numAvg);
    } else {
        printf("No odd numbers % by 5 were found.\n");
    }

    printf("The count of even numbers is: %d\n", even_nums);
}
