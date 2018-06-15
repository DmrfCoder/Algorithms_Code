//
// Created by dmrf on 18-5-7.
//

bool advance(int *pInt, int i);
int n;

/*
 * 输入：集合X1,X2,X3...Xn
 * 输出：解向量v=（x1,x2,x3...xi）0<=i<=n
 */

void BackTrackRec(int *X) {//c[1...n]
    v();

    bool flag = false;
    flag = advance(X[1], v, 1);
    if (flag) {
        cout << "success" << endl;
    } else {
        cout << "no solution" << endl;
    }
}

bool advance(int X,&v int i) {
     for x in X:

    //如果执行到这里说明当前节点不存在合法着色，需要回溯，返回false即可激活前一次递归（即让前一层for循环的color加一），以此达到回溯的目的
    return false;
}
