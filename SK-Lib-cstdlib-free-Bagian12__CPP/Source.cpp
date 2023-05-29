#include <cstdlib>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int* p1 = (int*)std::malloc(10 * sizeof * p1);
    std::free(p1); 

    int* p2 = (int*)std::calloc(10, sizeof * p2);
    int* p3 = (int*)std::realloc(p2, 1000 * sizeof * p3);

    if (!p3) {
        std::free(p2);
    }

    std::free(p3); 

    _getch();
    return 0;
}