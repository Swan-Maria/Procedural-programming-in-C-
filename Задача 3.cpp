// Задача 3.cpp : Реалізуйте макрос для порівняння двох рядків.
#include <iostream>

#define STRCMP(str1, str2) \
    ([](const char* s1, const char* s2) { \
        while (*s1 && *s2 && *s1 == *s2) { \
            s1++; \
            s2++; \
        } \
        return *s1 - *s2; \
    })(str1, str2)

using namespace std;

int main() {
    const char* str1 = "January";
    const char* str2 = "January";
    const char* str3 = "February";
    if (STRCMP(str1, str2) == 0) {
        cout << " The strings 1 and 2 are even" << endl;
    }
    else {
        cout << " The strings 1 and 2 are different" << endl;
    }
    if (STRCMP(str1, str3) == 0) {
        cout << " The strings 1 and 3 are even" << endl;
    }
    else {
        cout << " The strings 1 and 3 are different" << endl;
    }
	return 0;
}