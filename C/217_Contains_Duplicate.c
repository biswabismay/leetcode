bool containsDuplicate(int* nums, int numsSize){
	//traversing the array once with index value iLoop from 0 to numsSize
    for(int iLoop=0;iLoop<numsSize;iLoop++){
		//getting hold of each value in iLoop and traversing further till numsSize in iLoop2
        for(int iLoop2=iLoop+1;iLoop2<numsSize;iLoop2++){
			//checking if value of iLoop and iLoop2 are same
            if(nums[iLoop]==nums[iLoop2]){
                //if same returning true
                return true;
            }
        }
        
    }
    //if no value turns out to be true, returning false
    return false;
    
}