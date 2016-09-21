#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{double a,b,c,P,S;
cin>>a>>b>>c;
P=(a+b+c)/2;
if(a>=b+c||b>=a+c||c>=a+b) cout<<"Ne sushtestvuva";
else{
if(a>0)
{
    if(b>0)
        if(c>0) cout<<"S="<<sqrt(P*(P-a)*(P-b)*(P-c));
}
else cout<<"Ne sushtestvuva";

}




return 0;
}
