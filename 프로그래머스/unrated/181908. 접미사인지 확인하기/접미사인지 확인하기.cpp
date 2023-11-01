#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    int A = my_string.size();
    int B = is_suffix.size();
    
    if (A < B)
        return 0;

    string suffix = my_string.substr(A - B, B);

    if (suffix == is_suffix)
        return 1;
    
    return 0;
}
