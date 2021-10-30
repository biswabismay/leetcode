int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	//assigning returnsize to 2 as we have to return 2 indices
    *returnSize=2;
	//dynamically allocating a return array and keeping its pointer in returnarr
    int* returnarr=(int*)malloc(2*sizeof(int));
	//looping through the array from index 0 to numsSize with increment of 1 in iLoop
    for(int iLoop=0;iLoop<numsSize-1;iLoop++){
		//taking hold of the value in iLoop and traversing through the loop ahead with iLoop2
        for(int iLoop2=iLoop+1;iLoop2<numsSize;iLoop2++){
			//checking if sum of value in iLoop and iLoop2 equal to target
            if((nums[iLoop]+nums[iLoop2])==target){
                //assigning iLoop and iLoop2 to the first and second indices of returnarr 
                returnarr[0]=iLoop;
                returnarr[1]=iLoop2;
                return returnarr;
            }
        }
    }
	//returning in case the loop fails
    return returnarr;
}