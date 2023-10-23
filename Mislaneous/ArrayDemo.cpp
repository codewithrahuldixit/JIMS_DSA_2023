#include<bits/stdc++.h>
using namespace std;
void input(int * x, int size){
    cout<<"Please Enter the "<<size<<" values :"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>x[i];
    }
}
void output(int * x,int size){
    cout<<"Your Array is As follows :"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<"["<<x[i]<<"]"<<endl;
    }
}
int main(){
    int arr[10];
    cout<<arr<<endl;
    input(arr,10);
    output(arr,10);
    return 0;
}