#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string s_a = to_string(a);
    string s_b = to_string(b);
    
    string s_r = s_a + s_b;
    int i_r = stoi(s_r);
    int i = 2 * a * b;
    
    if(i_r == i)
        return i_r;
    else if (i_r > i)
        return i_r;
    else 
        return i;

}