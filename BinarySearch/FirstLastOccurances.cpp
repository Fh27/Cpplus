class Solution {
public:
    //last
    int last(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}
int first(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      end = mid - 1;
    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int firstOc=first(n,target,nums);
        int lastOc=last(n,target,nums);
        return {firstOc,lastOc};
    }
};
