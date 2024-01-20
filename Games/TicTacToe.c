#include <stdio.h>
#include <conio.h>


int board();
int main(){
    // printf("Hurray");
    board();
    return 0;
}


int board() {
    char arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Player 1, enter your choice %d%d: ", i + 1, j + 1);
            scanf(" %c", &arr[i][j]);  // Note the space before %c

            printf("Player 2, enter your choice %d%d: ", i + 1, j + 1);
            scanf(" %c", &arr[i][j]);  // Note the space before %c

            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}