//
// Created by dmrf on 18-5-8.
//

/*
 * 输入：n×n维矩阵l[1...n,1...n]，对于有向图G=({1,2,...n},E)中的边(i,j)的长度为l[i,j]
 * 输出：矩阵D，使得D[i,j]等于i到j的距离
 * l矩阵需要满足：l[i,i]=0，对于m-->n没有直接连接的有向边（因为是有向图，只考虑单边），应有l[m,n]=INT.MAX（即无穷）
 *
 */

void Floyd(int **l,int n){
    int **d= reinterpret_cast<int **>(new int[n + 1][n + 1]);
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            d[i][j]=l[i][j];
        }
    }

    for (int k = 1; k <=n ; ++k) {
        for (int i = 1; i <=n ; ++i) {
            for (int j = 1; j <=n ; ++j) {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }

        }
    }

}



