//
// Created by dmrf on 18-5-7.
//

/*
 * 输入：r[1...n+1],r[i]表示第i个矩阵的行数，r[i+1]表示第i个矩阵的列数
 * 输出：n个矩阵的数量乘法的最小次数
 */

int Matchain(int *r,int n){
    int c[n][n];
    for (int i = 1; i <=n ; ++i) {
        c[i][i]=0;//对角线填充0
    }

    for (int d = 1; d <=n-1 ; ++d) {
        for (int i = 1; i <=n-d ; ++i) {
            int j=i+d;
            c[i][j]=-1;
            for (int k = i+1; k <=j ; ++k) {
                if(c[i][j]==-1){
                    if(c[i][k-1]!=-1&&c[k][j]!=-1){
                        c[i][j]=c[i][k-1]+c[k][j]+r[i]*r[k]*r[j+1];
                    }
                }
                c[i][j]=min(c[i][j],c[i][k-1]+c[k][j]+r[i]*r[k]*r[j+1]);
            }
        }
    }
}