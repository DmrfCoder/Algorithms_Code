//
// Created by dmrf on 18-4-29.
//

void makeheap(int *H,int n){
    for (int i = n/2; i >=1 ; --i) {
        SiftDown(H,i,n);
    }
}