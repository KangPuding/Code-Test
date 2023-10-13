#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long i = sqrt(n);
    
    while(i){
        if(i * i == n)
            return 1;
        else 
            return 2;
    }
}