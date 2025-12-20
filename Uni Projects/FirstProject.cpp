#include <iostream>
#include <sstream>
#include <ofstream>

class ToCreateBill{
    private :
    int IteamQuantity , IteamPrice;
    string IteamName;

    public:
    ToCreateBill():IteamName(""),IteamQuantity(0),IteamPrice(0){}

    void setIteamName(string Name){
        IteamName = Nmae;
    }
    void setIteamQuantity(int Quantity){
        IteamQuantity = Quantity;
    }
    void setIteamPrice(int prince){
        IteamPrice = prince;
    }

    string getIteamName(){
        return IteamName;
    }
    int getIteamQuantity(){
        return IteamQuantity;
    }
    int getIteamPrice(){
        return IteamPrice;
    }
    function AddIteam(ToCreateBill B){
                bool Terminate = false;

        while(!Terminate){
            system("cls");
            int UserChoise;
            cout<<"\t Welcome To The Grusory Store \n"
                <<"\t --------------------------------- \n"
                <<"\t \t Enter 1 to Add new Iteam \n"
                <<"\t \t Enter 2  to close\n"     
                <<"\t \t Enter Choice : ";
            cin>>UserChoise;

            if(UserChoise === 1){
                int IteamQuantity , IteamPrice;
                string IteamName;

                cout<<"\t Enter Iteam Name : \n";
                cin>>IteamName;
                B.setIteamName(IteamName);

                cout<<"\t Enter Iteam Quantity: \n";
                cin>>IteamName;
                B.setIteamQuantity(IteamQuantity);

                cout<<"\t Enter Iteam Price : \n";
                cin>>IteamName;
                B.setIteamPrice(IteamPrice);

                ofstream out("FilePath" , ios::app);

                if(!out){
                    cout<<"\t Error : File Can't Open!! \n";
                }
                else{
                    out<<"\t"<<B.getIteamName()<<""
                }

            }
        }
    }

    int main(){
        ToCreateBill B;

        bool Terminate = false;

        while(!Terminate){
            system("cls");
            int UserChoise;
            cout<<"\t Welcome To The Grusory Store \n"
                <<"\t --------------------------------- \n"
                <<"\t \t Enter 1 to Add Iteam \n"
                <<"\t \t Enter 2  to Print Bill\n"     
                <<"\t \t Enter 3 to Exist \n"
                <<"\t \t Enter Choice : ";
            cin>>UserChoise;
        }
    }
}