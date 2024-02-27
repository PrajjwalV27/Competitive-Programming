// Problem statement
// You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.

int func(int mid, int n, int m){
  long long ans = 1;
  for(int i=1; i<=n; i++){
    ans = ans * mid;
    if(ans > m) return 2;
  }
  if(ans == m) return 1;
  else return 0;
}

int NthRoot(int n, int m) {
  int low = 1, high = m;
  while (low<=high){
    int mid = (low + high)/2;
    int midN = func(mid, n, m);
    if(midN == 1){
    return mid;
    }
    else if(midN == 0) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}
