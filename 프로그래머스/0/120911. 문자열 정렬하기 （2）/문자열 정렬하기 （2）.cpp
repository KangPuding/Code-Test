#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string a;
    
    for(int i = 0; i < my_string.size(); i++){
        a += tolower(my_string[i]);
    }
    
    sort(a.begin(), a.end());
    
    return a;
}