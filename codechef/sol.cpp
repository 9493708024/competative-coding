#include <cstdio>
#include <vector>
using namespace std;

bool** dp;

void display(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

void output(const vector<int>& a, int i, int sum, vector<int>& p) {
    if (i == 0 && sum != 0 && dp[0][sum]) {
        p.push_back(a[i]);
        display(p);
        return;
    }
    if (i == 0 && sum == 0) {
        display(p);
        return;
    }
    if (dp[i - 1][sum]) {
        vector<int> b = p;
        output(a, i - 1, sum, b);
    }
    if (sum >= a[i] && dp[i - 1][sum - a[i]]) {
        p.push_back(a[i]);
        output(a, i - 1, sum - a[i], p);
    }
}

void find(const vector<int>& a, int sum) {
    if (a.size() == 0 || sum < 0) return;
    dp = new bool*[a.size()];
    for (int i = 0; i < a.size(); ++i) {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
    for (int i = 1; i < sum + 1; ++i)
        dp[0][i] = (a[0] == i) ? true : false;
    for (int i = 1; i < a.size(); ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (a[i] <= j) ? dp[i - 1][j] || dp[i - 1][j - a[i]] : dp[i - 1][j];
    if (!dp[a.size() - 1][sum]) {
        printf("There are no subsets with sum %d\n", sum);
        return;
    }
    vector<int> p;
    output(a, a.size() - 1, sum, p);
}

int main() {
    vector<int> a;
    for(int i=0;i<=5;i++){
        a.push_back(i);
    }
        find(a, 10);
    return 0;
}