#include <iostream>
#include <cmath>
using namespace std;
void printCountingOneTo100()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }
}

float findSimpleInterest(int profit, int rate, int time)
{
    float result = (profit * rate * time) / 100;
    return result;
}

void printPrimeNumbersBtw1ToN()
{
    int n;
    cout << "\nEnter the upper limit: ";
    cin >> n; //  e.g., 100

    cout << "The prime numbers between 1 and " << n << " are: ";

    for (int num = 2; num <= n; ++num)
    { // Iterate through all numbers from 2 to 100
        bool isPrime = true;

        for (int i = 2; i * i <= num; ++i)
        {
            if (num % i == 0)
            {
                isPrime = false; // Not a prime number
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " "; // Print the prime number
        }
    }
    cout << endl;
}

void eligibleForVote(int age)
{
    if (age >= 18)
    {
        cout << " U ARE  ELIGIBLE FOR VOTE" << endl;
    }
    else
    {
        cout << "U ARE not ELIGIBLE FOR NOT " << endl;
    }
}

float sipCalculator(int monthlyInvest, float annualRate, int months)
{
    float monthlyRate = annualRate / (12 * 100);
    float futureValue = monthlyInvest * (pow(1 + monthlyRate, months) - 1) / monthlyRate * (1 + monthlyRate);
    return futureValue;
}

int main()
{
    printCountingOneTo100();

    int profit, rate, time;
    cout << "\n\nenter the val of profit---";
    cin >> profit;
    cout << "enter the val of rate---";
    cin >> rate;
    cout << "enter the val of time--";
    cin >> time;

    float res = findSimpleInterest(profit, rate, time);
    cout << "THE RESULT OF SI-" << res << endl;

    printPrimeNumbersBtw1ToN(); // Call the function

    int age;
    cout << "\nenter the val of age--";
    cin >> age;
    eligibleForVote(age);

    int monthlyInvest, months;
    float annualRate;

    cout << "Enter the monthly investment amount: ";
    cin >> monthlyInvest;
    cout << "Enter the annual interest rate (in %): ";
    cin >> annualRate;
    cout << "Enter the number of months: ";
    cin >> months;

    // Calculate and display the SIP future value
    float futureValue = sipCalculator(monthlyInvest, annualRate, months);
    cout << "Future Value of SIP: " << futureValue << endl;

    return 0;
}
