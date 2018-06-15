//
// Created by dmrf on 18-5-14.
//
/*
 * 输入：n个元素的数组A[1...n]
 * 输出：按非降序排列的数组A[1...n]
 */

void InsertionSort(int *A, int n) {
    for (int i = 2; i <= n; ++i) {
        int x = A[i];
        int j = i - 1;
        while (j > 0 && A[j] > x) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}