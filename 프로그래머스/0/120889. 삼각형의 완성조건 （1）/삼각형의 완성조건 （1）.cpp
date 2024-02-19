#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    sort(sides.begin(), sides.end(), greater<int>());
    
    int a = sides[0], b = sides[1], c = sides[2];
    
    return (b + c == a || b + c < a) ? 2 : 1;
        
}