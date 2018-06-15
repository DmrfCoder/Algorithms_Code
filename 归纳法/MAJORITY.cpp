#include <clocale>

//
// Created by dmrf on 18-4-29.
//
int candidate(int *A, int m, int n);

int majority(int *A, int n) {
    int c = candidate(A, 1, n);
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (A[i] == c) {
            count++;
        }
    }
    if (count > (int) n / 2) {
        return c;
    } else {
        return NULL;
    }
}

int candidate(int *A, int m, int n) {
    int j = m;
    int c = A[m];
    int count = 1;
    while (j < n && count > 0) {
        j++;
        if (A[j] == c) {
            count++;
        } else {
            count--;
        }
    }
    if (j == n) {
        return c;
    } else {
        return candidate(A, j + 1, n);
    }
}