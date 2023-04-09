#include <iostream>

using namespace std;

int main()
{
    int year, day, month;
    cout << "Enter date month and year dd/mm/yyyy" << endl;
    cin >> day >> month >> year;
    cout << endl;
    cout << endl;
    bool flag = true;

    if (year >= 1)
    {
        if (month >= 1 && month <= 12)
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                if (month == 2)
                {
                    if (day >= 1 && day <= 29)
                    {
                        cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year" << endl;
                    }
                    else { cout << "Invalid day:" << day; flag = false; }
                }

                else if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    if (day >= 1 && day <= 30)cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year" << endl;
                    else { cout << "Invalid day:" << day; flag = false; }
                }

                else
                {
                    if (day >= 1 && day <= 31)cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year" << endl;
                    else { cout << "Invalid day:" << day; flag = false; }

                }

                cout << "Here is below the next twenty Leap years are: " << endl;
                if (flag) {
                    for (int i = 1; i <= 20; i++)
                    {
                        year += 4;
                        if (year % 100 == 0)
                        {
                            cout << year << ",";
                            continue;
                        }
                        cout << year << ",";
                    }
                }
            }


            else
            {
                if (month == 2)
                {
                    if (day >= 1 && day <= 28)
                    {
                        cout << day << "/" << month << "/" << year << "  is a valid date but not a Leap Year" << endl;
                    }
                    else { cout << "Invalid day:" << day; }
                }

                else if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    if (day >= 1 && day <= 30)cout << day << "/" << month << "/" << year << " is a valid date but not a Leap Year" << endl;
                    else { cout << "Invalid day:" << day; }
                }

                else {
                    if (day >= 1 && day <= 31)cout << day << "/" << month << "/" << year << " is a valid date but not a Leap Year" << endl;
                    else { cout << "Invalid day:" << day; }
                }

            }
        }
        else { cout << "Invalid month:" << month; }


    }
    else { cout << "Invalid year:" << year; }



    system("pause>0");
}
