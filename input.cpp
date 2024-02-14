#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the number a"<<endl;
    cin>>a;
    cout<<"Enter the number b"<<endl;
    cin>>b;

   cout<<"The sum of a + b: "<<a + b<<endl;
   cout<<"The sum of a - b: "<<a - b<<endl;
   cout<<"The sum of a * b: "<<a * b<<endl;

   cout<<"The sum of a / b: "<<(float)a / b<<endl; //typecasting did in this to get accurate output
    return 0;
}