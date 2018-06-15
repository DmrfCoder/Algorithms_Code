//
// Created by dmrf on 18-4-29.
//

int Exp(int x,int n){
    int d[10];//假设n化为2进制数字后存在d数组里面
    int y=1;
    for (int i = len(d); i >=0 ; --i) {
        y=y*y;
        if(d[i]==1){
            y=y*x;
        }
    }
}