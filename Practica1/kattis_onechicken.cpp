#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
int personas, pollo, faltante=0,residuo=0;

cin>>personas>>pollo;
if (personas> pollo){
    if (personas-pollo==1){
        cout<<"Dr. chaz necesita una pieza mas de pollo\n";
    } else{
    faltante=personas-pollo;
    cout<<"Dr. Chaz necesita"<<faltante<<"piezas mas de pollo\n";
}
}else {
    if(pollo-personas==1){
        cout<<"al Dr.Chaz le sobra una pieza de pollo";
    } else{
    residuo = pollo- personas;
    cout<<"El Dr. Chaz tiene"<<residuo<<"piezas sobrantes\n";
}
}


    return 0;
}