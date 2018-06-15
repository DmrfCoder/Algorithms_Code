//
// Created by dmrf on 18-5-14.
//
/*
 * 输入：数组A[1...m]和它的三个索引p，q，r，1<=p<=q<r<=m，p、q、r满足A[p...q]、A[q+1...r]分别按照升序排列
 * 输出：合并两个子数组A[p...q]和A[q+1...r]的数组A[p...r]
 */

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
