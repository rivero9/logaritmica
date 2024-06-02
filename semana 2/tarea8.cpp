#include <iostream>
using namespace std;

int main()
{
    int hr, min, seg;
    cout << "Ingresa la cantidad de segundos ";
    cin >> seg;
    cout << seg << " segundos son ";
    
    hr = seg / (3600);
    seg %= 3600;
    min = seg / 60;
    seg %= 60;
    
    cout << hr << " hora";
    if (hr != 1) cout << "s";
    
    cout << " " << min << " minuto";
    if (hr != 1) cout << "s";
    
    cout << " y " << seg << " segundo";
    if (hr != 1) cout << "s";
    
    return 0;
}