#include <iostream>								//선행처리기

//using namespace std;								//전역변수로 쓰는 것은 선호하지 않는다.
int main(int argc, const char* argv[])				//int 반환형, argue : 논쟁하다, 던져주다.
{
	//using namespace std;							// 이거 안쓸 시 std::cout 으로 써야함
	//cout << "C++세계로 오세요";					//std::cout std안에 있는  namespace를 쓰겠다고 명시
	//cout << endl;									//std::cout으로 쓰는 것을 선호
	//cout << "후회없다";
	//cout << endl;
	//cin.get();									// 화면상 닫히는 것을 방지, 글자를 입력받기 위해서 블락킹

	
	printf("%d \r\n", argc);
	printf("%s \r\n", argv[0]);
	printf("%s \r\n", argv[1]);
	printf("%s \r\n", argv[2]);

	std::cout << argc << std::endl;
	std::cout << argv[0] << std::endl;
	std::cout << argv[1] << std::endl;
	std::cout << argv[2] << std::endl;


	return 0;
}
//main();  메인함수 호출은 os가 해줌 , return 0; 으로 0 을 리턴 받으면 끝남
//								     , return 1; 0이외의 값을 리턴 받으면 오류(문제)가 있다고 인식