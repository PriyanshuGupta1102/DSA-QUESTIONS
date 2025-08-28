class StockSpanner {
public:
    stack<pair<int, int>> s; // pair<price, span>

    StockSpanner() {
        // constructor initializes empty stack
    }

    int next(int price) {
        int span = 1;

        // merge with previous prices smaller or equal to current
        while (!s.empty() && s.top().first <= price) {
            span += s.top().second;
            s.pop();
        }

        s.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */