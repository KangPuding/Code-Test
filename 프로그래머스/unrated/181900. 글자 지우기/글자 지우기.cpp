#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = my_string;

    sort(indices.begin(), indices.end(), greater<int>());

    for(int i : indices){
        answer.erase(answer.begin() + i);
    }

    return answer;
}
