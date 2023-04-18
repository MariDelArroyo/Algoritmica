#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main() {
int n1,n2,solucion=0;
cin>>n1>>n2;

if(n1>=n2){
solucion= n1-n2;
} else {
    solucion= n2-n1;
}
cout<<solucion<<"\n";

    return 0;
}