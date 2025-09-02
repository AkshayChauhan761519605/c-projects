#include <stdio.h>

char arr[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

void show() {
    int x, y;
    for(x=0; x<3; x++) {
        for(y=0; y<3; y++) printf(" %c ", arr[x][y]);
        printf("\n");
    }
}

int check() {
    int i;
    for(i=0;i<3;i++) {
        if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2]) return 1;
        if(arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i]) return 1;
    }
    if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]) return 1;
    if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]) return 1;
    return 0;
}

int main() {
    int move, turn=0, x, y;
    char p;
    while(turn < 9) {
        show();
        p = (turn%2==0) ? 'X':'O';
        printf("Player %c, enter move: ", p);
        scanf("%d", &move);
        x=(move-1)/3; y=(move-1)%3;
        if(arr[x][y]=='X' || arr[x][y]=='O') {
            printf("Invalid move!\n"); continue;
        }
        arr[x][y]=p;
        if(check()) { show(); printf("Player %c wins!\n", p); return 0; }
        turn++;
    }
    show();
    printf("It's a draw!\n");
    return 0;
}
