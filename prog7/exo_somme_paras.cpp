#include <iostream>

int main(int argc, char** argv) {
    int res=0;
    for (int i=1; i<argc; i++)
    {
    int a = atoi(argv[i]);
    res+=a;

    }
    std::cout << res << std::endl ;
    return 0;
}