#include<iostream>
using namespace std;

int main(){
    int i, j, k,l;

    cout<<"Enter the two numbers: "<<"\n";
    
    cin>>i>>j;
    k= int(i/j);
    l = i%j;
    cout<<"The Quotient is "<<k<<"\n";
    cout<< "The Remainder is "<<l;
     

   return 0;


} 


