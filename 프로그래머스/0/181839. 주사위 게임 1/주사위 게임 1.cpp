#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {

    return (a % 2 != 0 && b % 2 != 0) ? pow(a,2) + pow(b,2) 
        : (a % 2 != 0 || b % 2 != 0) ? 2 * (a + b) : abs(a - b);
}