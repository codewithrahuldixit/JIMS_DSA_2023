#include<bits/stdc++.h>
using namespace std;
void pattern_01(int n){
for (int i=1;i<=n;i++){
    for(int j=1; j<=n;j++){
        cout<<"* ";
    }
    cout<<endl;
}

}
void pattern_02(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
            if(j<=i)
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern_03(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
           if(j<=i)
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern_04(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
            if(j<=i)
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern_05_01(int n)
{
    for (int i=n;i>=1;i--)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern_05_02(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
            if(j<=n-i+1)
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
     for(int i=n;i>=1;i--)
     { 
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
        cout<<endl;

     }
     
}

void pattern_07(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern(int n){
    int gaps = n-1;
    int st = 1;
    for(int i = 0; i < n; i++){
        int g = gaps;
        int s = st;
        for(int j = 0; j < 2*n-1;j++){
            if(g>0){
                cout<<" ";
                g--;
            }else{
                if(s > 0)
                cout <<"*";
                s--;
            }
            

        }
        cout<<endl;
        gaps--;
        st+=2;
    }
}
int main(){
    // pattern_01(6);
    // pattern_02(6);
  // pattern_03(6);
        //pattern_04(6);
// pattern6(6);
// pattern_07(6);
pattern(5);
}