#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    string s_r = to_string(a) + to_string(b);
    
    int i_r = stoi(s_r);
    int i = 2 * a * b;
    
    return (i_r == i || i_r > i) ? i_r : i; 

}