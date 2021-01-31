#include <iostream>

using namespace std;

int main()
{

     double total_cost,total_amount,balance;
    cout<<"Welcome to INF SUPERMARKET \n"<<endl;

    cout<<"Please enter your name"<<endl;
    string customername;
    cin>> customername;
    cout<<"\n";


    cout<<"These are the items we have here:"<<endl;

    string buy;

    string print;
    string phone;
    string table;

    cout<<"1."<<"Printers- "<<"200"<<endl;
    cout<<"2."<<"Phones- "<<"150"<<endl;
    cout<<"3."<<"Tables- "<<"50 \n"<<endl;


    double vatnow = 0.12;
    cout<<"NB: Vat is 12% on any item you buy.\n"<<endl;


    int uniqueID;
    cout<<"Please enter your ID "<<endl;
    cin>>uniqueID;
    cout<<"\n";

    cout<<"Which of these items will you like to purchase? "<<endl;
    cin>>buy;
    cout<<"\n";

    cout<<"Quantity wanted?"<<endl;
    int  quantity;
    cin>>quantity;
    cout<<"\n";

    int printer_price=200;
    int phone_price=150;
    int table_price=50;

    cout<<"How much money do you have?"<<endl;
    double moneyinhand;
    cin>>moneyinhand;
    cout<<"\n";



    if (moneyinhand<printer_price||moneyinhand<phone_price||moneyinhand<table_price){
    cout<<"You can't purchase"<<endl;}

    else if(buy=="printer" || buy=="Printer" || buy=="PRINTER"){
         total_cost=quantity*printer_price;
         total_amount=(total_cost*vatnow)+(quantity*printer_price);
         balance=moneyinhand-total_amount;





         cout<<"Customer name:  "<<customername<<endl;
         cout<<"Unique ID: "<<uniqueID<<endl;
         cout<<"Purchase:  "<<buy<<endl;
         cout<<"Quantity bought: "<<quantity<<endl;
         cout<<"Vat amount: "<<vatnow<<endl;
         cout<<"Total cost: "<<total_cost<<endl;
         cout<<"Total amount paid: "<<total_amount<<endl;
         cout<<"Balance: "<<balance<<endl;
         cout<<"\n";


         cout<<"Thank you!"<<endl;
}



          else if(buy=="phone"|| buy=="PHONE" || buy=="Phone"){
         total_cost=quantity*phone_price;
         total_amount=(total_cost*vatnow)+(quantity*phone_price);
         balance=moneyinhand-total_amount;

         cout<<"Customer name:"<<"    "<<customername<<endl;
         cout<<"Unique ID: "<<uniqueID<<endl;
         cout<<"Purchase: "<<buy<<endl;
         cout<<"Quantity bought: "<<quantity<<endl;
         cout<<"Vat amount: "<<vatnow<<endl;
         cout<<"Total cost: "<<total_cost<<endl;
         cout<<"Total amount paid: "<<total_amount<<endl;
         cout<<"Balance: "<<balance<<endl;
         cout<<"\n";

        cout<<"Thank you!"<<endl;

    }

        else if(buy=="table" || buy=="TABLE" || buy=="Table"){
         total_cost=quantity*table_price;
         total_amount=(total_cost*vatnow)+(quantity*table_price);
         balance=moneyinhand-total_amount;

         cout<<"Customer name: "<<customername<<endl;
         cout<<"Unique ID: "<<uniqueID<<endl;
         cout<<"Purchase: "<<buy<<endl;
         cout<<"Quantity bought: "<<quantity<<endl;
         cout<<"Vat amount: "<<vatnow<<endl;
         cout<<"Total cost: "<<total_cost<<endl;
         cout<<"Total amount paid: "<<total_amount<<endl;
         cout<<"Balance: "<<balance<<endl;
         cout<<"\n";

         cout<<"Thank you!"<<endl;

    }







}
