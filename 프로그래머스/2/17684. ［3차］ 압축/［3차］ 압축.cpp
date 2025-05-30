#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string msg) {
    map<string, int> dictonary;
    vector<int> Result;
    int nNum = 1;
    
    // 사전 초기화 
    for (char C = 'A'; C <= 'Z'; C++)	
    {
        string Str = ""; 
        Str += C;		
        dictonary[Str] = nNum++;	
    }
    
    string Cur= "";
    
    // Cur라는 문자열에 계속 중첩
    for(int i = 0; i < msg.size(); i++)
    {
        Cur += msg[i];
        
        // 사전에 존재하지않은 단어일 경우
        if(dictonary[Cur] == 0)
        {
            dictonary[Cur] = nNum++; // 맵의 저장하고 1 증가 
            Cur = Cur.substr(0, Cur.size() - 1); // 앞에 문자 자르기
            Result.push_back(dictonary[Cur]); // 결과값에 해당하는 색인 번호 저장
            Cur = ""; // 초기화
            i--; // 뒤로 한번 돌림 -> 이부분이 있어서 앞에를 삭제해도 문제가 없음
        }
    }
    Result.push_back(dictonary[Cur]);
    
    return Result;
}