#include <iostream>
using namespace std;
int main() {
int num1;
cout<<"Enter a Number:";
cin>>num1;
int sum,n;
for(n=0;n<=num1;n++){
    sum=sum+n;
    cout<<sum<<endl;
}
cout<<"The Sum of the Natural number is:"<<sum<<endl;
    return 0;
}