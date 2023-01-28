#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
struct node{
    int l,r;
    bool operator < (const node& temp){
        return r<temp.r;
    }
}arr[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].l>>arr[i].r;
    }
    sort(arr,arr+n);
    int count=1,pre=arr[0].r;
    for(int i=1;i<n;i++){
        if(arr[i].l>pre) {
            pre=arr[i].r;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}