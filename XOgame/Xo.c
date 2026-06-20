#include <stdio.h>

// ----------لعبة XO



//علاش يسير في مشاكل بسبب المصفوفه فيها عنصر فارغ ؟

//اخطاء بعض الاحيان بعد ما تمتلى كل الفراغات بدون فائز
//clearing the terminal without erasing the whole screen after the victoy of a player(preferably without
                                                                                      //causing stpd errors)

//كيف منخليش الدور يضيع ع الاعب بعد ما يدخل قيمه غلط فوق ال 9

//علاش مفيش حروف Ü Ö Ä

//مفيش دعم عربي ؟



main()
{
    char square[10];
    int player;
    int choice;
    int i;
    int game_status;
    char mark;

    square[1] = '1'; square[2] = '2'; square[3] = '3';
    square[4] = '4'; square[5] = '5'; square[6] = '6';
    square[7] = '7'; square[8] = '8'; square[9] = '9';

    player = 1;
    game_status = -1;

    while (game_status == -1)
    {


        //printf("\x1B[2J\x1B[H");
        printf("\n\n=== (X - O) ===\n\n");
        printf("spieler 1 (X)  -  spieler 2 (O)\n\n");

        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
        printf("     |     |     \n\n");

        if (player % 2 != 0)
        {
            player = 1;
        }
        else
        {
            player = 2;
        }

        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }

        printf("player %d (%c), pick (1-9): ", player, mark);
        scanf("%d", &choice);

        if (choice == 1 && square[1] == '1') square[1] = mark;
        else if (choice == 2 && square[2] == '2') square[2] = mark;
        else if (choice == 3 && square[3] == '3') square[3] = mark;
        else if (choice == 4 && square[4] == '4') square[4] = mark;
        else if (choice == 5 && square[5] == '5') square[5] = mark;
        else if (choice == 6 && square[6] == '6') square[6] = mark;
        else if (choice == 7 && square[7] == '7') square[7] = mark;
        else if (choice == 8 && square[8] == '8') square[8] = mark;
        else if (choice == 9 && square[9] == '9') square[9] = mark;
        else
        {
            printf("wrong move! place already taken .");

            for(i = 0; i < 20000000; i++);
            continue;
        }

        // 4. Check
        // jorizontal rows
        if (square[1] == square[2] && square[2] == square[3]) game_status = 1;
        else if (square[4] == square[5] && square[5] == square[6]) game_status = 1;
        else if (square[7] == square[8] && square[8] == square[9]) game_status = 1;
        // vertical columns
        else if (square[1] == square[4] && square[4] == square[7]) game_status = 1;
        else if (square[2] == square[5] && square[5] == square[8]) game_status = 1;
        else if (square[3] == square[6] && square[6] == square[9]) game_status = 1;
        // Diagona
        else if (square[1] == square[5] && square[5] == square[9]) game_status = 1;
        else if (square[3] == square[5] && square[5] == square[7]) game_status = 1;

        else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                 square[4] != '4' && square[5] != '5' && square[6] != '6' &&
                 square[7] != '7' && square[8] != '8' && square[9] != '9')
        {
            game_status = 0;
        }
        else
        {
            game_status = -1; // Machweiter
        }

        player++;
    }

    // 5. Game Over
    printf("\n\n=== FINAL BOARD ===\n\n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c \n\n", square[7], square[8], square[9]);

    if (game_status == 1)
    {
        player--;
        printf("==>\a plyer %d won! congrats mate !\n", player);
    }
    else
    {
        printf("==>\a überfordert du dumme!\n");
    }
}
//system("cls")
