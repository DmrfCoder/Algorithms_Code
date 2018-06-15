//
// Created by dmrf on 18-4-29.
//
#include <iostream>
using namespace std;
void MaxMin(int *A,int n){
    int max,min;
    min=max=A[0];
    for (int i = 1; i <n ; ++i) {
        if(A[i]>max)max=A[i];
        if(A[i]<min)min=A[i];
    }

    cout<<max<<min<<endl;
}

(max min) MaxMin2(int *A,int low,int high){
    if (high-low==1){
        if (A[low]<A[high])return (A[low],A[high]);
        else return (A[high],A[low]);
    } else{
        int mid=(high+low)/2;
        (x1,y1)=MaxMin2(A,low,mid);
        (x2,y2)=MaxMin2(A,mid+1,high);
        x=min(x1,x2);
        y=max(y1,y2);

        return (x,y);
    }
}