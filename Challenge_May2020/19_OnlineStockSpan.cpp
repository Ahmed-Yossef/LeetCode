class StockSpanner {
public:
    stack<pair<int, int>> stock;
    
    StockSpanner() {
    }
    
    int next(int price) {
        int counter = 1;
        
        while(!stock.empty() && price >= stock.top().first) {
            counter += stock.top().second;
            stock.pop();
        }
        
        stock.push({price, counter});
        return counter;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
