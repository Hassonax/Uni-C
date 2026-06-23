#include <stdio.h>

int main() {
    int i, j, c = 0;
    int arrayv2[5][5];
    int arrayv[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            if (i == j || (i + j) == 4) {
                arrayv2[i][j] = arrayv[c];
                c += 1;
            } else {
                arrayv2[i][j] = 0;
            }
        }
    }

    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            printf("%d ", arrayv2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
