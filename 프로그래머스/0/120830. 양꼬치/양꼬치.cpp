#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int food = n * 12000;
    int beverage = k * 2000;
    
    
    if(n >= 10){
        beverage -= (n / 10) * 2000;
    }
    
    return food + beverage;
}