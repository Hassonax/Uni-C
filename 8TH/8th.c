#include <stdio.h>

// البرنامح الاساسي تحت التعليق ونتائجه كما يلي
// C = 2            M = 125     k = 5



//main(){
//
// int i,c=0,k=0,m=1,j;
//
// for(i=1;i<=5;i++){
//    switch(i%3 != 0){
//
  //  case 1 : switch (i%2 == 0){
//
 //     case 1: c++ ; break ;
 //     case 0 : for(j =1;j<=3;j++){
//
 //                   m = m*i;
 //                                 }
//
 //    break;
//
 //                             }
 //   case 0 : k++;break;
//    }
 //}
//   printf("c %d \n m=%d \n k = %d ",c , m , k);
//}








// بعج تبديل ال سويتش



main()
{
    int i, c = 0, k = 0, m = 1, j;

    for (i = 1; i <= 5; i++)
    {
        //  switch(i % 3 != 0)
        if ((i % 3 != 0) == 1)
        {
            //  switch(i % 2 == 0)
            if ((i % 2 == 0) == 1) //case 1
            {
                c++;
            }
            else if ((i % 2 == 0) == 0) // case 0
            {
                for (j = 1; j <= 3; j++)
                {
                    m = m * i;
                }
            }
        }
        else if ((i % 3 != 0) == 0)
        {
            k++;
        }
    }

    printf("c=%i\nm=%i\nk=%i", c, m, k);
}



