#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<pair<int, int>> p;
    
    for(int i = 0; i < array.size(); i++){
        p.push_back(make_pair(abs(array[i] - n), array[i]));
    }
    
    sort(p.begin(), p.end());
    
    answer = p[0].second;
    
    return answer;
}