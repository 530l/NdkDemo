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
    int a =10;
    int *ptr; //声明一个指针
    ptr = &a; //取地址运算符（&）将变量的地址赋值给指针
    *ptr =20; //修改指向的内容

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
    //cpp 代码解读复制代码
    //sizeof(int)是int 的大小，
    int *ptr = (int *) malloc(sizeof(int));
    free(ptr);
}







