// just the important part be showed

void playerMove(int board[9]) {
    int move = 0, cnt = 0;
    do
    {
        printf("\n%sInput move [0..8] : \n", (cnt ? "you can't do that idiot, try again!\n" : "\n"));
        scanf("%d", &move);
        printf("\n");
        cnt = 1;
    } while(board[move]);

    board[move] = -1;
}

int player = 0;
int no_way_to_win_bitch = 0;
int board[9] = {0,0,0,0,0,0,0,0,0}; //computer squares are 1, player squares are -1.

int main() {
    
    printf( "Welcome to unbeatable OOXX AI game version 2 !\n"
            "Computer: O, You: X\nPlay (1)st or (2)nd? ");
    scanf("%d",&player);
    printf("\n");
    unsigned turn;
    for(turn = 0; turn < 9 && (no_way_to_win_bitch = win(board)) == 0; ++turn) {

        if((turn+player) % 2 == 0)
            computerMove(board);
        else {
            draw(board);
            playerMove(board);
        }
    }
    if(turn == 9)
        draw(board);
    printf("\n");
    switch(no_way_to_win_bitch) {
        // ...
    }
    getchar();
    getchar();
}