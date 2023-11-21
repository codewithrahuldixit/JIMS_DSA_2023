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
void pattern_07_01(int n){
    int gaps = n-1;
    int st = 1;
    for(int i = 0; i < n; i++){
        int g = gaps;
        int s = st;
        for(int j = 0; j < 2*n-1;j++){
            if(g>0){
                cout<<"  ";
                g--;
            }else{
                if(s > 0)
                cout <<"* ";
                s--;
            }
            

        }
        cout<<endl;
        gaps--;
        st+=2;
    }
}
void pattern_08(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=2*(n-i)+1 ;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern_09(int n){
    /* Pattern_09
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        
*/
    pattern_07(n);
    pattern_08(n);
}
void pattern_09_01(int n){
    /* Pattern_09
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        
*/
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
    for (int i=2;i<=n;i++)
    {
        for(int j=1; j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=2*(n-i)+1 ;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
void pattern_10(int n){
    int stars=0;
    for(int i =1; i<=2*n-1;i++){
            stars=i;
            if (i>n)
            stars=2*n-i;
            for (int j =1 ;j<=stars;j++){
                cout<<"* ";
            }
            cout<<endl;
    }
}
void pattern_11(int n){
    int value;
    for (int i =1;i<=n;i++)
    {
        value=i%2;
        for (int j =1 ;j<=i;j++){
            cout<<value << " "; 
            value = 1-value;
        }
        cout<<endl;
    }
}
void pattern_12(int n ){
    for (int i =1 ;i<=n;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        cout<< j;
        for(int k =1;k<=2*(n-i);k++)
        cout<< " ";
        j--;
        for(;j>0;j--)
        cout<< j;
        cout<<endl;
    }
}
void pattern_14(int n){
    for(int i = 1; i<=2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            int left = j-1;
            int top = i-1;
            int right = 2*n-1-j;
            int bottom = 2*n-1-i;
                 cout<<n-(min(top,min(bottom,min(left,right))))<<" ";
        }
           
        cout<<endl;
    }
}
void bitExtract(){
    int x,lr,ur;
    cout<<"Enter the Value of X"<<endl;
    cin>>x;
    cout<<"Enter the lower range "<<endl;
    cin>>lr;
    cout<<"Enter the higher range "<<endl;
    cin>>ur;
    int z = pow(2,(ur-lr+1))-1;

    int z1 = x>>lr;
    int z2 = z&z1;
    cout<< z2;
}
int main(){
    // pattern_01(6);
    // pattern_02(6);
  // pattern_03(6);
        //pattern_04(6);
// pattern6(6);
//pattern_07(6);
//pattern_07_01(5);
//pattern_08(5);
//pattern_09_01(5);
//pattern_09_01(5);
//pattern_10(5);
//pattern_11(5);
//pattern_12(5);
pattern_14(3);
//bitExtract();
}