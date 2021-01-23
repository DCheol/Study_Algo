using namespace std;

long long GCD(int a, int b){
    int temp;
    while(1){
        if(a==0||b==0)
            return (a!=0)?a:b;
        else if(a>b)
            a=a-(a/b)*b;
        else
            b = b-(b/a)*a;
    }
}

long long solution(int w,int h) {
    long long answer;
    long long gcd = GCD(w,h);
    long long W=w, H=h;
    long long tw = w/gcd;
    long long th = h/gcd;
    /*answer = w*h - (tw+th-1)*gcd; 일 경우 int와  longlong이 서로 계산되지 않는다*/
    answer = W*H - (tw+th-1)*gcd;

    return answer;
}
