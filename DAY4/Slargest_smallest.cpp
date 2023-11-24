#include <bits/stdc++.h>
#include<vector> 
using namespace std;
int slargest( vector <int> v ,int n) {

    int largest = v[0];
    int slargest =-1;
    for (int i = 0; i < n; i++) {
      if (v[i] >= largest) {
      slargest=largest;
      largest = v[i];
      } else if (largest!=v[i] && v[i]>slargest) {
          slargest=v[i];
      }
    }
    return slargest;
}
int sSmallest( vector <int> v ,int n) {

    int smallest = v[0];
    int ssmallest =-1;
    for (int i = 0; i < n; i++) {
      if (v[i] <= smallest) {
      ssmallest=smallest;
      smallest = v[i];
      } else if (smallest!=v[i] && v[i]<ssmallest) {
          ssmallest=v[i];
      }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
vector<int> temp;
temp[0]=slargest(a,n);
temp[1]=sSmallest(a,n);
return temp;
}
