#include <stdio.h>

main(){

int n;
float s=0 ,temp,i;
printf("Enter n \t");
scanf("%d",&n);
for(i=1;i<=n;i++){
    temp = i/(i*2);
    s = s + temp;
}

printf("\n S = %f",s);

}
