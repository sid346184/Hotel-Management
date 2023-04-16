#include<iostream>
using namespace std;

int main(){

    int qrooms,qthalis,qshakes,qburger,quant,choice;
    int srooms=0,sthalis=0,sshakes=0,sburger=0;
    int rrooms,rthalis,rshakes,rburger;
    int costr,costt,costs,costb;

//////////////////////////    INPUT FOR HOTEL      /////////////////////////

    cout<<"Enter total no. of rooms we have:";cin>>qrooms;
    cout<<"Enter total no. of thalis we have:";cin>>qthalis;
    cout<<"Enter total no. of shakes we have:";cin>>qshakes;
    cout<<"Enter total no. of burgers we have:";cin>>qburger;
    cout<<"Enter cost of a room:";cin>>rrooms;
    cout<<"Enter cost of a thali:";cin>>rthalis;
    cout<<"Enter cost of a shake:";cin>>rshakes;
    cout<<"Enter cost of a burger:";cin>>rburger;


    
    
    m:
        cout << "\n\n\t\t\t ===========================================" << endl;
    cout << "\t\t\t ============ Welcome to Hotel =============" << endl;
    cout << "\t\t\t ===========================================" << endl;
    cout<<"\t\t\t =================== MENU ==================";



////////////////    INPUT FOR CUSTOMER       ////////////////////

    cout<<"\n\n\t\t\t Please select an option from the menu";
    cout<<"\n\n1)Rooms("<<rrooms<<"):";
    cout<<"\n\n2)thali("<<rthalis<<"):";
    cout<<"\n\n3)burger("<<rburger<<"):";
    cout<<"\n\n4)shakes("<<rshakes<<"):";
    cout<<"\n\n5)Total sales:";
    cout<<"\n\n6)Detailed sales:";
    cout<<"\n\n7)Exit";
    cout<<"\n\n\t\t\t Please Enter your choice:";
    cin>>choice;

    switch(choice){
        
        ///ROOMS///
        case 1:
        cout<<"\n\n Rooms needed: ";
        cin>>quant;
        
        if(qrooms>=quant){
        srooms=srooms+quant;
        qrooms=qrooms-srooms;
        
        cout<<"\n Your Room(s) are alloted to you";
        }
        else cout<<"\n Sorry our rooms are not available";
        break;
    
        
        ///Thalis///
        case 2:
        cout<<"\n\n Thali(s) needed: ";
        cin>>quant;
        
        if(qthalis>=quant){
        sthalis=sthalis+quant;
        qthalis=qthalis-sthalis;
        
        cout<<"\n Your thalis are alloted to you";
        }
        else cout<<"\n Sorry Thalis are not enough";
        break;
    
        ///BURGERS///
        case 3:
        cout<<"\n\n Burgers needed: ";
        cin>>quant;
        
        if(qburger>=quant){
        sburger=sburger+quant;
        qburger=qburger-sburger;
        
        cout<<"\n Your Burger(s) are alloted to you";
        }
        else cout<<"\n Sorry Burger(s) are not enough";
        break;
    
        ///Shakes///
        case 4:
        cout<<"\n\n shakes needed: ";
        cin>>quant;
        
        if(qshakes>=quant){
        sshakes=sshakes+quant;
        qshakes=qshakes-sshakes;
        
        cout<<"\n Your shake(s) are alloted to you";
        }
        else cout<<"\n Sorry Shakes are not enough";
        break;

        case 5:
        cout<<"\n Total sales: "<<((srooms*rrooms)+(sthalis*rthalis)+(sburger*rburger)+(sshakes*rshakes));
        break;

        case 6:
        cout<<"\n Total sales of rooms: "<<srooms<<"*"<<rrooms<<" = "<<(srooms*rrooms);
        cout<<"\n Total sales of thalis: "<<sthalis<<"*"<<rthalis<<" = "<<(sthalis*rthalis);
        cout<<"\n Total sales of burger: "<<sburger<<"*"<<rburger<<" = "<<(sburger*rburger);
        cout<<"\n Total sales of shakes: "<<sshakes<<"*"<<rshakes<<" = "<<(sshakes*rshakes);
        cout<<"\n Total sales: "<<((srooms*rrooms)+(sthalis*rthalis)+(sburger*rburger)+(sshakes*rshakes));
        break;

        case 7:cout<<"Thankyou for visiting";
        exit(0);

        default:
        cout<<"\n Please enter a number from above!!!!!!";
    }
    goto m;
        
    return 0;
}