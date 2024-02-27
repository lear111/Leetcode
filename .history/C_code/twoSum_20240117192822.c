
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    for(i=0;i<numsSize;i++)
    {
        int num = target - nums[i];
        int j = 0;
        for(j=1;j<numsSize-i;j++)
        {
            if(nums[i+j]==num)
            {
                int arr[2] = {i,i+j};
                return arr;
            }
        }
    }   
}