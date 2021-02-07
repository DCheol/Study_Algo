#include<string>

using namespace std;

bool solution(string s)
{
    int n=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') n++;
        else if(s[i]==')') n--;

        if(n<0) return false;
    }
    if(n==0)
        return true;
    return false;
}
