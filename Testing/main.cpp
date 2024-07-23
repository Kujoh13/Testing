#include <iostream>
#include <string>
#include "Equation.h"

using namespace std;

void test1() {
    string res = result(430133, -53715, 50442);
    assert(res=="Invalid");
}

void test2() {
    string res = result(-575944, 23753, 34639);
    assert(res=="Invalid");
}

void test3() {
    string res = result(0, -89889, 25712);
    assert(res=="Invalid");
}

void test4() {
    string res = result(-70154, 105164, -39613);
    assert(res=="Invalid");
}

void test5() {
    string res = result(94029, -472771, -59621);
    assert(res=="Invalid");
}

void test6() {
    string res = result(38957, 37133, 688166);
    assert(res=="Invalid");
}

void test7() {
    string res = result(-49, 73794, -2778344);
    assert(res=="Invalid");
}

void test8() {
    string res = result(-89319, -89409, -55330);
    assert(res=="Vo nghiem");
}

void test9() {
    string res = result(17093, 68372, 68372);
    assert(res=="Nghiem kep");
}

void test10() {
    string res = result(97173, 25566, -60717);
    assert(res=="Phan biet");
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    return 0;
}
