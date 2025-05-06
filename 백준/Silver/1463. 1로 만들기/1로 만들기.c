#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return a < b ? a : b; // A가 B보다 작으면 A, 아니면 B 출력
}

int make_one(int n) {
    int* dp = (int*)malloc(sizeof(int) * (n + 1));
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 빼는 경우

        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나누는 경우
        }

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나누는 경우
        }
    }

    int result = dp[n];
    free(dp);
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", make_one(n));
    return 0;
}