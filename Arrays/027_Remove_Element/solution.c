int removeElement(int* nums, int numsSize, int val) {
    // here the nums is the array pointer , for which we need to remove the elements;
    //numsSize is the size of the array pointed by the nums
    // the val is the value of element that to be removed from the array;
    int i=0;
    int j=numsSize-1;
    if(numsSize==0){
        return 0;
    }
    while(i<numsSize && j >= i){
        if(nums[i]==val && nums[j]!=val){
             nums[i]=nums[j];
             i++;
             j--;
        }else if(nums[i]==val && nums[j]==val){
            j--;
        }else{
            i++;
        }
    }return i;
}
