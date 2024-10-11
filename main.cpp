#include <iostream>
#include <cstdlib>

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

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void zaidimas()
{
    int secret_number = random_number(1, 100);
    int guess = 0;

    cout << '\n';

    while (guess != secret_number)
    {
        cout << "Įveskite skaičių (nuo 1 iki 100):";
        cin >> guess;

        if (guess == secret_number)
            cout << "Atsakymas teisingas!\n";
        else if (guess < secret_number)
            cout << "Įvestas per mažas skaičius...\n";
        else if (guess > secret_number)
            cout << "Įvestas per didelis skaičius...\n";
    }
}

void fizzbuzz(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << "Skaičius: " << i << '\t';

        if (i % 3 == 0)
            cout << "Fizz";

        if (i % 5 == 0)
            cout << "Buzz";

        cout << '\n';
    }
}

int main()
{
    cout << boolalpha;

    srand(time(NULL));

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
            int num1, num2;
            cout << "\nĮveskite 2 skaičius:";
            cin >> num1 >> num2;
            cout << "Didžiausias bendras daliklis: " << gcd(num1, num2) << '\n';
            break;
        case 3:
            zaidimas();
            break;
        case 4:
        {
            int num = 0;
            cout << "\nĮveskite teigiamą sveikąjį skaičių:";
            cin >> num;
            fizzbuzz(num);
            break;
        }
        default:
            cout << "\nKlaida: Neteisingas pasirinkimas.\n";
            break;
        }
    }

    return 0;
}
