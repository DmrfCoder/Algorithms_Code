//
// Created by dmrf on 18-4-30.
//

int Lcs(char *A, int n, char *B, int m) {
    int L[n + 1][m + 1];
    for (int i = 0; i <= n; ++i) {
        L[i][0] = 0;
    }
    for (int j = 0; j <= m; ++j) {
        L[0][j] = 0;
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= m; ++i) {
            if (A[k] == B[i])L[k][i] = L[k - 1][i - 1] + 1;
            else L[k][i] = L[k][i - 1] > L[k - 1][i] ? L[k][i - 1] : L[k - 1][i];
        }
    }

    return L[n][m];
}