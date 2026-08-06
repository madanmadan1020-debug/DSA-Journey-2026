int removeDuplicates(int* nums, int numsSize) {
    // here the nums is the array , that is sorted and should remove the duplicate
    //numsSize is the size of the nums
    int i=0;
    int j=1;
    int result;
    if(numsSize==0){
        return 0;
    }
    while(j < numsSize){
        if(nums[i]==nums[j]){
            (j)++;
        }else{
            (i)++;
            nums[i]=nums[j];
            (j)++;
        }
    }result = ++i;
    
    return result;
}
