// Example :
// Input: vec = [2,4,5,7] , k = 3
// Output: 6

int missingK(vector < int > vec, int n, int k) {
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        int missing = vec[mid]-(mid+1);
        if(missing<k){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return k+high+1;
}
