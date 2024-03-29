#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Podaj ilosc elementow list:" << endl;
    cin >> i;

    string w[100], x[100];
    cout << "\nWprowadz liste A:" << endl;
    for (int k = 1; k <= i; k++)
        cin >> w[k];
    cout << "\nWprowadz liste B:" << endl;
    for (int k = 1; k <= i; k++)
        cin >> x[k];

    string W, X;
    do
    {
        W = "";
        X = "";
        int m;
        cout << "\nPodaj m:" << endl;
        cin >> m;
        if (m == NULL)
            break;
        int I[100];
        for (int j = 1; j <= m; j++)
        {
            cout << "i" << j << " = ";
            cin >> I[j];
        }
        for (int j = 1; j <= m; j++)
        {
            W += w[I[j]];
            X += x[I[j]];
        }
        if (W == X)
        {
            cout << "\nPOP ma rozwiazanie" << endl;
            cout << W << " == " << X << endl;
        }
        if (W != X)
        {
            cout << "\nPOP nie ma rozwiazania" << endl;
            cout << W << " != " << X << endl;
        }
    } while (W != X);
}