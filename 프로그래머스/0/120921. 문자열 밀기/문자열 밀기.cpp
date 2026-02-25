#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    
        int nAsize = A.size();
        bool isTrue = true;
        int nRecycle = 0;
        int nResult{};

        while (isTrue && nRecycle < nAsize)
        {
            int nCount = 0;
            for (int i = 0; i < nAsize; i++)
            {
                if (A[i] == B[i])
                    nCount++;
            }

            if (nAsize  == nCount)
            {
                isTrue = false;
            }
            else
            {
                std::string Str = A.substr(nAsize - 1,nAsize);
                Str += A.substr(0, nAsize - 1);

                A = Str;
                nRecycle++;
            }
        }

        if (!isTrue && nRecycle == 0)
            nResult = 0;
        else if (!isTrue)
            nResult = nRecycle;
        else
            nResult = -1;
    
    return nResult;
}