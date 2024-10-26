#include <iostream>
using namespace std;
int main() {
    int subjects;
    float marks;
    cout<<"enter the total number of subjects:";
    cin>>subjects;
    for(int i=1;i<=subjects;i++){
        cout<<"enter marks for subject"<<i<<"(out of 100):";
        cin>>marks;
        if (marks>=90){
            cout<<"grade for subject"<<i<<":A"<<endl;
        }else if (marks>=75){
            cout<<"grade for subject"<<i<<":B"<<endl;
        }else if (marks>=50){
                cout<<"grade for subject"<<i<<":C"<<endl;
                }else{
                    cout<<"grade for subject"<<i<<":F"<<endl;
                }
    }
    return 0;
}