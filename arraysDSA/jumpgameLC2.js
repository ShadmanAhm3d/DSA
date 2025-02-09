/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function (nums) {

    let destination = nums.length - 1;
    let l = 0;
    let r = 0;

    let jumps = 0;

    if(nums.length == 1)return 0;

    for (let i = 0; i < nums.length; i++) {
        r = Math.max(r, nums[i] + i);

        if (i == l) {
            l = r;
            jumps++;


            if (r >= destination) {
                return jumps;
            }
        }

    }
    return jumps;
};
