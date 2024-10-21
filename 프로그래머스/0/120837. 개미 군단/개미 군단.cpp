#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    
   	int nAnt5{};
	int nAnt3{};
	int nAnt1{};
	int nAntCount{};
	int nRemainHp{};
    
    nAnt5 = 5;
    nAnt3 = 3;
    nAnt1 = 1;
    
    nAntCount += hp / nAnt5;
	nRemainHp = hp % nAnt5;
	nAntCount += nRemainHp / nAnt3;
	nAntCount += nRemainHp % nAnt3;
    
    return nAntCount;

}