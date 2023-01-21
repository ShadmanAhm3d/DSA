function Bsearch(arr, x) {
  let low = 0;
  let high = arr.length - 1;
  let mid;
  while (low <= high) {
     mid =  Math.floor((low + high) / 2);
    if (arr[mid] == x) 
    return mid;

     if (arr[mid] > x) 
     high = mid - 1;

    else
     low = mid + 1;
  }
  return -1;
}

 arr = new Array(2, 3, 4, 5, 5, 10, 12);
x = 4;
n = arr.length;

result = Bsearch(arr, x);
(result == -1)
  ? console.log("element not present " )
  : console.log("element present in index number " + result);


