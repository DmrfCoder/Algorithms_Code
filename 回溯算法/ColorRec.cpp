//
// Created by dmrf on 18-5-5.
//
#include <iostream>

using namespace std;

bool graphcolor(int *pInt, int i);
int n;
void ColorRec(int *c) {//c[1...n]
    for (int i = 1; i <= n; ++i) {
        c[i] = 0;
    }

    bool flag = false;
    flag = graphcolor(c, 1);
    if (flag) {
        cout << "success" << endl;
    } else {
        cout << "no solution" << endl;
    }
}

bool graphcolor(int *c, int i) {
    for (int color = 1; color <= 3; ++color) {
        c[i] = color;
        if (c[i]是合法的){
            if (i < n) {
                graphcolor(c, i + 1);
            } else {
                return true;
            }
        }
    }
    //如果执行到这里说明当前节点不存在合法着色，需要回溯，返回false即可激活前一次递归（即让前一层for循环的color加一），以此达到回溯的目的
    return false;
}
