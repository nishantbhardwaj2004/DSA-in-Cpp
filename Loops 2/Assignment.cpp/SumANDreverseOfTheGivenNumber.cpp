#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum =0;
    int reverse=0;
    int lastDigit =0;
    while(n>0){
        lastDigit = n%10;
        reverse*=10;
        reverse+=lastDigit;
        sum+=lastDigit;
        n/=10;
        }
        cout<<"The sum is :"<<sum<<endl;
        cout<<"The reverse is :"<<reverse;

}


