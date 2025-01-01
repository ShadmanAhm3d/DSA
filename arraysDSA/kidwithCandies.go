
func kidsWithCandies(candies []int, ec int) []bool {
    // Initialize the result slice
    result := make([]bool, len(candies))
    n := len(candies)
    maximal := 0

    // Find the maximum value in the candies slice
    for i := 0; i < n; i++ {
        if candies[i] > maximal {
            maximal = candies[i]
        }
    }

    // Check if each kid can have the maximum number of candies
    for i := 0; i < n; i++ {
        if candies[i]+ec >= maximal {
            result = append(result, true)
        } else {
            result = append(result, false)
        }
    }

    return result
}
