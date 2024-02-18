#include <iostream>

using namespace std;

enum SelectType
{
	ADD = 1,
	DELETE,
	SEARCH,
	VIEW
};

struct tStudent
{
	char name[20];
	int age;
	char sex[5];
	int korScore;
	int mathScore;
	int engScore;
};

tStudent studentList[10];

void AddStudent()
{
	tStudent student;
	cout << "이름을 입력해주세요." << endl;
	cin >> student.name;
	cout << "나이를 입력해주세요." << endl;
	cin >> student.age;
	cout << "성별을 입력해주세요." << endl;
	cin >> student.sex;
	cout << "국어 점수를 입력해주세요." << endl;
	cin >> student.korScore;
	cout << "영어 점수를 입력해주세요." << endl;
	cin >> student.engScore;
	cout << "수학 점수를 입력해주세요." << endl;
	cin >> student.mathScore;

	studentList[0] = student;
}

int b = 0; // 전역 변수 - 데이터 영역

int main()
{
	while (true)
	{
		int select = 0; // 4byte
		cout << "1. 학생 추가 2. 학생 삭제 3. 학생 검색 4. 전체 출력" << endl;
		cin >> select;
		
		if (cin.fail()) // cin 입력 실패
		{
			cin.clear(); // cin 입력 실패 내용을 제거
			// cin에 엔터(\n)의 입력이 남은 상태라서 제거 / 안하면 계속 엔터눌림
			cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); 
		}

		switch (select)
		{
		case ADD:
			AddStudent();
			break;
		case DELETE:
			break;
		case SEARCH:
			break;
		case VIEW:

			break;
		default:
			break;
		}
	}

	return 0;
}

/* 0217 숙제
1. 학생 추가 기능에서 인덱스를 올려서 빈곳에 저장되게끔 변경
2. 학생이 배열에 꽉차면 더이상 저장하지 못하게 막기
3. 전체 출력 기능 구현 - 비어있는 학생은 출력하지 않기
4. 검색 기능 구현 - 학생 이름을 입력하면 해당 학생의 정보만 출력
5. 삭제 기능 구현 - 학생 이름을 입력하면 해당 학생 제거

6. 복습~!!!
*/

/*
하드디스크 / SSD X
램 O
메모리 영역 - 저장하는 곳에 대한 영역
4개영역
1. 코드 영역
 - 실제 코드가 저장이 되는 영역

2. 데이터 영역
 - 전역 변수 
  -- 중괄호 바깥에서 선언한 변수
  -- 프로그램이 처음 시작될 때 생성
  -- 프로그램이 종료되면 삭제

3. 힙 영역
 - 동적할당한 변수가 저장되는 영역
  -- 사용자가 원할때 생성 new
  -- 사용자가 원할때 해제 delete

4. 스택 영역
 - 지역 변수 
  -- 중괄호 안에 선언한 변수
  -- 중괄호 안으로 들어가는 순간 생성
  -- 중괄호 바깥으로 나가는 순간 삭제
*/







/*
학생 관리 프로그램
1. 학생 추가
2. 학생 삭제
3. 학생 검색
4. 전체 출력

 이름  / 나이 / 성별 / 국어 / 영어 / 수학 / 총점 / 평균
강시완    16     남     95     98    100    293    97.6

*/