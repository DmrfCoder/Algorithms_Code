//
// Created by dmrf on 18-5-14.
//

/*
 * 输入：n个元素的数组A[1...n]、x
 * 输出：如果x=A[j]&&1<=j<=n，则输出j，否则输出0
 */

int Linearsearch(int *A,int x, int n){
    int j=0;
    while (j<n&&x!=A[j]){
        j++;
    }

    if(x==A[j])return j;
    return 0;
}