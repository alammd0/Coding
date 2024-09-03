#include <iostream>
using namespace std;

// 1. demo of function
void printName(string name)
{

    for (int i = 0; i < 10; i++)
    {
        cout << name << endl;
    }
}

// 2. sum of two Numbers
void sum(int a, int b)
{
    cout << a + b << endl;
}

int sum1(int c, int d)
{
    return c + d;
}

// 3. print max of three numbers
void maxOfthreeNum(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            cout << "max is = " << a << endl;
        }
        else
        {
            cout << "max is = " << b << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "max is = " << b << endl;
        }
        else
        {
            cout << "max is = " << c << endl;
        }
    }
}

// 4. retrun max of three Number
int maxOfthreeNum2(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            // cout << "max is = " << a << endl;
            return a;
        }
        else
        {
            // cout << "max is = " << b << endl;
            return b;
        }
    }
    else
    {
        if (b > c)
        {
            // cout << "max is = " << b << endl;
            return b;
        }
        else
        {
            // cout << "max is = " << c << endl;
            return c;
        }
    }
}

// 5. count the digit
int coutingNum(int num)
{
    int count = 0;

    for (int i = 0; i < num; i++)
    {
        count++;

        cout << count << endl;
    }

    return count;
}

// 6. check if number is odd and even
string checkEvenandOdd(int num)
{
    if (num % 2 == 0)
    {
        return "even";
    }
    else
    {
        return "odd";
    }
}

// 7. sum of all number from 1 to n
int sumofOneToN(int num)
{
    int sum = 0;

    int i = 1;

    while (i <= num)
    {
        sum += i;
        i++;
    }
    return sum;
}

//  8. sum of all even number from 1 to n
int sumofOneToNeven(int num)
{
    int sum = 0;

    int i = 1;

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    return sum;
}

// 9. check the number is prime or not
int isPrime(int num)
{
    bool isPrime = true;

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }

    return isPrime;
}

// 10. pattern-1

void patter1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

// 11. pattern-2
void patter2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// 12. pattern-3
void patter3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

// 13. pattern-4
void patter4(int n)
{

    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// 14. pattern-5
void patter5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

// 15. factorial of a number
int factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }

    return f;
}

// 16. print range prime number
void printAllprimeNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " " << endl;
        }
    }
}

int main()
{

    // printName("Md khalid alam");

    // sum(3, 5);

    // int sum = sum1(4, 5);

    // cout << sum << endl;

    // int max = maxOfthreeNum2(4, 67, 8);

    // cout << "max of three is = " << max << endl;

    // int counting = coutingNum(10);

    // cout << counting << endl;

    // cout << checkEvenandOdd(5) << endl;

    // cout << sumofOneToNeven(10) << endl;

    // cout << isPrime(12343) << endl;

    // patter3(4);

    // patter4(5);

    // patter5(5);

    // cout << factorial(4) << endl;

    printAllprimeNumber(40);

    return 0;
}