#include<bits/stdc++.h>
using namespace std;
void callbyref(int & x)
{
    x++;
}
void callbyreference(int * x)
{
    (*x)++;
}
void callbyvalue(int  x)
{
    x++;
}
int main(){
int x=22;
int y = 23;
callbyreference(&x);
callbyvalue(y);
cout<<"Hello X"<<x<<endl;
cout<<"Hello y"<<y<<endl;
return 0;
}