/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int *arr=malloc(2*sizeof(int));
    *returnSize=2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                arr[0]=i;
                arr[1]=j;
            }
        }
    }
    return arr;
}