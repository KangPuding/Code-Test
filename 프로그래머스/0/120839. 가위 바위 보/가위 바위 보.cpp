#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
 
    string Str = "";
    
    for(int i = 0; i < rsp.size(); i++)
    {
        if(rsp[i] == '2')
           Str += '0';
         if(rsp[i] == '0')
           Str += '5';
         if(rsp[i] == '5')
           Str += '2';
    }
    
    return Str;
}