#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    int a[1000];
    int dp[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        dp[i] = 1; // 최소 1번
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] < a[j]) {
                dp[i] = max(dp[i], dp[j] + 1); // 뒤에 붙일 수 있는지 없는지 검사 후 최댓값 넣기
            }
        }
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > result)
            result = dp[i];
    }

    printf("%d\n", result);
    return 0;
}