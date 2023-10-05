#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = 0;
    int denom = 0;
    
    numer = (denom1 * numer2) + (denom2 * numer1); // numer:분자
    denom = denom1 * denom2; // denom:분모
    
    for(int i = 2; i <= min(denom, numer); i++){ // 최대공약수 구하기
        while(denom % i == 0 && numer % i == 0){
            denom = denom / i;
            numer = numer / i;            
        }
    }
        
   answer.push_back(numer);
   answer.push_back(denom);
    
    return answer;
}