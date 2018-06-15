//
// Created by dmrf on 18-4-30.
//

#include <cstdio>

void sort(int *A, int low, int high) {
    for (int i = low; i < high; ++i) {
        for (int j = i + 1; j < high; ++j) {
            if (A[i] > A[j]) {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

int Select(int *A, int low, int high, int k) {
    int p = high - low + 1;
    if (p < 44) {
        sort(A, low, high);
        return A[k];

    }
    int q = p / 5;
    int M[q];

    for (int i = 0; i < q; ++i) {
        sort(A, i * 5, (i + 1) * 5);//将A分成q组，每组5个元素，如果5不整除p，则排除剩余元素
        M[i] = A[i * 5 + 3];//M为q个子序列中的中项（中项集合）
    }

    int mm = M[q / 2];//mm为中项集合的中项
    int *A1, a1 = 0;
    int *A2, a2 = 0;
    int *A3, a3 = 0;
    for (int j = low; j < high; ++j) {
        if (A[j] < mm)A1[a1++] = A[j];
        if (A[j] = mm)A2[a2++] = A[j];
        if (A[j] > mm)A3[a3++] = A[j];
    }
    if (a1 >= k)return Select(A1, 1, a1, k);
    if (a1 + a2 == k)return mm;
    if (a1 + a2 < k)return Select(A3, 1, a3, k - a1 - a2);


}

