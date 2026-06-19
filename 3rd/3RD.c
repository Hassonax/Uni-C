#include <stdio.h>

//col == عمود
// row == صف

int main()
{
    int row, col;
    int current_number = 5;


    for (row = 1; row <= 3; row++)
    {

        for (col = 1; col <= row; col++)
        {
            printf("%d ", current_number);
            current_number += 2;
        }
        printf("\n");
    }


}
