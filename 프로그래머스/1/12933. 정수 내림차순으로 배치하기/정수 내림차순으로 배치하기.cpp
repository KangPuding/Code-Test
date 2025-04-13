#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string Str = to_string(n);
    sort(Str.begin(), Str.end(), greater<char>());
    answer = stoll(Str);
    return answer;
}