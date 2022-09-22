#include <iostream>
///#define SPRING 1
//#define SUMMER 1
//#define AUTUMN 1
#define WINTER 1

#if SPRING
int main()
{
    std::cout << "Spring"<<std::endl;
}
#endif
#if SUMMER
int main()
{
    std::cout << "Summer" << std::endl;
}
#endif
#if AUTUMN
int main()
{
    std::cout << "Autumn" << std::endl;
}
#endif
#if WINTER
int main()
{
    std::cout << "Winter" << std::endl;
}
#endif