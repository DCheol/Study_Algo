#include <string>
#include <vector>
//#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int temp = s.size();

    if(temp%2==1){
        //cout<<"1"<<endl;
        answer+=s[temp/2];
    }
    else if(temp%2==0){
        //cout<<"2"<<endl;
        answer+=s[temp/2-1];
        answer+=s[temp/2];
    }
    return answer;
}
