#include <string>
#include <vector>
//#include <iostream>
using namespace std;
int pow(int n,int i){
    int temp=1;
    for(int k=0;k<i;k++){
        temp*=n;
    }
    return temp;
}

int solution(int n) {
    int answer = 0;
    string temp;
    char ctmp;
    for(int i=0;n!=0;n/=3, i++){
        ctmp = n%3 + '0';
        temp += ctmp;
        //cout<<answer<<" "<<n%3<<endl;
        answer=answer*3 + n%3;
    }

   // cout<<"temp: "<<temp<<endl;
    return answer;
}
