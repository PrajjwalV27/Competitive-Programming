// Given a sorted array ‘arr’ of ‘n’ numbers such that every number occurred twice in the array except one, which appears only once.

int singleNonDuplicate(vector<int>& arr)
{
	int n = arr.size();
	int ans = 0;
	for(int i = 0; i<n; i++) {
		ans = ans^arr[i];
	}
	return ans;
}
