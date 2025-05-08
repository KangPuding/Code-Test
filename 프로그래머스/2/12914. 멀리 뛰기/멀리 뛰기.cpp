#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    vector<int> nFibonacci(n + 1);
    
    nFibonacci[0] = 1;
    nFibonacci[1] = 1;
    
    for(int i = 2; i <=n; i++)
    {
        nFibonacci[i] = (nFibonacci[i - 2] + nFibonacci[i - 1]) % 1234567;
    }
    
    return nFibonacci[n];
}