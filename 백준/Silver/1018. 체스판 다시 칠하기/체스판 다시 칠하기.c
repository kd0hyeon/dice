#include <stdio.h>
#include <string.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

char board[50][51];

int a(int x, int y) {
    int w = 0;
    int b = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char current = board[x + i][y + j];
            if ((i + j) % 2 == 0) {
                if (current != 'W') w++;
                if (current != 'B') b++;
            }
            else {
                if (current != 'B') w++;
                if (current != 'W') b++;
            }
        }
    }
    return MIN(w, b);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    int max = 64;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int b = a(i, j);
            if (b < max) {
                max = b;
            }
        }
    }

    printf("%d\n", max);
    return 0;
}
