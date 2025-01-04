func maximumDifference(nums []int) int {
	minElem := math.MaxInt32 // Equivalent to `1e9` in the C++ code
	diff := -1

	for _, num := range nums {
		if num <= minElem {
			minElem = num
		} else {
			if num-minElem > diff {
				diff = num - minElem
			}
		}
	}

	return diff
}
