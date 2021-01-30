### Study_Algo
* [단체사진 찍기](https://programmers.co.kr/learn/courses/30/lessons/1835)(21.01.30)
1. 전역변수 초기화해야한단다.
2. & 혹은 전역변수 등을 이용해서 참조에 걸리는 시간을 줄이자
_________________
* [스킬트리](https://programmers.co.kr/learn/courses/30/lessons/49993)(21.01.30)
_________________
* [서울에서 김서방 찾기](https://programmers.co.kr/learn/courses/30/lessons/12919)(21.01.25)
_________________
* [124 나라의 숫자](https://programmers.co.kr/learn/courses/30/lessons/12899)(21.01.24)
_________________
* [프린터](https://programmers.co.kr/learn/courses/30/lessons/42587#)(21.01.23)
_________________
* [멀쩡한 사각형](https://programmers.co.kr/learn/courses/30/lessons/62048#)(21.01.22)
1. int와 long타입을 계산할경우, 표현방법에 차이가 있으니 overflow를 조심해야한다.
_________________
* [조이스틱](https://programmers.co.kr/learn/courses/30/lessons/42860#)(21.01.18)
1. 문제 오류가 있다. greed 알고리즘은 항상 최선을 찾는게 아니다.("BBBBAAAAAB" -> 10)
2. 해결방법으로 DFS+greed로 갈림길의 상황을 모두 체크해볼것(by alswo)
_________________
* [문자열 냐 p와 y의 개수](https://programmers.co.kr/learn/courses/30/lessons/12916)(21.01.17)
_________________
* [3진법 뒤집기](https://programmers.co.kr/learn/courses/30/lessons/68935)(21.01.16)

1. 미리할걸.. 눈이 아프다
_________________
* [괄호 변환](https://programmers.co.kr/learn/courses/30/lessons/60058)(21.01.13)

1. 재귀함수가 나타날 타이밍에서 헷갈려 힘들었다. (분할 + 정복)
_________________
* [소수 찾기](https://programmers.co.kr/learn/courses/30/lessons/42839)(21.01.10)

1. stoi(string s) 이용할때 s가 null일때 coredump가 일어났음
_________________
* [위장](https://programmers.co.kr/learn/courses/30/lessons/42578)(21.01.09)

1. (a+1)(b+1)(c+1)...-1
2. map처럼 다른 컨테이너 사용법 익히기
_________________
* [다리를 지나는 트럭](https://programmers.co.kr/learn/courses/30/lessons/42583)(21.01.09)

1. deque를 많이 쓰는 풀이가 보였다. 복잡하진 않고 노가다로 새로 deque만들어서 하나씩 받는듯
2. 1초마다 생각해줬지만, 효율적이게하려면 다리에 오르는 자동차가 없을 경우 time에 받은것 만큼 건너 뛰어도 좋을 듯 하다.
_____________________
* [체육복](https://programmers.co.kr/learn/courses/30/lessons/42862#)(21.01.08)

입력부분에서 잘 안되던 코드
```c++
int answer = n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i]=1;
        if(!lost.empty() && lost.front()==i+1){
            arr[i]--;
            lost.erase(lost.begin());
        }
        if(!reserve.empty() && reserve.front()==i+1){
            arr[i]++;
            reserve.erase(reserve.begin());
        }
    }
   ```
_________________
* [두 개 뽑아서 더하기](https://programmers.co.kr/learn/courses/30/lessons/68644)(21.01.07)
> 처음 git 써보는데 마크다운이 되게 신기하다. 잘 꾸며진 블로그가 이런걸 이용하나 보네
