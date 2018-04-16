//vartotojas iveda realius skaicius, kai nusibosta iveda nuli.
// su kiekvienu skaiciumi:
/*1. paskaiciuoja jo moduli (absoliuti reiksme).
2. paskaiciuoja, kiek bus suapvalinus iki simtuju.
3. kiek skaicius turi skaitmenu, jei ignoruosime skaitmenis po kablelio.
4. ar skaicius didesnis uz pi (3.14).
*/
#include <iostream>
#include <cmath>

using namespace std;

double absoliutas(double skaicius)
{
    if (skaicius >= 0)
    {
        return skaicius;
    }
    else
    {
        return -skaicius;
    }
}

double apvalintojas(double skaicius)
{
    double ats;
    ats = skaicius*100.0;
    ats = round(ats);
    ats = ats / 100.0;
    return ats;
}

int skaitmenu_skaiciuotojas(double skaicius)
{
    skaicius = absoliutas(skaicius);
    int skaicius_be_kablelio = (int)skaicius;
    //double keiciam i int panaikindami kableli ir tai kas po jo
    int kiekis=0;

    while (skaicius_be_kablelio > 0)
    {
        skaicius_be_kablelio = skaicius_be_kablelio / 10;
        kiekis++;
    }
    return kiekis;
}

bool didesnis_uz_pi (double skaicius)
{
    if (skaicius > 3.14)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double sk;
    cout << "Iveskite skaicius, kai nusibos, iveskite nuli:" << endl;
    cin >> sk;
    while (sk!=0)
    {
        cout << "Absoliuti reiksme: " << absoliutas(sk) << endl;
        cout << "Suapvalinus iki desimtuju: " << apvalintojas(sk) << endl;
        cout << "Skaitmenu iki kablelio skaicius: " << skaitmenu_skaiciuotojas(sk) << endl;
        if (didesnis_uz_pi(sk)) cout << "Skaicius didesnis uz pi. " << endl;
        else cout << "Skaicius mazesnis uz pi. " << endl;
        cin >> sk;
    }
    return 0;
}
