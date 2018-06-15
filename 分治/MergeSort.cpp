//
// Created by dmrf on 18-4-30.
//



void Merge(int *pInt, int low, int mid, int high);

void MergeSort(int *A, int low, int high) {
    if (low < high) {
        int mid = (high + low) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, high, mid + 1);
        Merge(A, low, mid, high);
    }
}

void Merge(int *A, int low, int mid, int high) {
    int n = high - low;
    int B[high - low];
    int b = mid;
    int i;
    for (i = 0; i < n && low < mid && b < high; ++i) {
        if (A[low] < A[b]) {
            B[i] = A[low++];
        } else {
            B[i] = A[b++];
        }
    }

    for (int j = low; j < mid; ++j) {
        B[i] = A[j];
    }
    for (int k = b; k < high; ++k) {
        B[i] = A[k];
    }

    for (int l = low; l <high ; ++l) {
        A[l]=B[i];
    }
}