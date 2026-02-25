#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
     std::vector<int> v{};

    for (int i = l; i <= r; i++) {
        std::string Str = std::to_string(i);
        bool isTrue = true;

        for (int j = 0; j < Str.length(); j++) {
            if (Str[j] != '0' && Str[j] != '5') {
                isTrue = false;
            }
        }

        if (isTrue)
            v.push_back(i);
    }
    
    if(v.empty())
        v.push_back(-1);
    
    return v;
}