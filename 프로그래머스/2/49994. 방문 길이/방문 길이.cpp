#include <string>
#include <set>

using namespace std;

bool Move (char cMove, int &pX, int &pY)
{   
    
    int tempX = pX;
    int tempY = pY;
    
    if(cMove == 'U')
        tempY += 1;
    else if(cMove == 'D')
        tempY -= 1;
    else if(cMove == 'R')
        tempX += 1;
    else if(cMove == 'L')
        tempX -= 1;
    
    if (tempX < -5 || tempX > 5 || tempY < -5 || tempY > 5)
        return false;
        
    pX = tempX;
    pY = tempY;
    
    return true;
}
int solution(string dirs) {
    set<string> visited;
    int nCount = 0;
    int nX = 0;
    int nY = 0;
    
    for (char dir : dirs)
    {
        int nPrevX = nX;
        int nPrevY = nY;
        
        if(Move(dir, nX, nY))
        {
            string path1 = to_string(nPrevX) + "," + to_string(nPrevY) + "-" + to_string(nX) + "," + to_string(nY);
            string path2 = to_string(nX) + "," + to_string(nY) + "-" + to_string(nPrevX) + "," + to_string(nPrevY);

            
            if(visited.find(path1) == visited.end() && visited.find(path2) == visited.end())
            {
                visited.insert(path1);
                visited.insert(path2);
                nCount++;
            }   
        }
    }
    return nCount;
}