#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int c=0, m=n;
	while(n!=0)
	{
		int x=n%10;
		if(x==0)
		{
			n=n/10;
			continue;
		}
		if((m%x)==0)
		c++;
		n=n/10;



		
	}

	return c;
	// Write your code here.	
}
int Countthedigit(int number){
    int count=0;
        while(number!=0){
            count++;
            number=number/10;
        }
        return count;
}
int reverse(int number ){
long reverse = 0;
while(number !=0){
reverse = reverse * 10 + (number %10);
number= number/10;
}
 if(reverse<=INT_MAX && INT_MIN<=reverse)
	        	return (int)reverse;
	        else return 0;

}
void printAllDivisor(int number){
    for(int i =1 ;i*i<=number ;i++){
        if(number % i ==0){
            cout<< i << " "<<endl;
            if(i!=number/i){
                cout<< number / i << " "<<endl;
            }
        }
    }
}
void primeNumber(int number){
    int count =1;
    for(int i =2 ;i*i<number ;i++){
        if(number % i ==0){
            count++;
            break;
        }
    }
    if(count ==1)
    cout<<"Number is Prime"<<endl;
    else
    cout<<"Number is Not Prime"<<endl;
}

int gcd(int n1 , int n2 ){
    while (n1>0 && n2>0){
        if (n1>n2) n1= n1%n2;
        else n2 = n2 % n1;
    }
    if (n1==0) return n2;
    return n1;
}
void insertPosition(int arr[],int value, int pos, int size){
    int i = size;
    while(i!=pos && i>0){
        arr[i]= arr[i-1];
        i--;
    }
    arr[pos]=value;
}

int main(){
    int arr [10] ={1,2,4,65,34,21};
    for(auto i : arr ) cout<< i<<" ";
    cout<< endl;
    insertPosition(arr,25,2,6);
    for(auto i : arr ) cout<< i<<" ";
    cout<< endl;
    //printAllDivisor(36);
   // primeNumber(1);
   //cout <<"GCD OF Two Numbers : "<< gcd(15,75);
    return 0;
}