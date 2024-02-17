
int main(){
    int age;
    cout<<"Enter Your age:"<<endl;
    cin>>age;
    if(age>=150 || age<1){
        cout<<"Invalid  Age";
    }
     else if(age>=18){
        cout<<"You can Vote"<<endl;
    }
    else{
        cout<<"You can't Vote";
    }
}