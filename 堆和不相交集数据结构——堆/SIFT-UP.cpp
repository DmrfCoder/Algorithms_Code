//
// Created by dmrf on 18-4-29.
//

/*
SIFT-UP
功能：当某个节点（H[i]）的值大于他的父亲节点的值时，需要通过SITF-UP将这个节点沿着从H[i]到H[1]这条唯一的路径上移到合适的位置以形成一个合格的堆。
实现思路：将H[i]与其父亲节垫H[i/2]比较，如果H[i]大于H[i/2]，则将H[i]与H[i/2]互换，直到H[i]没有父节点或者H[i]不大于H[i/2]。
*/

int SiftUp(int *H, int i) {

    while (true) {
        if (i == 1) {
            break;//说明当前i是根节点
        }
        if (H[i] > H[(int) i / 2]) {//如果当前节点比父亲节点大
            int t;
            t = H[i];
            H[i] = H[(int) i / 2];
            H[(int) i / 2] = t;
            i = i / 2;
        } else {
            break;
        }
    }
    return 0;
}