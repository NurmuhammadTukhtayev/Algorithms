#pragma once

void MergeSort(std::vector<int> &nums, int left, int right);
void Merge(std::vector<int> &nums, int left, int mid, int right);

void MergeSort(std::vector<int> &nums, int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        MergeSort(nums, left, mid);
        MergeSort(nums, mid + 1, right);
        Merge(nums, left, mid, right);
    }
}

void Merge(std::vector<int> &nums, int left, int mid, int right){
    int temp[right - left + 1];

    int i = left, j = mid + 1, k = 0;

    while(i <= mid && j <= right){
        if(nums[i] <= nums[j]) temp[k++] = nums[i++];
        else temp[k++] = nums[j++];
    }

    while(i <= mid)
        temp[k++] = nums[i++];

    while(j <= right)
        temp[k++] = nums[j++];

    for(int i = left; i <= right; i++)
        nums[i] = temp[i - left];
}