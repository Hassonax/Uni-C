// طباعة حروف الاسم و عددها 


#include <stdio.h>
#include <string.h>

int main()
{
    char sn[30];
    int length;
    int i;
    char k;

    printf("Please enter student name: ");
    gets(sn);

    printf("\n------------\n");
    puts(sn);

    length = strlen(sn)-1;

    for(i = 0;i <= length; i++)
    {
        k = sn[i];
        printf("\n%c", k);
    }

    printf("\n length is %d", length);
    return 0;
}
