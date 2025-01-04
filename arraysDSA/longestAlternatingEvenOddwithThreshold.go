package main

import "fmt"

func longestAlternatingSubarray(arr []int, threshold int) int {
    n := len(arr);
    l,r := 0,0;

    if n==1 && arr[0] %2 == 0 && threshold < arr[0] {
        return 0;
    }
 
    max_count:=0;
    for r < n {
        //agar arr[l] is even then start an inside loop 
        // traverse r++ and check if its odd and its alternating

        if arr[l]%2 == 0 && arr[l] <= threshold{
            var is_even bool = false; 
            r++;
            var current_count int = 1;
            for r < n {
                //first one has to be odd 
                if arr[r] > threshold { 
                    break;
                }
                if arr[r]%2==1 && is_even==false{
                    current_count++;
                    //now my next one has to be even
                    is_even = true;
                    r++;
                }else if arr[r]%2 == 0 && is_even==true {
                    current_count++;
                    is_even = false;
                    r++;
                }else{
                    //ye condition pe break hoga 
                    l = r ;
                    break;
                }
            }
           // current_count = r-l;

            if current_count >= max_count {
                max_count = current_count;
            }
        }else{

        // AGAR no action
        l++;
        r++;
        }

    }
    



    return max_count;
}

func main() {
    arr1 := []int{2, 3, 4, 5, 6, 7, 8}
    threshold1 := 6
    fmt.Println(longestAlternatingSubarray(arr1, threshold1)) // Output: 2

    arr2 := []int{1, 3, 5, 7}
    threshold2 := 10
    fmt.Println(longestAlternatingSubarray(arr2, threshold2)) // Output: 0

    arr3 := []int{2, 1, 4, 3, 6, 5}
    threshold3 := 6
    fmt.Println(longestAlternatingSubarray(arr3, threshold3)) // Output: 6
}
