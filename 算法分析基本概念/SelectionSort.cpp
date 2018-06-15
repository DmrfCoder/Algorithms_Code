//
// Created by dmrf on 18-5-14.
//

/*
 * 输入：n个元素的数组A[1...n]
 * 输出：按非降序排列的数组A[1...n]
 */

void SelectionSort(int *A, int n) {

    for (int i = 0; i < n; ++i) {

        for (int j = i + 1; j <= n; ++j) {
            if (A[i] > A[j]) {
                int t = A[i];
                A[i] = A[i];
                A[i] = t;
            }
        }
    }

}