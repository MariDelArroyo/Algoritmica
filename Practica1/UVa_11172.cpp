#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
int T,N1,N2;
cin>>T;
while (T<15){
    for(int i=0;i<T;i++){
    cin>>N1>>N2;
    if(N1<N2){
        cout<<"<";
    } else if(N1>N2){
        cout<<">";
    }else{
        cout<<"=";
    }
}
}

    return 0;
}