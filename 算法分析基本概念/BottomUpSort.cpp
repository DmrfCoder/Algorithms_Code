//
// Created by dmrf on 18-5-14.
//

/*
 * 输入：n个元素的数组A[1...n]
 * 输出：按非降序排列的数组A[1...n]
 */


void Merge(int *A, int p, int q, int r);

void BottomUpSort(int *A, int n) {
    int t = 1;
    while (t < n) {
        int s = t, t = 2 * s, i = 0;
        while (i + t <= n) {
            Merge(A, i + 1, i + s, i + t);
            i = i + t;
        }
        if (i + s < n) {
            Merge(A, i + 1, i + s, n);
        }
    }
}


void Merge(int *A, int p, int q, int r) {
    int B[r + 1];//B[p...r]是辅助数组
    int s = p, t = q + 1, k = p;//s指向A[p...q]子数组，t指向A[q+1...r]子数组，k指向B数组
    while (s <= q && t <= r) {
        if (A[s] <= A[t]) {
            B[k] = A[s];
            s++;
        } else {
            B[k] = A[t];
            t++;
        }

        k++;
    }

    if (s = q + 1) {//说明s指向的数组已经遍历完了
        for (int i = t; i <= r; ++i) {
            B[k++] = A[i];
        }
    } else {
        for (int i = s; i <= r; ++i) {
            B[k++] = A[i];
        }
    }

    for (int j = p; j <= r; ++j) {
        A[j] = B[j];

    }
}
