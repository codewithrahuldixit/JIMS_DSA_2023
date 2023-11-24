#include<bits/stdc++.h>
using namespace std;
void input_Array(int arr[],int size)
    {
        for(int i =0;i<size;i++)
            {
                cout <<"Enter and Integer Value "<<endl;
                cin>>arr[i];
            }
    }
void output_Array(int arr[],int size){
cout <<"The Array is As Follows "<<endl;
        for(int i =0;i<size;i++)
            {               
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    
}
/*Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5*/
void selection_sort(int arr[], int n) {
  // selection sort
  int mini;
  for (int i = 0; i < n - 1; i++) {
     mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    if(mini!=i)
        swap(arr[i],arr[mini]);
  }
}
/*Example 1:

Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5*/
void insertion_sort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
void insertion_sort_01(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        int j=i;
        int item = arr[i];
        while (j > 0 && item < arr[j-1]) {
            arr[j]=arr[j-1];
                j--;
        }
        arr[j]=item;
    }
}

/*Merge Sort 
Example 1:
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7,


Example 2:
Input: N=7,arr[]={3,2,8,5,1,4,23}
Output: 1,2,3,4,5,8,23*/
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}


void bubble_sort(int arr[],int size){
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
    int arr[5];
    input_Array(arr,5);
    output_Array(arr,5);
   // delete_Array(arr,2,5);
   ///bubble_sort(arr,5);
  // selection_sort(arr,5);
  insertion_sort_01(arr,5);
   cout<<"The output After Insertion Sort "<<endl;
    output_Array(arr,5);

}