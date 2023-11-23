#include <iostream>
#include <string>

int main()
{

    std::string s1 = "penguin";
    std::string s2, s3;

    std::cout << "string 객체를 string 객체에 대입할 수 있다. : s2 = s1" << std::endl;
    s2 = s1;
    std::cout << "s1 : " << s1 << ", s2 : " << s2 << std::endl;
    std::cout << "string 객체에 C 스타일 문자열을 대입할 수 있다" << std::endl;
    std::cout << "s2 = \"buzzard\"" << std::endl;
    s2 = "buzzard";
    std::cout << "string 객체들을 결합할 수 있다 : s3 = s1 + s2" << std::endl;
    s3 = s1 + s2;
    std::cout << "s3 : " << s3 << std::endl;
    std::cout << "string 객체를 추가할 수 있다." << std::endl;
    s1 = s1 + s2;
    std::cout << "s1 += s2 --> s1 = " << s1 << std::endl;
    s2 += " for a day";
    std::cout << "s2 +=\" for a day\" --> s2 = " << s2 << std::endl;

    return 0;
    
}

