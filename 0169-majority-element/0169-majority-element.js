/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(num) {
    
    var major=num[0], count = 1;
        for(var i=1; i<num.length;i++){
            if(count==0){
                count++;
                major=num[i];
            }else if(major==num[i]){
                count++;
            }else count--;
            
        }
        return major;
    
};