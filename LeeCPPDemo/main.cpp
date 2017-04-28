//
//  main.cpp
//  LeeCPPTest
//
//  Created by MacBook on 2017/4/27.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
using namespace std;
// 取别名
typedef int LeeInt;
typedef char LeeChar;
// 枚举
enum LeeColor {

    red = 0x00,
    green = 0x01,
    blue = 0x02
};
//extern int a,b,c;
//extern char d;

//常量的使用
#define LEE_STR "heloo ,dear"
const int AAA = 1313;
const double PI = 3.1415926;

void leeTest(int a,char * b);

int main(int argc, const char * argv[]) {

    static int k = 4;
    int m = 4,n = 5;
    char w = 44;

    std::cout << "Hello, World!\n" << endl;
    std::cout << sizeof(char) << endl;
    std::cout << sizeof(short int) << endl;
    std::cout << sizeof(LeeChar) << endl;
    LeeColor color = red;
    std::cout << color << endl;
    leeTest(m, &w);
    cout << "hello\tworld\n" << endl;
    
    short int i ;
    unsigned short int j;
    i = 3000;
    j = i;
    
    std::cout << i << j << endl;
    
    //////auto 存储类/////////
    auto f = 3.14;
    auto s("oliver");
    auto z = new auto(10);
    auto t = 5,o = 6;
    
    
    
    
    
    
    
    return 0;
}
void leeTest(int a , char * b){

    std::cout << a + (*b) << endl;
    
}
