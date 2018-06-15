//
// Created by dmrf on 18-4-29.
//

int binarysearch(int *A, int low, int high, int x) {

    if (low > high)return 0;
    int mid = (high + low) / 2;
    if (x == A[mid])return mid;
    if (x < A[mid])return binarysearch(A, low, mid, x - 1);
    else return binarysearch(A, mid + 1, high, x);


}


int binarysearch(int *A, int n, int x) {//A是已经排序过的数组,A[1....n]

    int low, high, j;
    low =1;
    high = n;
    j = 0;//j表示ｘ的下标
    while (low <= high && j == 0) {
        int mid = (high + low) / 2;
        if (x == A[mid])  j = mid;
        else if (x < A[mid])high = mid - 1;
        else low = mid + 1;
    }
    return j;
}