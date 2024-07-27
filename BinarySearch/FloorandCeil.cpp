int findFloor(vector<int>&arr, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] <= x) {
			ans = arr[mid];
			//look for smaller index on the left
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}
int FindCeil(vector<int>&a,int n,int x){
	int l=0,high=n-1;
	int first=-1;
	while(l<=high){
		int m=(l+high)/2;
		if(a[m]>=x){
			first=a[m];
			high=m-1;
		}else{
			l=m+1;
		}
	}
	
	return first;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
		int floor=findFloor(a,n,x);
		int ceil= FindCeil(a,n,x);
		return {floor,ceil};
}
