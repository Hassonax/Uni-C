#include <stdio.h>
main(){
 int m , i ,even_nums=0 , oddNumCount=0 ,oddNumSum=0;
 printf("enter the num");
 scanf("%d",&m);
 float odd_numAvg;
 i=1;
 while(i<m){

 if(i%2==0){
    even_nums +=1;
 }else{

     oddNumCount +=1;
     oddNumSum += i;

 } i++;}
  odd_numAvg = oddNumSum/oddNumCount;
  printf("%f",odd_numAvg);
  printf("is the avg");
}
