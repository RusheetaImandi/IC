/*Best time to sell a commodity: Given an array of positive integers that represent the price of a commodity on a given day, return two integers which represent the best day to buy and later, sell the commodity.*/

#include <stdio.h>
void findBestDays(int prices[], int size, int *buyDay, int *sellDay) {
    if (size < 2) {
        *buyDay = -1;
        *sellDay = -1;
        return; 
    }
    int minPriceDay = 0; 
    int maxProfit = 0; 
    *buyDay = 0;    
    *sellDay = 1;     
    for (int i = 1; i < size; i++) {
        int profit = prices[i] - prices[minPriceDay];
        if (profit > maxProfit) {
            maxProfit = profit;
            *buyDay = minPriceDay;
            *sellDay = i;
        }
        if (prices[i] < prices[minPriceDay]) {
            minPriceDay = i;
        }
    }
}
int main() {
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    int size = sizeof(prices) / sizeof(prices[0]);
    int buyDay, sellDay;
    findBestDays(prices, size, &buyDay, &sellDay);
    if (buyDay != -1 && sellDay != -1) {
        printf("Best day to buy: Day %d (Price: %d)\n", buyDay + 1, prices[buyDay]);
        printf("Best day to sell: Day %d (Price: %d)\n", sellDay + 1, prices[sellDay]);
    } else {
        printf("Not enough data to determine buy and sell days.\n");
    }

    return 0;
}
