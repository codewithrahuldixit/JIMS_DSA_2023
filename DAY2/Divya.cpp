#include<iostream>
using namespace std;
void pattern07(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*row-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(int i=row-1;i>=1;i--)
    {
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*row-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int row;
    cin>>row;
    pattern07(row);
}