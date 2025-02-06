/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let mp = -1;
    let bdv = prices[0];
    let csum= 0;

    for(let i=0; i<prices.length;i++){
        if(prices[i] < bdv){
            //new bdv 
            bdv = prices[i];
        }
        if(prices[i]-bdv > 0){
            mp  = prices[i]-bdv; //means i made some profit
            csum += mp; 
            //sell as as i make bank 
            bdv = prices[i];

        }
    }
    return csum;
};
