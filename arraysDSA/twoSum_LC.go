
// Function to solve Two Sum problem with a single loop
func twoSum(arr []int, target int) []int {
    // Sort the array and keep track of original indices
    indices := make([]int, len(arr))
    for i := range arr {
        indices[i] = i
    }
    sort.Ints(arr) // Sort the array

    // Use two-pointer technique to find the target sum
    left, right := 0, len(arr)-1
    for left < right {
        currentSum := arr[left] + arr[right]
        if currentSum == target {
            // Return original indices
            return []int{indices[left], indices[right]}
        } else if currentSum < target {
            left++
        } else {
            right--
        }
    }

    return nil // If no solution found
}
