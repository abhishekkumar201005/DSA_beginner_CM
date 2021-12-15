#include <iostream>
#include <stack>
using namespace std;

void stockSpan(int prices[], int n, int span[])
{
    stack<int> s;
    s.push(0);
    span[0] = 1;

    // loop for rest days
    for (int i = 1; i <= n - 1; i++)
    {
        int currPrice = prices[i];
        while (!s.empty() and prices[s.top()] <= currPrice)
        {
            s.pop();
        }
        if (!s.empty())
        {
            int prevhigh = s.top();
            span[i] = i - prevhigh;
        }
        else
        {
            span[i] = i + 1;
        }
        // push
        s.push(i);
    }
}
int main()
{
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(int);
    int span[10000] = {0};
    stockSpan(prices, n, span);
    for (int i = 0; i < n; i++)
    {
        cout << span[i] << " ";
    }
}