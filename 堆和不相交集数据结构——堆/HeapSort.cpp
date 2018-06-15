//
// Created by dmrf on 18-4-29.
//

void HeapSort(int *H,int n){
    makeheap(H,n);
    int t;
    for (int i = n; i >=2 ; --i) {
        t=H[i];
        H[i]=H[1];
        H[1]=t;
        SiftDown(H,1,i-1);
    }
}