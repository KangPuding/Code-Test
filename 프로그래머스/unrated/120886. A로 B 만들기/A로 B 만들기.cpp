#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    
    sort(before.begin(), before.end(), greater<char>());
    sort(after.begin(), after.end(), greater<char>());
    
    if(before == after)
        return 1;
    else
        return 0;

}