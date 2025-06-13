#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> Str;
        
    for(int num : numbers)
    {
        Str.push_back(to_string(num));
    }
    
    sort(Str.begin(), Str.end(), compare);
    
    if (Str[0] == "0")
        return "0";

    string result = "";
    for (string s : Str) {
        result += s;
    }

    return result;
}