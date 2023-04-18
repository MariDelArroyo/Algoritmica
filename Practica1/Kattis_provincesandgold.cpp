#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
int g,s,c,resultado=0;
cin>>g>>s>>c;
resultado = (g*3)+(s*2)+c;
string treasure, victory;
if (resultado>7){
victory ='province';
} else if (resultado>5){
victory = 'duchy';
} else if(resultado>2){
victory = 'estate';
} 
if (resultado>5){
    treasure='gold';

}else if(resultado>2){
    treasure='silver';

}else {
    treasure='cooper';
}
if(victory!=" "){
    cout<<victory<<"or"<<treasure;
}
cout<<victory<<"\n";




    return 0;
}