//
// Created by dmrf on 18-5-14.
//

/*
 * 输入：n个元素的升序数组A[1...n]、x
 * 输出：如果x=A[j]&&1<=j<=n，则输出j，否则输出0
 */

int Binarysearch(int *A, int x, int n) {
    int low = 1, high = n, j = 0;
    while (low <= high && j == 0) {
        int mid = (int) ((low + high) / 2);
        if (x == A[mid])j = mid;
        else if (x < A[mid])high = mid - 1;
        else low = mid + 1;
    }

    return j;
}