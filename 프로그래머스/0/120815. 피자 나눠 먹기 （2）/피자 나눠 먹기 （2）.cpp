#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    for(int i = 1; i <= 100; i++){
        if((n * i) % 6 == 0)
            return (n * i) / 6;
    }
}