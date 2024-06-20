#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longestOne(string str, int k){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for(int end=0; end<str.length(); end++){
        if(str[end]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[start]=='0') zero_count--;
            start++;
        }

        max_length = max(max_length, end-start+1);
    }
    return max_length;
}

int main(){
    string str;
    cout<<"Enter the binary string: ";
    cin>>str;

    int k;
    cout<<"Enter the max flips: ";
    cin>>k;

    cout<<longestOne(str, k)<<endl;
    return 0;
}

// Output:
// Enter the binary string: 0001101011
// Enter the max flips: 2
// 7
