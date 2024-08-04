#include <iostream>
// https://blog.csdn.net/xiexievv/article/details/8487373
// READ: `static` 关键字 <https://zh.cppreference.com/w/cpp/language/storage_duration>



namespace REN{
   int a = 10;
//    命名空间内的非const变量如果没有声明为static，则拥有外部链接
   static int b = 20;
//    multiple definition of
//    int b=20;                     x
    // 命名空间内的const且非volatile变量拥有内部链接
    // multiple definition of
    // const volatile int c = 30;   x
    // int c = 30;                  x
    int c = 30;
    enum TestEnum{Apple};
};

class TestClass{
    enum class TestEnum{};
};

enum TestEnum2{};


int main(){
    std::cout << REN::a << REN::b << std::endl;
    std::cout << REN::TestEnum::Apple << std::endl;

}