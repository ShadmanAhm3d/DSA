/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */


function reverse(arr,sp,end){
    let l =sp;
    let r= end;
    while(l < r){
       [arr[l],arr[r]] = [arr[r],arr[l]];
        

        l++;r--;
    }

    //return arr;
  console.log("herer")

}
var rotate = function(arr, k) {
    let n = arr.length;
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

  return arr;

};

const arr = [1,2,3,4,5,6,7];

const answer = rotate(arr);
console.log(answer);


