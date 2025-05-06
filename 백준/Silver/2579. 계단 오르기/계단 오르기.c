#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    int score[301];
    int dp[301];

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &score[i]);
    }

    dp[0] = 0;
    dp[1] = score[1];
    dp[2] = score[1] + score[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]); // 2칸 오르기 vs 1칸씩 2번 오르기 최댓값 비교
    }

    printf("%d", dp[n]);
    return 0;
}