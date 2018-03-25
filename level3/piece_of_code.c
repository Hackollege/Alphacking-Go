
void playerMove(int board[9]) {
    int move = 0, cnt = 0;
    do
    {
        printf("\n%sInput move [0..8] : \n", (cnt ? "you can't do that idiot, try again!\n" : "\n"));
        scanf("%d", &move);
        printf("\n");
        cnt = 1;
    } while(move >= 9 || move < 0 || board[move]);

    board[move] = -1;
}

int main() {
    int player = 0;
    int board[9] = {0,0,0,0,0,0,0,0,0};
    //computer squares are 1, player squares are -1.

    printf( "Welcome to unbeatable OOXX AI game version 2 !\n"
            "Computer: O, You: X\nPlay (1)st or (2)nd? ");
    scanf("%d",&player);
     
    printf("\n");
    int turn;
    for(turn = 1; turn <= 9 && win(board) == 0; ++turn) {

        if((turn + player) % 2 == 1)
        {
            computerMove(board);
        }
        else {
            draw(board);
            playerMove(board);
        }
    }
    // ...
}