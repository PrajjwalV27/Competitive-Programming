#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    int highest = 0;
    int second_largest = 0;
    cout<<"Enter the Size of Array : "<<endl;
    cin>>n;
    vector<int> arr(n,0);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    highest = arr[n-1];
    for(int i = n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            second_largest = arr[i-1];
            break;
        }
    }
    cout<<"\n"<<second_largest<<endl;
}
