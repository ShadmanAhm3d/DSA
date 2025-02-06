/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {

    let buyingDayValue = prices[0];
    let mp = -1;
    
    for(let i=0 ; i<prices.length;i++){
         if(prices[i] <= buyingDayValue){
            buyingDayValue = prices[i];
        }
        if(prices[i] - buyingDayValue > mp){
            mp = prices[i] - buyingDayValue;
        }
       
    }

    return mp;
};
