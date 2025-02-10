/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {

    let n = nums.length;
    let precomputed = new Array(n).fill(0);
    //calculate precomputed from behind
    let pref = 1;
    for(let i=precomputed.length-1;i>=0;i--){
        pref = pref*nums[i];
        precomputed[i] = pref;
    }

    console.log(precomputed)
    const answer = [];
    let csum=1;
    for(let i=0; i<n-1;i++){
        let elem = csum * precomputed[i+1]; 
        answer.push(elem);
        csum *= nums[i];
    }
    //last element
    n = precomputed.length;
    console.log(answer)
    answer.push(csum)
   
    return answer;
};
