//
// Created by dmrf on 18-5-8.
//
/*
 * 输入：物品集合U={u1,u2,u3...un}，体积为s1,s2,s3...sn，价值为v1,v2,v3...vn，容量为C的背包
 * 输出：满足条件的最大价值
 *
 */
int Knapsack(int *s,int *v,int C,int n){
    int V[n+1][C+1];//V[i][j]表示从前i项找出的装入体积为j背包的最大值
    for (int i = 0; i <=n ; ++i) {
        V[i][0]=0;
    }
    for (int j = 0; j <=C ; ++j) {
        V[0][j]=0;
    }

    for (int k = 1; k <=n ; ++k) {
        for (int i = 1; i <=C ; ++i) {
            if(s[k]<=i){
                V[k][i]=max(V[k-1][i],V[k-1][i-s[k]]+v[k]);
            }
        }
    }

    return V[n][C];
}
