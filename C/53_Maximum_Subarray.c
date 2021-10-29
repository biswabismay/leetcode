int maxSubArray(int* nums, int numsSize){
    int max_now=nums[0];
    int cur_max=nums[0];
    for(int iLoop=1;iLoop<numsSize;iLoop++){
        if(nums[iLoop]>cur_max+nums[iLoop]){
            cur_max=nums[iLoop];
        }
        else{
            cur_max=cur_max+nums[iLoop];
        }
        
        if(cur_max>max_now){
            max_now=cur_max;
        }
    }
    return max_now;
}