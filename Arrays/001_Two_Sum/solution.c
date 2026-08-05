int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // here nums is the array of the elements that I need to find the index
    //target is the value , the two number should add up to.
    // returnSize is size of the return value should be. 
    //numsSize is the size of the array
    *returnSize=2;
    int *result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<=numsSize-1;j++){
            if(nums[i]+nums[j]==target){
                if(result!=NULL){
                result[0]=i;
                result[1]=j;
                return result;}
            }
        }
    }
    
    return NULL;
}
