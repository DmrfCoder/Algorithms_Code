//
// Created by dmrf on 18-4-29.
//

/*
 * 求x^n:
 *
 * 令m=int(n/2)，假设已经知道如何计算x^m,那么根据x^m次方来计算x^n次方就有两种情况：
    + n为偶数 则x^n=（x^m）^2
    + n为奇数 则x^n=x(x^m)^2
 */

int power(int x,int n){
    if (n==0){
        return 1;
    }

    int m=n/2;
    int y;
    y=power(x,n/2);
    y=y*y;
    if (n%2!=0){//如果n是奇数
        y=y*x;
    }

    return y;
}