#include<stdio.h>
int coin[20];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        for (int i = 0; i < N; ++i)
            scanf("%d", coin + i);
        int M;
        scanf("%d", &M);
        int dp[10001] = { 1, };
        for (int i = 0; i < N; ++i)
        {
            for (int j = coin[i]; j <= M; ++j)
                dp[j] += dp[j - coin[i]];
        }
        printf("%d\n", dp[M]);
    }
}
