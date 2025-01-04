func majorityElement(arr []int) int {
    someMap := make(map[int]int) // Declare and initialize the map

    // Count occurrences of each element
    for _, elem := range arr { // Use `_` for unused loop variables
        someMap[elem]++
    }

    maxv := 0
    majorElem := 0

    // Find the element with the maximum count
    for key, value := range someMap { // Corrected syntax for range
        if value > maxv {
            maxv = value
            majorElem = key
        }
    }

    return majorElem
}
