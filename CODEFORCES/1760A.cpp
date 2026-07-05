#include<iostream>
using namespace std;

int main(){
    int cases ,a,b,c ,max, min;
    cin>>cases;
    cout<<endl;

    for(int i=0;i<cases;i++){
        cin>>a>>b>>c;
        if(a>b && a>c)
        {max=a;}
        else if(b>a &&b>c)
        {max=b;}
        else if(c>a&&c>a)
        {max=c;}
        if(a<b && a<c)
        {min=a;}
        else if(b<a &&b<c)
        {min=b;}
        else if(c<a&&c<a)
        {min=c;}

        cout<<((a+b+c)-max-min)<<endl;
    }
    return 0;
}