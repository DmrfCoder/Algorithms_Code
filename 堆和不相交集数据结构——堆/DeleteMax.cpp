//
// Created by dmrf on 18-4-29.
//

int DeleteMax(int *H,int &n){
    int x=H[1];
    Delete(H, 1, n);
    return x;
}