// ConsoleApplication3.cpp : 定義主控台應用程式的進入點。
//

#include <string.h>
#include <iostream>

using namespace std;

void CallByValue(int val1, int val2)
{
    val1 = val2;
}

void CallByAddress(int *adr1, int *adr2)
{
    *adr1 = *adr2;
}

void CallByReference(int &ref1, int &ref2)
{
    ref1 = ref2;
}

void CallByPointerReference(int *&pAge, int &refAge, int age)
{
    pAge = &refAge;
    refAge = age;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int *p;
    int &d = c;
    CallByValue(a, b);
    CallByAddress(&a, &b);
    CallByReference(b, c);
    CallByPointerReference(p, a, b);

    return 0;
}
