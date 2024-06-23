#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);

    for(int i=0; i<str.length();i++){
        if(str[0]>='a' && str[0]<='z'){
            str[0]=str[0]-('a'-'A');
        }
    }
    cout<<"The output is: "<<str<<endl;
    return 0;
}
