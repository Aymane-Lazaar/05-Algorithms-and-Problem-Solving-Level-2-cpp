#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n=9;
    cout<<endl;
    
    //ex1
    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<"\t\t";
    //     for (int j = n; j > i; j--)
    //     {
    //         cout<<" ";
    //     }

    //     for (int k = 0; k < 2*i+1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl<<endl;
    // //ex2
    // for (int i = n; i >= 0 ; i--)
    // {
    //     cout<<"\t\t";
    //     for (int j = n; j > i; j--)
    //     {
    //         cout<<" ";
    //     }

    //     for (int k = 0; k < 2*i+1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // //ex3
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"\t\t";
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

    // cout<<endl<<endl;

    // //ex4
    // for (int i = 10; i > 0; i--)
    // {
    //     cout<<"\t\t";
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }
    
    // cout<<endl<<endl;
    // //ex5

    // for (int i = 0; i <= n; i++)
    // {
    //     cout<<"\t\t";
    //     for (int j = n; j > i; j--)
    //     {
    //         cout<<" ";
    //     }

    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl<<endl;
    // //ex6
    
    // for (int i = n; i >=0; i--)
    // {
    //     cout<<"\t\t";
    //     for (int j = n; j > i; j--)
    //     {
    //         cout<<" ";
    //     }

    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout<<"*";
    //     }bbakhvdk
    //     cout<<endl;
    // }


    /*int sum=0,stock=0,result=0;
    
    int num=10;

    for (int i = 1; i < num; i++)
    {
        // if (num<0)
        // {
            for (int j = 1; j < num; j++)
            {
                sum=j;
            }
            
        // }

        // stock=i
        
        
    }
    cout<<sum;
    */

    /*for (int i = 1; i <= 4; i++) {

    for (int j = 4; j > i; j--) {
        cout<<" ";
    }

    for (int k = 1; k <= 2*i-1; k++) {
        cout<<"*";
    }
    
    cout<<endl;
    if (i==4)
    {
        for (int j = 1; j < i ; j++) {
        cout<<" ";
    }
        cout<<"|";
    }

    }*/


    // int Money;
    // cout<<"Enter Money: ";
    // cin>>Money;

    // // int Remainder+=Money;
    // int HowMany200Dh=Money/200;
    // int Remainder+=how;
    // cout<<"200 existe ";
    
    int arr[6]={1,2,3,5,2,1};
    
    for (short i = 0; i < 6; i++)
    {
        int Counter=0;
        for (short j = 0; j < 5; j++)
        {
            if (arr[i]==arr[j+1-i])
            {
                Counter++;
            }
            
        }
        if (Counter>=2)
        {
            cout<<"number "<<arr[i]<<" repeted: "<<Counter<<" Time(s)";
        }   
        
    }
    

    return 0;
}