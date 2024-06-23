#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);

    bool newword = true;

    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            newword = true;
        } else if (newword && str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-('a'-'A');
            newword = false;
        } else{
            newword = false;
        }

    }
    cout<<"The capital is: "<<str<<endl;
    return 0;
}
