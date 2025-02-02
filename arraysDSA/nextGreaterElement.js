/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function (n1, n2) {
    const answer = [];

    n1.forEach((num) => {
        let found = false;
        let inserted = false;
        for (let j = 0; j < n2.length; j++) {
            if (num == n2[j]) {
                found = true;
            }

            if (n2[j] > num && found == true) {
                answer.push(n2[j]);
                inserted = true;
                break;
            }
        }
        if (!inserted) {
            answer.push(-1);
        }
    });

    return answer;
};



