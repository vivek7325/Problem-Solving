int maxSumSubarray(vector<int> &nums, int k) {
  int maxSum = 0;
  int currentSum = 0;
  for (int i = 0; i < nums.size(); i++) {
    currentSum += nums[i];
    if (i >= k - 1) {
      maxSum = max(maxSum, currentSum);
      currentSum -= nums[i - (k - 1)];
    }
  }
  return maxSum;
}
