#include <bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    int count = 0;
    int i = 0;

    while (tickets[k] != 0) {
        if (tickets[i] == 0) {
            i++;
            if (i == tickets.size()) {
                i = 0;
            }
        } else {
            tickets[i] = tickets[i] - 1;
            count++;
            i++;
            if (i == tickets.size()) {
                i = 0;
            }
        }
    }
    return count;
}

int main() {
    vector<int> tickets = {5,1,1,1,1};
    int k = 0;

    cout << timeRequiredToBuy(tickets, k) << endl;

    return 0;
}
