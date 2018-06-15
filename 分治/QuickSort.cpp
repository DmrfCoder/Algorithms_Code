//
// Created by dmrf on 18-4-30.
//

int Split(int *A, int low, int high) {//输入一个序列，返回A[low]对应元素的新位置
    int i = low;
    int x = A[low];
    for (int j = low + 1; j <= high; ++j) {
        if (A[j] <= x) {
            i++;
            if (i != j) {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }

    int t;
    t = A[low];
    A[low] = A[i];
    A[i] = t;

    return i;
}

void QuickSort(int *A, int low, int high) {
    if (low < high) {
        int w = Split(A, low, high);//w为A[low]的新位置
        QuickSort(A, low, w - 1);
        QuickSort(A, w + 1, high);
    }
}