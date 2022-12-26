#include <iostream>
#include <cmath>
void ShiftRight3(int X,int A,int B,int C,int X1,int A1,int B1,int C1,int X2,int A2,int B2,int C2)
{
    X = C;
    C = B;
    B = A;
    A = X;
    std :: cout << "A=" << A << std :: endl;
    std :: cout << "B=" << B << std :: endl;
    std :: cout << "C=" << C << std :: endl;
    X1 = C1;
    C1 = B1;
    B1 = A1;
    A1 = X1;
    std :: cout << "A=" << A1 << std :: endl;
    std :: cout << "B=" << B1 << std :: endl;
    std :: cout << "C=" << C1 << std :: endl;
    X2 = C2;
    C2 = B2;
    B2 = A2;
    A2 = X2;
    std :: cout << "A=" << A2 << std :: endl;
    std :: cout << "B=" << B2 << std :: endl;
    std :: cout << "C=" << C2 << std :: endl;
}
int main()
{
    int X,A,B,C,X1,A1,B1,C1,X2,A2,B2,C2;
    std :: cout << "A=";
    std :: cin >> A;
    std :: cout << "B=";
    std :: cin >> B;
    std :: cout << "C=";
    std :: cin >> C;
    std :: cout << "A1=";
    std :: cin >> A1;
    std :: cout << "B1=";
    std :: cin >> B1;
    std :: cout << "C1=";
    std :: cin >> C1;
    std :: cout << "A2=";
    std :: cin >> A2;
    std :: cout << "B2=";
    std :: cin >> B2;
    std :: cout << "C2=";
    std :: cin >> C2;
    ShiftRight3(X,A,B,C,X1,A1,B1,C1,X2,A2,B2,C2);
    return 0;
}
