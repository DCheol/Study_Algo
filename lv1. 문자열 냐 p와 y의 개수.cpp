#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int tmp=0;
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    for(int i=0; i<s.size(); i++){
        if(s[i]=='p'||s[i]=='P')
            tmp++;
        else if(s[i]=='y'||s[i]=='Y')
            tmp--;
    }
    cout << "Hello Cpp" << endl;
    if(tmp==0)
        answer=true;
    else answer=false;
    return answer;
}
