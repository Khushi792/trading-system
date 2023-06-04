#include<iostream>
#include<ctime>
using namespace std;
char product;
float bill=0;
char choice(void)
{
    char input;

    int quantity;
    cout<<"...To start shopping please follow the given instructions.."<<endl;
    cout<<endl;
    cout<< " 1. TO ORDER REFRIGERATOR PRESS R "<<endl
        << " 2. TO ORDER WASHING MACHINE PRESS W"<<endl
        << " 3. TO ORDER INDUCTION COOKTOP PRESS D"<<endl
        << " 4. TO ORDER TELEVISION PRESS T"<<endl
        <<  "5. TO ORDER SEWING MACHINE PRESS S"<<endl;
    cin>>input;
    if(input=='r'||input=='R'||input=='w'||input=='W'||input=='d'||input=='D'||input=='T'||input=='t'||input=='s'||input=='S')
    {
//FOR REFRIGERATOR..............

        if(input=='r'||input=='R')
        {
            cout<<" ________Refrigerator details___________"<<endl;
            cout<<endl;
            cout<<" 1)  samsung = 15000 rs"<<endl;
            cout<<" 2)  whirlpool = 10000 rs "<<endl;
            cout<<" 3)  LG = 12000 rs "<<endl;
            cout<<" 4)  godrej = 20000 rs "<<endl;
            cout<< "_________________________________________"<<endl;
            cin>>product;
            cout<<"NICE CHOICE ...!!"<<endl;

            if(product=='1')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*15000;
            }
            else if(product=='2')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*10000;
            }
            else if(product=='3')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*12000;
            }
            else if(product=='4')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*20000;
            }
            else
            {
                cout<<"you have entered wrong choice";
                choice();
            }
        }
//FOR WASHING MACHINE..........
        if(input=='w'||input=='W')
        {
            cout<<" ________washing machine  details___________"<<endl;
            \
            cout<<endl;
            cout<<" 1)  samsung = 12000 rs"<<endl;
            cout<<" 2)  whirlpool = 8000 rs "<<endl;
            cout<<" 3)  LG = 7000 rs "<<endl;
            cout<<" 4)  godrej = 5000 rs "<<endl;
            cout<< "_________________________________________"<<endl;
            cin>>product;
            cout<<"YOU CHOOSE AN WONDERFUL PRODUCT...!!"<<endl;

            if(product=='1')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*12000;
            }
            else if(product=='2')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*8000;
            }
            else if(product=='3')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*7000;
            }
            else if(product=='4')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*5000;
            }
            else
            {
                cout<<"you have entered wrong choice";
                choice();
            }
        }
//FOR induction cooktop ..........
        if(input=='d'||input=='D')
        {
            cout<<" __________induction cooktop  details___________"<<endl;
            cout<<endl;
            cout<<" 1)  piegon= 4000 rs"<<endl;
            cout<<" 2)  hier = 2000 rs "<<endl;
            cout<<" 3)  philips = 2500 rs "<<endl;
            cout<<" 4)  prestige = 3000 rs "<<endl;
            cout<< "_________________________________________"<<endl;
            cin>>product;
            cout<<"you made a great choice ...!!"<<endl;

            if(product=='1')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*4000;
            }
            else if(product=='2')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*2000;
            }
            else if(product=='3')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*2500;
            }
            else if(product=='4')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*3000;
            }
            else
            {
                cout<<"you have entered wrong choice";
                choice();
            }
        }
//FOR TELEVISION.........
        if(input=='t'||input=='T')
        {
            cout<<" ________television  details___________"<<endl;
            cout<<endl;
            cout<<" 1)  samsung = 12000 rs"<<endl;
            cout<<" 2)  realme = 18000 rs "<<endl;
            cout<<" 3)  LG = 17000 rs "<<endl;
            cout<<" 4)  sony = 15000 rs "<<endl;
            cout<< "_________________________________________"<<endl;
            cin>>product;
            if(product=='1')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*12000;
            }
            else if(product=='2')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*18000;
            }
            else if(product=='3')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*17000;
            }
            else if(product=='4')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*15000;
            }
            else
            {
                cout<<"you have entered wrong choice";
                choice();
            }
        }
