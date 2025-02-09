/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (arr) {
    const n = arr.length;
    let goal = 0;
    if (n <= 1) return true;

    for (i = 0; i < n; i++) {
        if (arr[i] + i >= goal) {
            if (i > goal) {
                return false;
            }
            goal = i + arr[i];
        }
    }

    if (goal >= n - 1) {
        return true;
    } else {
        return false;
    }


};
