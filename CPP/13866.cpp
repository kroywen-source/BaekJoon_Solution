/*
* 제출 번호: 33362599
* 아이디: adviate
* 문제: 13866
* 결과: 맞았습니다!!
* 메모리: 2020KB
* 시간: 0ms
* 언어: C++17
* 코드 길이: 1158B
* 제출한 시간: 2021.09.14 23:57:05
*/

/*
* 4명의 친구가 탁구를 하고 있다. 각각은 정수형으로 표현된 스킬 레벨을 가지고 있고, 숫자가 높을수록 더 좋은 플레이어다.

* 4명의 친구는 각각 두 명씩 구성된 두 팀을 구성하려고 한다. 
  게임이 더 흥미롭게 하기 위해서 팀의 스킬 레벨을 최대한 가깝게 유지하기를 원한다. 
  팀의 스킬 레벨은 팀원의 스킬 레벨의 합계이다.

* 그들은 탁구 선수로는 탁월하지만, 수학이나 컴퓨터와 같은 다른 것들에 능숙하지 않다. 팀의 스킬 레벨이 가능한 작은 차이를 갖도록 도와주자.

* 입력은 네 개의 정수 A, B, C 및 D가 포함된 한 줄로 구성되며 4명의 스킬 레벨이 주어진다. 
  (0 ≤ A ≤ B ≤ C ≤ D ≤ 104)

* 두 팀의 스킬 레벨 차이의 최솟값을 출력한다.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int ary[4];
	cin >> ary[0] >> ary[1] >> ary[2] >> ary[3];
	cout << abs(ary[3] + ary[0] - ary[2] - ary[1]) << endl;
	// 4개의 정수 중에서, 마지막과 첫번째가 가장 큰수와 작은 수가 들어온다. 첫번째와 마지막의 합 - 나머지의 합이 결과가 되어야 하지만
	// 절대값을 붙이지 않아 계속 틀렸다.
	return 0;
}
