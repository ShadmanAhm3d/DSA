/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(arr, val) {
    //remove the element from the array inplace

    let i=0;
    let j=0;
    while(i<arr.length && j < arr.length){
        
        if(arr[i]!=val && arr[j]!=val){
            i++;j++;
        }else if(arr[i]==val && arr[j]==val){
            j++;
        }else{
            
            [arr[j],arr[i]] = [arr[i],arr[j]];
            i++;
            j++;
        }
    }
    //find number of k encountered shit
    // let counter = 0;
    // for(let i=0;i<arr.length;i++){
    //     if(arr[i]!=val)counter++;
    // }
    const newArr = arr.filter((elem,i)=>{
        return elem!=val;
    })
    return newArr.length;
};
