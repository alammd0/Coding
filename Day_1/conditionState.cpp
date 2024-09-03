#include <iostream>

using namespace std;




int main()
{
    // int a;
    // cout << "Enter a number: "; 

    // cin >> a;  

    // if (a % 2 == 0) {
    //     cout << "even";  
    // } else {
    //     cout << "odd";  
    // }


    // multiplication

    // int a = 10 ; 
    // int b = 10 ; 

    // cout << a * b << endl;

    // prameter 
    
    // int len  = 8 ;

    // int wid = 5 ; 

    // int prem = 2 * (len + wid) ;

    // cout << prem << endl;


    // simple interset 

    // principle, rate, time (p r t) ;

    // int p = 1000 ; 
    // int r = 5 ;
    // int t = 1 ; 

    // int pi = (p * r * t) / 100 ;

    // cout << pi ;  


    // 3-max

    int a, b, c ;

    cout << "Enter the three Number a , b and c" << endl; 

    cin >> a >> b >> c ; 

    if (a > b)
    {
        if (a > c)
        {
            cout << "Maximum number is : " << a << endl;
        }else{
            cout << "Maximum number is : " << c << endl;
        }
        
    }else{
        if (b > c)
        {
            cout << "Maximum number is : " << b << endl;
        }else{
            cout << "Maximum number is : " << c << endl;
        }
    }
    


    return 0;
}