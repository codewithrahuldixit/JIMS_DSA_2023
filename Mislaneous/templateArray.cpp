#include<bits/stdc++.h>
using namespace std;
template <typename T > void input_Array(T arr[],int size)
    {
        for(int i =0;i<size;i++)
            {
                cout <<"Enter and Integer Value "<<endl;
                cin>>arr[i];
            }
    }
template <typename T > void output_Array(T arr[],int size){
cout <<"The Array is As Follows "<<endl;
        for(int i =0;i<size;i++)
            {               
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    
}
template <typename T > void bubble_sort(T arr[],int size){
    int flag =0;
    for(int i = 0; i<size-1;i++){
        for (int j =0 ;j<size-1-i;j++)
        {           
            if(arr[j]>arr[j+1]){
                flag =1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==0)
        break;
    }
}
int delete_Array(int arr[],int pos,int size ){
    int item = arr[pos];
    for(int i = pos+1;i<size; i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=-1;
    return item;
}
   
int main(){
    char arr[5];
    input_Array(arr,5);
    output_Array(arr,5);
   // delete_Array(arr,2,5);
   bubble_sort(arr,5);
    output_Array(arr,5);

}