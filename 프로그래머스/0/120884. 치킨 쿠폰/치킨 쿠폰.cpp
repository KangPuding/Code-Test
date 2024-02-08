#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    
    int cp = 0, service = 0;
    
    while(chicken){
        service += chicken / 10;
        cp += chicken % 10; 
        chicken /= 10; 
        
        if(cp >= 10){
            service += cp / 10;
            cp += cp / 10;
            cp %= 10;
        }
    }
    return service;
}