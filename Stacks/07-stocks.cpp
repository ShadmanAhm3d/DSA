
#include <iostream>
#include <stack>
#include <vector>

class StockSpanner {
public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;

        while (!prices.empty() && price >= prices.top().first) {
            span += prices.top().second;
            prices.pop();
        }

        prices.push({price, span});
        return span;
    }

private:
    std::stack<std::pair<int, int>> prices; // Pair of price and its corresponding span
};

int main() {
    StockSpanner stockSpanner;

    std::vector<int> inputPrices = {100, 80, 60, 70, 60, 75, 85};
    for (int price : inputPrices) {
        int span = stockSpanner.next(price);
        std::cout << "Span for " << price << ": " << span << std::endl;
    }

    return 0;
}
