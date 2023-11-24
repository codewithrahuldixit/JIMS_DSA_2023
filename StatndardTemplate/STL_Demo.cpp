#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<set>
using namespace std;
int main(){
   /*vector <int> v ;
    v.push_back(12);
    v.push_back(13);
    v.push_back(1);
    v.push_back(11);
//vector <int> :: iterator it = v.begin();
for (auto it = v.begin() ; it!=v.end();it++){
    cout<< *it<<" ";
}
cout<<endl;
for(auto i : v){
    cout<< i << " ";
}
cout<<endl;

v[2]=22;
for(int i=0;i< v.size();i++){
    cout<<v[i]<<" ";

}
v.erase(v.begin(),v.begin()+2);
cout<<endl;
for(int i=0;i< v.size();i++){
    cout<<v[i]<<" ";
==================================================================
List Example :
list <int> l1;
l1.push_back(23);
l1.push_back(22);
l1.push_back(21);
for(auto i : l1){
    cout<< i << " ";
}
l1.push_front(44);
cout<<endl;
for(auto i : l1){
    cout<< i << " ";
}
auto it = l1.begin();
cout<<endl;
l1.pop_back();
for(auto i : l1){
    cout<< i << " ";
}
l1.pop_front();
cout<<endl;
for(auto i : l1){
    cout<< i << " ";
}
cout<<endl;

}
==============================Deque Example ===============================
deque<int> d1 ;
d1.push_back(12);
d1.push_back(11);
d1.pop_back();
for(auto i : d1){
    cout<< i << " ";
}
cout<<endl;
=============================Stack Example ===================================
stack<int> s1;
s1.push(22);
s1.push(21);
s1.push(24);
s1.push(25);
while(!s1.empty())
{
    cout<<s1.top()<<" " ;
    s1.pop();
}
cout<<endl;

*/
set<int> s1;
s1.insert(12);
s1.insert(12);
s1.insert(11);
s1.insert(10);
s1.insert(14);
s1.insert(16);

for(auto i : s1){
    cout<< i <<" ";
}
cout<<endl;
}
