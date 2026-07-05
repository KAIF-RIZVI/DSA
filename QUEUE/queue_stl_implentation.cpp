#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(0);
    q.push(1);
    q.push(13);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    while(q.size()!=0){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}