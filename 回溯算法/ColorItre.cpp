//
// Created by dmrf on 18-5-5.
//
#include <iostream>

using namespace std;
int n;

void ColorItre(int *c) {//c[1...n]
    for (int i = 1; i <= n; ++i) {
        c[i] = 0;
    }
    bool flag = false;
    int k = 1;
    while (k >= 1) {
        while (c[k] <= 2) {
            c[k] = c[k] + 1;
            if (c[k]为合法的){
                if (k == n) {
                    flag = true;
                    break;
                } else {
                    k++;
                }

            }
        }

        if (flag) {
            break;
        }

        //如果第二个循环跳出执行到这里，则说明当前节点k试遍了三种颜色仍然没有找到合法的着色，则将k--进行回溯，注意要将c[k]置为初始值0
        c[k] = 0;
        k--;
    }

    if (flag) {
        cout << "success" << endl;
    } else {
        cout << "no solution" << endl;
    }

}