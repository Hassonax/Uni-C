#include <stdio.h>

  main()
{
    int i, m = 0, c = 0, k = 0;

    for (i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            c++;
        }

        else if(i == 1 || i == 3)
        {
            k++;
        }else{

        m++;};
    }

    printf("m=%d\nc=%d\nk=%d\n", m, c, k);

}
