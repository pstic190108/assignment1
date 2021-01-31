#include <iostream>

using namespace std;

int main()
{
    string name;
    string items;
    int ID;
    int quantity;
    double amountOwe;
    string product1 = "printer, Printer";
    string product2 = "phone";
    string product3 = "table";
    int priceOfTheGood;
    double vat = 12;
    double balance;
    double amountPaid;
    cout << "enter your name"<<endl;

    getline(cin,name);

    cout << "enter ID"<<endl;
    cin>>ID;

    cout << "Items List" <<endl;

    int printerPrice = 10;
    cout << "Printer" <<endl;

    int phonePrice = 7;
    cout << "Phone" <<endl;

    int tablePrice = 9;
    cout << "Table" <<endl;


    cout << "enter what you want to buy"<<endl;
    cin>>items;
    while(items!=product1&&items!=product2&&items!=product3){
       cout << " you enter the wrong product,enter again"<<endl;
        cin>>items;
    }

    cout << "enter quantity"<<endl;
    cin>>quantity;

    cout<<"..............................."<<endl;
    if(items==product1){
      amountOwe=(printerPrice*quantity)+vat;
    }
    else if (items==product2){
        amountOwe=(phonePrice*quantity)+vat;
    }else
        amountOwe=(tablePrice*quantity)+vat;
        cout<<"please you own an amount of  "<<amountOwe<<endl;

        amountPaid=amountOwe;
     balance=(amountPaid)-(amountOwe);
     cout<< "your balance is  " <<balance<<endl;

     cout<<"..........RECEIPT..........."<<endl;
     cout<<"CUSTOMER----------------"<<name<<endl;
     cout<<"UNIQUE ID----------------"<<ID<<endl;
     cout<<"ITEM BOUGHT----------------"<<items<<endl;
     cout<<"QUANTITY----------------"<<quantity<<endl;
     cout<<"VAT AMOUNT----------------"<<vat<<endl;
     cout<<"TOTAL AMOUNT----------------"<<amountOwe<<endl;
     cout<<"AMOUNT PAID----------------"<<amountOwe<<endl;
     cout<<"BALANCE----------------"<<balance<<endl;
     cout<<"------------------------------"<<endl;
     cout<<"----------THANK YOU........."<<endl;



    return 0;
}
