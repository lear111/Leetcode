#include <stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target)
{
    int i,j;
    int* result = NULL;
    for (i = 0; i < numsSize-1; i++)
    {
        int num = target - nums[i];
        int j = 0;
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[j] == num)
            {
                result = (int*)malloc(sizeof(int) * 3);
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main()
{
    int nums[5] = { 4,1,2,3,4 };
    int numsSize = 5;
    int target = 4;
    int* p = NULL;
    p = twoSum(nums, numsSize, target);
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        printf("%d\n", *p+1);
        p++;
    }
    return 0;
}