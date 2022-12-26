#include <iostream>
#include <cmath>

double function(double x)
{
    double y;
    for(int i=0;i<3;i++)
    {
        if(x<3)
        {
            y =(2*x+1)*(2*x+1)-1;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }
        else if(x == 3)
        {
            y = 10;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }
        else
        {
            y = 2*x - 10;
            std :: cout << "x = " << x << " ";
            std :: cout << "y = " << y << ";" << std :: endl;
        }
        x = x + 3;
    }
}
int main()
{
    int x;
    std :: cout << "x=";
    std :: cin >> x;
    function(x);
    return 0;
}
