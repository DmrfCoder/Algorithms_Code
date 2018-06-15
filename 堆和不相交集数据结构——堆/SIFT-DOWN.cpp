//
// Created by dmrf on 18-4-29.
//

/*
 * ####SIFT-DOWN
功能：当某个节点（H[i]）的值大于他的父亲节点的值时，需要通过SITF-UP将这个节点沿着从H[i]到H[1]
     这条唯一的路径**上移到合适的位置以形成一个合格的堆。
实现思路：将H[i]与其父亲节点H[i/2]比较，如果H[i]大于H[i/2]，则将H[i]与H[i/2]互换，直到H[i]没有父节点或者H[i]不大于H[i/2]。
 */

int SiftDown(int *H, int i, int n) {
    while (true) {
        i = 2 * i;
        if (i > n) {
            break;
        }

        if (i + 1 <= n) {
            if (H[i + 1] > H[i]) {//比较两个子节点哪个最大
                i++;
            }
        }

        if (H[i] > H[(int) i / 2]) {
            int t;
            t = H[i];
            H[i] = H[(int) i / 2];
            H[(int) i / 2] = t;
        }
    }
}