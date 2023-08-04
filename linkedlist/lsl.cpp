
#include <iostream>
#include <vector>

std::vector<int> computePrefixFunction(const std::string& pattern) {
    int m = pattern.length();
    std::vector<int> prefix(m, 0);
    int k = 0;

    for (int i = 1; i < m; i++) {
        while (k > 0 && pattern[k] != pattern[i]) {
            k = prefix[k - 1];
        }

        if (pattern[k] == pattern[i]) {
            k++;
        }

        prefix[i] = k;
    }

    return prefix;
}

std::string findRepeatingUnit(const std::string& str) {
    int n = str.length();
    std::vector<int> prefix = computePrefixFunction(str);
    int repeatingLength = n - prefix[n - 1];

    if (n % repeatingLength == 0) {
        return str.substr(0, repeatingLength);
    }

    return "";
}

int main() {
    std::string sequence = "ABCDABCDABCDABCD";
    std::string repeatingUnit = findRepeatingUnit(sequence);

    if (repeatingUnit.empty()) {
        std::cout << "No repeating unit found." << std::endl;
    } else {
        std::cout << "Repeating Unit: " << repeatingUnit << std::endl;
    }

    return 0;
}