//sewing machine ..........
        if(input=='s'||input=='S')
        {
            cout<<" ________sewing machine  details___________"<<endl;
            cout<<endl;
            cout<<" 1  usha = 5000 rs"<<endl;
            cout<<" 2)  singer = 4000 rs "<<endl;
            cout<<" 3)   asha = 2000 rs "<<endl;
            cout<<" 4)  bandhan = 1500 rs "<<endl;
            cout<< "_________________________________________"<<endl;
            cin>>product;
            cout<<"your choice is awesome...!!"<<endl;
            if(product=='1')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*5000;
            }
            else if(product=='2')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*4000;
            }
            else if(product=='3')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*2000;
            }
            else if(product=='4')
            {
                cout<<"please enter the quantity of product"<<endl;
                cin>>quantity;
                bill=bill+quantity*1500;
            }
        }
    }
    else
    {
        cout<<"you have entered wrong choice";
        choice();
    }
    return 0;

}
char shop(void)
{
    char input;
    string name,number;
    cout<<"PLEASE ENTER S TO START YOUR SHOPPING :)"<<endl;
    cin>>input;
    if(input=='s'||input=='S')
    {
        cout<<choice();
        cout<< "_________________________________________"<<endl;
        cout<< "_________________________________________"<<endl;
        cout<<"please enter your name.."<<endl;
        cin>>name;
        cout<<"please enter your phone no. to continue"<<endl;
        cin>>number;
        cout<<"_________________________________________"<<endl;
        cout<<"_______CUSTOMER DETAILS______"<<endl;
        cout<<"CUSTOMER's NAME = "<<name<<endl;
        cout<<"CUSTOMER's PHONE NUMBER = "<<number<<endl;
        cout<< "_________________________________________"<<endl;

        cout<<"________BILL DETAILS________"<<endl;

        time_t t =time(nullptr);
        tm*tptr=localtime(&t);
        cout<<"bill date :";
        cout<<tptr->tm_mday<<"/";
        cout<<1+tptr->tm_mon<<"/";
        cout<<1900+tptr->tm_year<<endl;
        cout<<"bill time:"<<(tptr->tm_hour)<<":"<<(tptr->tm_min)<<":"<<(tptr->tm_sec)<<endl;
        cout<<"total bill  = "<<bill<<endl;
        if (bill>5000&& bill<10000)
        {
            bill=bill-(0.05*bill);
            cout<<"total discount :5%"<<endl;
        }
        else if (bill>10000&& bill<100000)
        {
            bill=bill-(0.1*bill);
            cout<<"total discount :10%"<<endl;
        }

        else if (bill>100000)
        {
            bill=bill-(0.2*bill);
            cout<<"total discount :20%"<<endl;
        }
        cout<<"total bill after discount is :"<<bill<<endl;
        cout<< "________________________________________"<<endl;
        cout<< "________________________________________"<<endl;
        cout<<"Do you want to shop again press y or n"<<endl;
        cin>>input;
        if(input=='y'||input=='Y')
        {
            shop();
        }
        else if(input=='n'||input=='N')
        {
            cout<<"THANKS FOR SHOPPING VISIT AGAIN :)"<<endl<<endl;
            cout<<"!!...HAVE A GOOD DAY...!!"<<endl;
            cout<< "_______________________________________"<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"you have entered wrong choice";

        }
    }
    else
    {
        cout<<"you have entered wrong option  "<<endl;
        shop();
    }

    return 0 ;
}

int main()
{
    char input;
    cout<< "_______________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!! .WELCOME TO AGRAWAL TRADERS. !!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<< "_______________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<shop();
    return 0;
}

