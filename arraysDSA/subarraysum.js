
const mx = (arr)=>{
 let maxSum = -1;
 let curSum = 0;
  

  for(let i=0;i<arr.length;i++){
    curSum+=arr[i];

    if(curSum > maxSum){
      maxSum = curSum;
    }
    if(curSum < 0){
      curSum = 0;
    }

  }

  return maxSum;

}

//const arr = [-2 ,1 ,-3 ,4 ,-1, 2, 1, -5, 4];
const arr = [3,-1,2,5,-6,3];

console.log(mx(arr));
