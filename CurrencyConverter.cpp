#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    const double INR_TO_USD_RATE = 0.012;  // 1 INR = 0.012 USD
    const double USD_TO_INR_RATE = 82.50;  // 1 USD = 82.50 INR

    cout << endl << endl;
    cout << "------CURRENCY CONVERTER------" << endl << endl;
    cout << "1. Convert Indian Rupee To Doller($)." << endl;
    cout << "2. Convert Doller($) To Indian Rupee." << endl  << endl;
    cout << "Enter Your Choice (1 or 2):-" <<" ";

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        double inrAmount;
        cout << endl;
        cout << "Enter Amount in Indian Rupees:-" << " ";
        cin >> inrAmount;

        double usdAmount = inrAmount * INR_TO_USD_RATE;
        cout << fixed << setprecision(2);
        cout << inrAmount << " " << "=" <<" " <<"$" << usdAmount << endl;
        cout << endl;
    }
    else if (choice == 2)
    {
        double usdAmount;
        cout << endl;
        cout << "Enter Amount in Doller($):-" << " ";
        cin >> usdAmount;

        double inrAmount = usdAmount * USD_TO_INR_RATE;
        cout << fixed << setprecision(2);
        cout << usdAmount << " " << "=" << " " << inrAmount << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Invalid choice. Please select 1 or 2." << endl;
        cout << endl;
    }

    return 0;
}
