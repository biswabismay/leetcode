/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int* copy1;
    int* copy2;
    int size1,size2;
    int* arr=(int*)malloc(1000*sizeof(int));
    int index=0;
    if(nums1Size>nums2Size){
        //printf("case1");
        copy1=nums1;
        copy2=nums2;
        size1=nums1Size;
        size2=nums2Size;
    }
    else{
        //printf("case2");
        copy1=nums2;
        copy2=nums1;
        size1=nums2Size;
        size2=nums1Size;
    }
    for(int iLoop=0;iLoop<size2;iLoop++){
        //printf("outer \n");
        for(int iter=0;iter<size1;iter++){
            //printf("inner \n");
            if(copy1[iter]==copy2[iLoop]){
                arr[index]=copy1[iter];
                copy1[iter]=1001;
                index++;
                //printf("inner with if \n");
                break;
            }
        }
    }
    *returnSize=index;
    //printf("End");
    return arr;
}