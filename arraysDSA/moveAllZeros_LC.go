func swap(arr[]int,l,r int ){
    temp:=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}

func moveZeroes(arr []int)  {
    var n int = len(arr);

    if n ==1 {return};

    var  zero_idx int = 0;

    //find first zero 
    for i:=0;i<n;i++ {
        if arr[i]==0 {
            zero_idx  =i;
            break;
        }
    }

    //start traversing 

    for i:=zero_idx;i<n;i++ { 
        if arr[i]!=0 {
            swap(arr,i, zero_idx);
            zero_idx = zero_idx+1;
        }
    }
    
}
