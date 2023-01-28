#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct node{
    string name;
    int x,y;
};

bool operator<(const node&a,const node&b){
    if(a.x==b.x) return a.y>=b.y;
    return a.x>b.x;
}

int main(){
    priority_queue<node> pq;
    for(int i=1;i<=5;i++){
        node n;
        cin>>n.name>>n.x>>n.y;
        pq.push(n);
    }
    cout<<"priority queue begin:"<<endl;
    for(int i=1;i<=5;i++){
        cout<<pq.top().name<<"\t"<<pq.top().x<<"\t"<<pq.top().y<<endl;
        pq.pop();
    }
    return 0;
}