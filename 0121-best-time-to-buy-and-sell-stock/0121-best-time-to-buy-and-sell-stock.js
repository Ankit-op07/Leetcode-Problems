/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    
    var tillMin=Number. MAX_VALUE ;
        var ans =0;
        
        for(var i=0;i<prices.length;i++){
            ans = Math.max(prices[i]-tillMin,ans);
            tillMin=Math.min(prices[i],tillMin);
        }
        
        return ans === Number. MAX_VALUE ? 0 : ans;
    
};