#include <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age < 18){
         cout << "Not Eligilble For Job";
    }
    else if(age <=55){
        cout<<"Eligible For Job";
    }
    else if(age<=57){
        cout << "Eligible For Job,But Retirement Soon.";
    }
    else{
        cout << "Retirement Time";
    }
} 