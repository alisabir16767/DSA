#include<iostream>
using namespace std;
void Intersection(int a[],int b[],int m,int n){
    for(int i=0;i<m;i++){
        if(i>0&&a[i]==a[i-1]){
            continue;
        }
        for(int j=0;j<n;j++){
         if(a[i]==b[j]){
            cout<<a[i]<<"\t";
            break;
         }
        }
    }
}