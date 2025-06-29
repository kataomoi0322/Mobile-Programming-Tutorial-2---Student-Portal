#include <iostream>
#include <string>

/*int main(){
    std::string str1, str2, str3,s1,s2,s3;

    str1 ="sunny ";
    str2 = str1 + " day";
   
    s1 = "hallo ";
    s2 = "there";
    s3 = s1 +" "+s2;

    std::cout << "first string "<<str1 << std::endl;
    std::cout << "second string "<< str2 << std::endl;

    std::cout << "first string "<<s1 << std::endl;
    std::cout << "second string "<< s3<< std::endl;

    s1 = s1 + "mickey";
    std::cout << "first string "<<s1 << std::endl;
    s1[6] = " ";
    std::cout << "first string "<<s1 << std::endl;
    return 0;
    
}*/

/*int main (){
    std::string s1,s2,s4,s5,s6;

    s1;
    s2 = "New York";
    std::string s3(60, '*');
    s4 =s3;
    s5 ="n";
    s6 ="78";

    std::string firstName, name, str;
    firstName ="Elizabeth";
    name = firstName +" Jones";
    str ="It is sunny.";

    std::cout << firstName.length() << std::endl;
    std::cout << name.length() << std::endl;
    std::cout << str.length() << std::endl;

    std::string str1 = "hallo there";
    std::string str2 = "there";
    std::string str3 = "abcdefghijklmnopqrstuvwxyz";
    std::string str4 = "uvw";

    std::cout<< str1.find(str2)<<std::endl;
    std::cout<< str1.find("the")<<std::endl;
    std::cout<< str3.find("a")<<std::endl;
    std::cout<< str3.find("xyz")<<std::endl;
    std::cout<< str3.find(str4+"xyz")<<std::endl;
    std::cout<< str3.find("t"+str4)<<std::endl;
    
    return 0;
}*/

using namespace std;

int main() {
    string s = "Hello, World!";

    // 获取字符串长度
    cout << "Length: " << s.length() << endl;

    // 获取子字符串
    cout << "Substring (0-4): " << s.substr(0, 5) << endl;  // 输出: Hello

    // 查找子字符串
    size_t pos = s.find("World");
    if (pos != std::string::npos)
        cout << "'World' found at position: " << pos << endl;

    // 替换子字符串
    s.replace(7, 5, "C++");  // 将 "World" 替换为 "C++"
    cout << "After replace: " << s << endl;  // 输出: Hello, C++!

    // 追加字符串
    s.append(" Enjoy coding!");
    cout << "After append: " << s << endl;

    return 0;
}
