#include <string>
#include <vector>
#include <cmath>

using namespace std;

double fac (int n){
    if(n > 1)
        return fac(n - 1) * n;
    else
        return 1;
}

int solution(int balls, int share) {

    double answer = fac(balls) / (fac(share) * fac(balls - share)) ;
    
    return round(answer);
}

