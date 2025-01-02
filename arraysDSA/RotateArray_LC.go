func reverse(arr []int, start, end int) {
    // Loop until start is less than end
    for start <= end {
        // Swap the elements at start and end
        temp := arr[start]
        arr[start] = arr[end]
        arr[end] = temp

        // Move start forward and end backward
        start++
        end--
    }
}


func rotate(arr []int, k int)  {
    size := len(arr);
     if k == 0 {
        return;
    }
   

    k = k%size;
   

  //  var l int = 0;
  //  var r int = size-1;
  //  var i int =0;
    reverse(arr, 0, size-1)

    //now just reverse two portions
    reverse(arr,0,k-1);
    reverse(arr,k,size-1);

}
