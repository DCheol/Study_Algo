#include <string>
#include <vector>
#include<iostream>
using namespace std;

int Zip(string &s, int n) {
	string temp = "";
	int k = 0;
	int tnum = 1;
	char c;
	for (int i = n; i + n<=s.size(); i += n, k+=n) {
		if (s.compare(k, n, s, i, n) == 0) {//비교한게 같다면
			tnum++;

		}
		else { //다르다면
			if (tnum != 1)
				temp += to_string(tnum);
			tnum = 1;
			temp += s.substr(k, n);
		}
	}
	if (tnum != 1)
		temp += to_string(tnum);
	temp += s.substr(k, n);

	if (k + n < s.size()) {
		temp += s.substr(k+n, s.size()-k-n+1);
	}

/*
	cout << temp << endl;
	cout << s << endl;
	cout << "s.size:"<<s.size() << endl;
	cout << "k:" << k << endl;
    */
	return temp.size();
}

int solution(string s) {
    int answer = s.size();
    for(int i=1; i<=s.size()/2; i++){
        if(answer>Zip(s, i)){
            answer = Zip(s, i);
        }
    }

    return answer;
}
