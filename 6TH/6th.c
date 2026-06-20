#include <stdarg.h>

main(){
    float total;
    int base_salary = 2750;
    float tamiyz_bonus = 1.3;
    float career_bonus =1.4;

    float total_beforeTaxes = base_salary * tamiyz_bonus * career_bonus;

    if(total_beforeTaxes >= 4500){
        total = total_beforeTaxes - (total_beforeTaxes/100 * 3.5);
    } else {
    total = total_beforeTaxes;
    }



    printf("the total salary after adding bonuses and subtracting the taxes is %.2f",total);

}
