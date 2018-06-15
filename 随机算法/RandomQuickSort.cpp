//
// Created by dmrf on 18-5-14.
//

#include <random>

/*
 * 输入：n个元素的数组A[1...n]
 * 输出：A中按非降序排列的元素
 */


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

void QuickSort(int *A,int n){

}

void RandomQuickSort(int low,int high){
    if(low<high){

        int v=random(low,high);
        int t=A[low];
        A[low]=A[v];
        A[v]=t;

        Split(A[low...high],low);
        RandomQuickSort(low,v-1);
        RandomQuickSort(v+1,high);
    }
}