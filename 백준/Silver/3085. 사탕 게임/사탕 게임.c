#include <stdio.h>

int a;
char board[50][51];

int max(int a, int b) {
    return a > b ? a : b;
}

int check() {
    int max_count = 1;

    for (int i = 0; i < a; i++) {
        int count = 1;
        for (int j = 1; j < a; j++) {
            if (board[i][j] == board[i][j - 1]) {
                count++;
                max_count = max(max_count, count);
            }
            else {
                count = 1;
            }
        }
    }

    for (int j = 0; j < a; j++) {
        int count = 1;
        for (int i = 1; i < a; i++) {
            if (board[i][j] == board[i - 1][j]) {
                count++;
                max_count = max(max_count, count);
            }
            else {
                count = 1;
            }
        }
    }

    return max_count;
}

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%s", board[i]);
    }

    int answer = 1;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j + 1 < a && board[i][j] != board[i][j + 1]) {
                swap(&board[i][j], &board[i][j + 1]);
                int temp = check();
                answer = max(answer, temp);
                swap(&board[i][j], &board[i][j + 1]); 
            }

            if (i + 1 < a && board[i][j] != board[i + 1][j]) {
                swap(&board[i][j], &board[i + 1][j]);
                int temp = check();
                answer = max(answer, temp);
                swap(&board[i][j], &board[i + 1][j]); 
            }
        }
    }
    printf("%d\n", answer);
    return 0;
}
