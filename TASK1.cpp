#include <iostream>
void func(int a,int b)
{
    if (a > b == true)
    {
        std::cout << "a > b" << std::endl;
    }
    if (a > b)
    {
        std::cout << "a > b" << std::endl;
    }
    if (!(a > b)){
        std::cout << "a < b" << std::endl;
    }
    if ((a > b) == false)
    {
        std::cout << "a < b" << std::endl;
    }
}
int main()
{
    int a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    func(a,b);
    return 0;
}
