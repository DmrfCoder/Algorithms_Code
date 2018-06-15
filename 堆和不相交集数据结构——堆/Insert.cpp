//
// Created by dmrf on 18-4-29.
//

/*
 * 功能:
将元素x插入到已有的堆H中
实现思路:
首先将堆的大小增加1（n++），然后将x放在H[n]中，然后根据需要将H[n]中的元素x进行上移操作，直到最后形成一个合格的堆。
 */

void insert(int *H,int x,int &n){
    n++;
    //这里默认H开的空间够用
    H[n]=x;
    SiftUp(H, n);
}