#include<iostream>
using namespace std;
int main(){
    cout<<"DO NOT CONTINUE ANSWERING IF U ALREADLY KNOW U ARE NOT MY TYPE AFTER ANSWERING THE FIRST QUESTION"<<endl;
    int age;
    cout<<"enter number of years"<<endl;
    cin>>age;
    if(age>=18 && age<25){
        cout<<"you are the right one for me";

    }
    else{
        cout<< "you are not my type"<<endl;

    }
    cout<<"1) fat ,2)slender 3) nomarl";
    int a;
     
    cin>>a;
    if( a=1){
        cout << "not my type" <<endl;

    }
    else if(a=3){
        cout<<" my type";

    }
    else if(a=2){
        cout <<"not my type";
    }
    cout<< "1)child or 2) no child";
     int b;
    cin>>b;
    if(b=1){
        cout<<"not my type";

    }
    else if(b=2){
        cout<<"my type";
    }



}