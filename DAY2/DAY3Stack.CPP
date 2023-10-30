#include<bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int * arr;
    int size;
    public :
    Stack(int size){
        top =-1;
        this->size =size;
        arr = new int[size];
    }

    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
    bool isFull(){
        if(top==size-1) return true;
        return false;
    }

    void push(int item){
        if(isFull()) return ;
        top++;
        arr[top] = item;
    }
    int pop(){
        if(isEmpty()) return -1;
        int item ;
        item = arr[top];
        top--;
        return item;
    }
};
int main(){
   Stack s1 (5);
    s1.push(12);
    s1.push(44);
    s1.push(55);
    s1.push(77);
    cout<<s1.pop();
    return 0;
}