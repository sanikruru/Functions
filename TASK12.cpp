#include <iostream>
#include <cmath>
bool IsPower5(int K)
{
    double res = log(K) / log(5);
    return res - trunc(res) < 0.000001;
}
int main()
{
    int K;
    int kolichectvo_chysel = 0;
    for(int i = 0;i<10;i++)
    {
        std :: cout << "K=";
        std :: cin >> K;
        if(IsPower5(K))
        {
            kolichectvo_chysel++;
        }
    }
    std :: cout << "kolichectvo_chysel = " << kolichectvo_chysel << std :: endl;
}
