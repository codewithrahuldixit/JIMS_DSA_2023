#include<bits/stdc++.h>
using namespace std;
   class Node{
    public : 
        int data;
        Node * next;
    };
class LinkList {

    Node * start;
    int listsize;
    public: 
    LinkList(){
        start = NULL;
        listsize = 0;
    }
    Node * createNode(){
        Node * p1 = new Node();
        cout<<"Enter The Data"<<endl;
        cin>>p1->data;
        p1->next = NULL;
        return p1;
    }
    void printList(){
        Node * p = start;
        while(p!=NULL){
                cout<< p->data<<" --->  ";
                p= p->next;
        }
    }
    void createList(int size){
        Node * p1=NULL;
    while(listsize<=size){
        if (start == NULL){
            start = createNode();
            p1=start;
            listsize ++;
        }
        else{            
                p1->next = createNode();
                p1= p1->next;
                listsize++;
            }
        }
    
    }
};
int main(){
    LinkList * l1 = new LinkList();
    l1->createList(5);
    l1->printList();
    return 0;
}