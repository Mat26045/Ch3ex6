#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
      const float COOKIES = 48,
        SUGAR = 1.5,
        BUTTER = 1,
        FLOUR = 2.75;

    float num_cookies,
        total_butter,
        total_sugar,
        total_flour;

    cout << "\nHow many cookies do you want to make? ";
    cin >> num_cookies;

    total_sugar = (SUGAR * num_cookies) / COOKIES;
    total_flour = (FLOUR * num_cookies) / COOKIES;
    total_butter = (BUTTER * num_cookies) / COOKIES;

    cout << setprecision(2) << fixed;
    cout << "\nTo make " << num_cookies << " cookies ";
    cout << "you will need the following ingredients: \n";
    cout << " - " << total_butter << " cups of butter\n";
    cout << " - " << total_sugar << " cups of sugar\n";
    cout << " - " << total_flour << " cups of flour\n";
    cout << endl;

       return 0;
}
