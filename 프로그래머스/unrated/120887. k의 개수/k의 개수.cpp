#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
  
    for (int n = i; n <= j; n++) {
         
        string a = to_string(n);
        
        for(int b = 0; b < a.size(); b++){
            if(a.substr(b, 1) == to_string(k)) {
                answer++;
            }
        }
    }
        return answer;
}
