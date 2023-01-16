#pragma once

void MergeSort(std::vector<int> &nums, int left, int right);
void Merge(std::vector<int> &nums, int left, int mid, int right);

void MergeSort(std::vector<int> &nums, int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        // split and sort left side
        MergeSort(nums, left, mid);
        // split and sort right side
        MergeSort(nums, mid + 1, right);
        // merge both side
        Merge(nums, left, mid, right);
    }
}

void Merge(std::vector<int> &nums, int left, int mid, int right){
    //  build temp array to avoid modifying the 
    int temp[right - left + 1];

    // pointers for left, right side and for temp array
    int i = left, j = mid + 1, k = 0;

    // while both subarray have values
    while(i <= mid && j <= right){
        if(nums[i] <= nums[j]) temp[k++] = nums[i++];
        else temp[k++] = nums[j++];
    }

    // Add the rest of values from left side
    while(i <= mid)
        temp[k++] = nums[i++];

    // Add the rest of values from right side
    while(j <= right)
        temp[k++] = nums[j++];

    // put sorted values into vector
    for(int i = left; i <= right; i++)
        nums[i] = temp[i - left];
}