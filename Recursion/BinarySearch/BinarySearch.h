int BinarySearch(std::vector<int> nums, int target, int left, int right){
    // base case
    if(left > right) return -1;

    int mid = (left + right) / 2;

    if(nums[mid] == target) return mid;

    if(nums[mid] > target) return BinarySearch(nums, target, left, mid - 1);

    return BinarySearch(nums, target, mid + 1, right);
}