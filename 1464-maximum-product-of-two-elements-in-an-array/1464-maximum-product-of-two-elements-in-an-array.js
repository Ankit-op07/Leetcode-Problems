/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
     let firstBiggest = null, secondBiggest = null;
        for(let i in nums)
            {
                if(firstBiggest<nums[i])
                    {
                        secondBiggest = firstBiggest;
                        firstBiggest = nums[i];
                    }
                else if (secondBiggest<nums[i])
                    {
                        secondBiggest = nums[i]
                    }
            }            
    return(firstBiggest-1)*(secondBiggest-1)
};