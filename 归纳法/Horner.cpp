//
// Created by dmrf on 18-4-29.
//
int Horner(int *A,int n,int x){//数组A的长度为n+2，从A[0]到A[n+1]代表了a_0到a_(n+1)

    int p=A[n+1];//p=a_(n+1)
    for (int i = 1; i <=n ; ++i) {
        p=p*x+A[n+1-i];//p=p*x+a_(n-i)
    }

}
