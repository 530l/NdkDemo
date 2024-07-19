//
// Created by 530 on 2024/7/18.
//
#include "module1.h"

//namespace命名空间
//在C++和C语言中是支持面向过程编程的，也就是说我们可以在文件中直接声明全局的变量或者函数，
//注意，这一点和java不同，java所有变量和函数的定义都要在类中。
//这就导致了一个问题，可能出现命名冲突， C语言中通常使用不同的命名约定来避免命名冲突。
//而C++则引入了namespace命名空间来解决这个问题，而且它允许我们将相关的变量、函数等放在一个namespace中。
namespace space1 {
    int sum = 10;
}
namespace space2 {
    int sum = 10;
}

void module1_function() {
    std::cout << "test  module1_function " << std::endl;
}

struct Person {
    std::string name;
    int age;

    //支持函数
    void display() {
        LOGE("我是log %d", age);
        LOGE("我是log %s", name.c_str());
    }
};

void module1_test() {
    // signed修饰符 ,可以表示负数和正数
    signed int ttttt = -10;
    // unsigned修饰符 ,只能表示非负数
    unsigned int yyyyyy = 20;

    Person p1; //创建结构体对象
    p1.name = "John";
    p1.age = 25;
    p1.display();

    //C++中的指针是一种变量，它是指向某个变量的内存地址。通过指针，我们可以直接访问和操作内存中的数据。
    int a = 10;
    int *ptr; //声明一个指针
    ptr = &a; //取地址运算符（&）将变量的地址赋值给指针
    *ptr = 20; //修改指向的内容

    //在C++中，引用是一种别名，它指向了一个已经存在的变量或者对象，通过引用可以直接操作原始变量。
    int &ref = a; //声明引用ref，它是变量a的别名。
    //引用必须在声明时进行初始化，并且一旦初始化后，它将一直引用同一个变量。
    //引用与指针的区别
    //引用与指针类似，但有一些重要区别。引用必须在声明时进行初始化，并且不能改变引用所指向的变量。
    //引用不需要使用解引用操作符*来访问所引用的变量，而是直接使用引用变量名。

    //namespace命名空间
    // 访问命名空间中的变量
    LOGE("我是log %d", space1::sum);
    LOGE("我是log %d", space2::sum);
    //注意：访问命名空间中的成员是通过::作用域操作符来访问的。此外命名空间还可以定义函数，类对象等。
    //std是c++中的标准命名空间。c++标准库中的标识符都定义在这里，
    //比如说常用的<iostream>,std::cout,vector等。在使用的文件当中加上using namespace std;即可使用。

    //C++内存分配的2种方式
    //在C++中，有多种方式来进行内存的分配和释放，其中包括 malloc 和 free 函数以及 new 和 delete 运算符。
    // malloc 和 free 是C语言中的函数，用于动态分配和释放内存。
    // C++中继承了这一特性，使用 malloc 分配内存时，需要手动指定要分配的字节数，并返回一个指向分配内存的指针。
    // 使用 free 释放内存时，需要传入指向要释放的内存的指针。
    //sizeof(int)是int 的大小，
    int *ptr2 = (int *) malloc(sizeof(int));
    LOGE("我是log %d", ptr2);
    free(ptr2);
    LOGE("我是log %d", ptr2);
    //malloc/free是C语言就有的特性，c++继承了这一特性。
    // 但c++更推荐使用new运算符分配内存。malloc/free只是动态分配内存空间/释放空间。
    // 而new/delete除了分配空间还会自动调用构造函数和析构函数进行初始化与清理。
    // 注意：对于数组的分配和释放，需要使用 new[] 和 delete[] 运算符。
    int *ptr3 = new int; // 使用new运算符分配内存
    delete ptr3; // 使用delete运算符释放内存

    int *arr3 = new int[5]; // 使用new[]运算符分配数组内存
    delete[] arr3; // 使用delete[]运算符释放数组内存

    //虽然 malloc 和 free 在C++中仍然可用，但为了更好地利用C++的面向对象的特性和资源管理机制，
    //推荐使用 new 和 delete 运算符进行内存的分配和释放。

    //函数返回值类型 (* 指针变量名) (函数参数列表);
    //例如：int (*p)(int,int)
    //这段代码就定义了一个函数指针变量p，可以用来存储函数的首地址（一般直接使用函数名代替），
    // 该函数类型为带两个int形参以及返回值类型为int。
    //注意：
    //(*指针变量名)这个括号不能省略，如果写成了int *p(int,int)，那就不是一个函数指针了，而是一个返回值类型为一个int型指针的函数p。
}

namespace veryLongName {
    int a = 10;

    void func() { cout << "hello namespace" << endl; }
}

//实现头文件声明的MySpace1的函数
void MySpace1::func1() {
    //命名空间别名
    namespace shortName = veryLongName;
    LOGE("我是log %d", shortName::a)
    shortName::func();
    //1. 通过命名空间域运算符
    MySpace1::func2(2)
    //2. using声明
    using MySpace1::func2
    (3);
    using MySpace1::paramA
}

void MySpace1::func2(int param) {

}



//1. 结构体中即可以定义成员变量，也可以定义成员函数
struct Student{
    string mName;
    int mAge;
    void setName(string name){ mName = name; }
    void setAge(int age){ mAge = age; }
    void showStudent(){
        cout << "Name:" << mName << " Age:" << mAge << endl;
    }
};
//2. c++中定义结构体变量不需要加struct关键字
void test01(){
    Student student;
    student.setName("John");
    student.setAge(20);
    student.showStudent();
}




