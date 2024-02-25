#include <string>

using namespace std;

string solution(string n_str) {
    int i = 0;
    while (i < n_str.size() && n_str[i] == '0') {
        n_str.erase(n_str.begin() + i);
    }
    return n_str;
}
