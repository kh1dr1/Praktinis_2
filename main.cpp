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

int main()
{
    bool running = true;

    while (running)
    {
        switch (meniu())
        {
        case 0:
            running = false;
            break;
        case 1:

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
