#include <iostream>
#include <string>
int main() {
std::string s1 {".ABC"};
std::string s2 {".BAC"};
std::string s3 {".ACB"};
std::string s4 {".CAB"};
std::string s5 {".CBA"};
std::string s6 {".BCA"};
std::string s {" "};
std::cin>>s;

if(s==s1 || s==s2 || s==s3 || s==s4 || s==s5 || s==s6){
    std::cout<< "YES";
}
else{
    std::cout<< "NO";
}

}
