#include <iostream>

using namespace std;

int meniu()
{
    int choice = 0;

    cout << "\nPasirinkite funkciją:\n";
    cout << "[0] Išeiti iš programos\n";
    cout << "[1] Patikrinti ar įvesta raidė yra balsė\n";
    cout << "[2] Rasti didžiausią bendrą daliklį tarp dviejų įvestų skaitmenų\n";
    cout << "[3] Mini žaidimas\n";
    cout << "[4] Fizz Buzz\n";

    cout << "Jūsų pasirinkimas:";
    cin >> choice;

    return choice;
}

bool ar_balsis(char raide)
{
    char balses[] = {'a', 'e', 'i', 'y', 'o', 'u'};
    bool balsis = false;

    for (int i = 0; i < size(balses); i++)
    {
        if (raide == balses[i])
            balsis = true;
    }

    return balsis;
}

int main()
{
    cout << boolalpha;

    bool running = true;

    while (running)
    {
        switch (meniu())
        {
        case 0:
            running = false;
            break;
        case 1:
            char raide;
            cout << "\nĮveskite raidę:";
            cin >> raide;
            cout << "Ar balsė? " << ar_balsis(raide) << '\n';
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        default:
            cout << "\nKlaida: Neteisingas pasirinkimas.\n";
            break;
        }
    }

    return 0;
}
