#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 0, n = 0;
    scanf("%d", &m);
    scanf("%d", &n);

    char** board = 0;
    board = (char**)malloc(sizeof(char*) * 50);
    for(int i = 0 ; i < 50 ; i++) {
        board[i] = (char*)malloc(sizeof(char) * 50);
    }

    for(int i = 0 ; i < m ; i++) {
        scanf("%s", board[i]);
    }

    int scoreBlackMax = 0;
    int scoreBlackMaxI = 0;
    int scoreBlackMaxJ = 0;

    int scoreWhiteMax = 0;
    int scoreWhiteMaxI = 0;
    int scoreWhiteMaxJ = 0;
    for(int i = 0 ; i < m - 8 + 1 ; i++) {
        for(int j = 0 ; j < n - 8 + 1 ; j++) {
            int scoreBlack = 0;

            for(int k = 0 ; k < 8 ; k++) {
                for(int l = 0 ; l < 8 ; l++) {
                    if((k + l) % 2 == 0) {
                        if(board[i+k][j+l] == 66) scoreBlack++;
                    } else {
                        if(board[i+k][j+l] == 87) scoreBlack++;
                    }
                }
            }

            if (scoreBlackMax < scoreBlack) {
                scoreBlackMax = scoreBlack;
                scoreBlackMaxI = i;
                scoreBlackMaxJ = j;
            }

            int scoreWhite = 0;
            for(int k = 0 ; k < 8 ; k++) {
                for(int l = 0 ; l < 8 ; l++) {
                    if((k + l) % 2 == 0) {
                        if(board[i+k][j+l] == 87) scoreWhite++;
                    } else {
                        if(board[i+k][j+l] == 66) scoreWhite++;
                    }
                }
            }

            if (scoreWhiteMax < scoreWhite) {
                scoreWhiteMax = scoreWhite;
                scoreWhiteMaxI = i;
                scoreWhiteMaxJ = j;
                
            }
        }
    }

    scoreBlackMax < scoreWhiteMax ? printf("%d\n", 64 - scoreWhiteMax) : printf("%d\n", 64 - scoreBlackMax);

    return 0;
}
