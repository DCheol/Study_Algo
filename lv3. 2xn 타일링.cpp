#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int f2=1,f1=0;
    for(int i=2; i<=n+1; i++){
        if(i%2==0){
            f1+=f2;
            f1%=1000000007;
        }
        else{
            f2+=f1;
            f2%=1000000007;
        }
    }
    return (n+1)%2==0? f1:f2;
}
