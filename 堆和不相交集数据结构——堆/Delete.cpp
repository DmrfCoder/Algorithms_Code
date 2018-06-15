//
// Created by dmrf on 18-4-29.
//

void Delete(int *H, int i, int &n) {

    if (i == n) {//如果需要删除的是最后一个元素
        n--;
        return;
    }

    H[i] = H[n];
    n--;

    if (H[i] > H[(int) i / 2]) {
        SiftUp(H, i);
    } else {
        SiftDown(H, i, n);
    }
}