#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    bool check = false;
    for (int i = 0; i < dic.size(); i++) {
        if (dic[i].size() == spell.size()) {
            check = true;
            for (int j = 0; j < spell.size(); j++) {
                if (dic[i].find(spell[j]) == string::npos) {
                    check = false;
                    break;
                }
            }
        }
        if (check == true) return 1;
    }
    return 2;
}