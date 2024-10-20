#include <iostream>
#include <conio.h>
using namespace std;
void menu();
int ttlbill(int espressoQ, int cappuccinoQ, int latteQ, int americanoQ, int chaiQ, int greenTeaQ, int chaiLatteQ, int browniesQ, int cheesecakeQ, int cookiesQ);
string placeorder();
string feedback();
void reset();

int op;
string o,m;
int q;
int espressoQ, cappuccinoQ, latteQ, americanoQ;
int chaiQ, greenTeaQ, chaiLatteQ, browniesQ;
int cheesecakeQ, cookiesQ;
main()
{
while(true)
	{
	    system("Color E0");
	
        cout<<"###################################################################"<<endl;
        cout<<" 	 	   		@@                                       	   "<<endl; 
        cout<<" 	       		@@                                         		"<<endl; 
        cout<<"  	       		@@      @@@  @@@@ @@@@ @@@@                		 "<<endl; 
        cout<<" 	      		@@     @   @  @@   @@  @                      "<<endl; 
        cout<<"   	       		@@  @@ @@@@@  @@   @@  @@@                   "<<endl; 
        cout<<" 		 @@     @@@@@@ @   @  @@   @@  @@@@@          		 "<<endl; 
        cout<<"  		 @@				 		                      	 "<<endl; 
        cout<<" 		 @@       @@@  @  @ @@@@  @@@   @@@            		 "<<endl; 
        cout<<"  		 @@      @   @ @  @ @  @ @   @ @   @				"<<endl; 
        cout<<"  	 	 @@      @   @ @  @ @  @ @   @ @@@@             			"<<endl; 
        cout<<"  		 @@@@@@@  @@@   @@  @  @  @@ @  @@@@@            		 "<<endl; 
        cout<<"                                	 	@                      		 "<<endl; 
        cout<<"                           	 	  @@                         "<<endl; 
        cout << "**************************************************************" << endl;
        cout << "		* 		  Where every sip tells a story     *                 "<< endl;
        cout << "		*  	 Coffee  •  Comfort  •  Community       *                 " << endl;
        cout << "***************************************************************       "<< endl;
        cout<<"		1.Menu"<<endl;
        cout<<"		2.Feedback"<<endl;
        cout<<"##################################################################"<<endl;
        cout<<"Select an option:";
        cin>>op;

        if(op==1)
        {
            menu();
            placeorder();
            ttlbill(espressoQ, cappuccinoQ, latteQ, americanoQ, chaiQ, greenTeaQ, chaiLatteQ, browniesQ, cheesecakeQ, cookiesQ);
            reset();
        }
        else if(op==2)
        {
            feedback();
        }
    }
}
void menu()
{
	system("cls");
	if(op==1)
	{
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"                           Main Menu                             "<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"   COFFEE                                "<<endl;
		cout<<"      - Espresso   ______________________Rs.750"<<endl;
		cout<<"      - Cappuccino  _____________________RS.650"<<endl;
		cout<<"      - Latte   _________________________Rs.800"<<endl;
		cout<<"      - Americano  ______________________Rs.500"<<endl;
		cout<<"                                                   "<<endl;
		cout<<"   TEA                                             "<<endl;
		cout<<"     -SpecialChai  ____________________Rs.100  "<<endl;
		cout<<"     -GreenTea   ______________________Rs.150"   <<endl;
		cout<<"     -ChaiLatte   _____________________Rs.150"<<endl;
		cout<<"                                                      "<<endl;
		cout<<"   DESSERTS                                           "<<endl;
		cout<<"     -Brownies  _______________________Rs.650(3pcs)"<<endl;
		cout<<"     -Cheesecake  _____________________Rs.300"<<endl;
		cout<<"     -Cookies  ________________________Rs.500(6pcs)"<<endl;
	}
}
string placeorder()
{
    
    string o;
    int q;
    string allo;
    cout <<"Place your order here(type 'done' to finish ordering):"<<endl;
    
    while(true)
    {
        cout<<"ITEM:"<<endl;
        cin>>o;
        
        if(o=="done")
        {
            break;
        }
        cout<<"Qunatity:";
        cin>>q;
        if (o=="Espresso")
        {
            espressoQ += q;
        }
        else if (o == "Cappuccino")
        {
            cappuccinoQ += q;
        }
        else if (o == "Latte")
        {
            latteQ += q;
        }
        else if (o == "Americano")
        {
            americanoQ += q;
        }
        else if (o == "SpecialChai")
        {
            chaiQ += q;
        }
        else if (o == "GreenTea")
        {
            greenTeaQ += q;
        }
        else if (o == "ChaiLatte")
        {
            chaiLatteQ += q;
        }
        else if (o == "Brownies")
        {
            browniesQ += q;
        }
        else if (o == "Cheesecake")
        {
            cheesecakeQ += q;
        }
        else if (o == "Cookies")
        {
            cookiesQ += q;
        }
	else
	{
	   cout<<"Item is not on list"<<endl;
	}
    }   

    
    cout<<"Order placed successfully!"<<endl;
    return "Order placed";
    cout<<" "<<endl;
    cout<<" "<<endl;

    
    	
}
int ttlbill(int espressoQ, int cappuccinoQ, int latteQ, int americanoQ, int chaiQ, int greenTeaQ, int chaiLatteQ, int browniesQ, int cheesecakeQ, int cookiesQ)
{
    string m;
	int espressoPrice = 750, cappuccinoPrice = 650, lattePrice = 800, americanoPrice = 500;
    int chaiPrice = 100, greenTeaPrice = 150, chaiLattePrice = 150;
    int browniesPrice = 650, cheesecakePrice = 300, cookiesPrice = 500;

    
    int total = (espressoQ * espressoPrice) +(cappuccinoQ * cappuccinoPrice) +
                (latteQ  * lattePrice) + (americanoQ * americanoPrice) +
                (chaiQ * chaiPrice) + (greenTeaQ * greenTeaPrice) +
                (chaiLatteQ * chaiLattePrice) +(browniesQ * browniesPrice) +
                (cheesecakeQ * cheesecakePrice) +(cookiesQ * cookiesPrice);
    cout<<"Choose a payment method:"<<endl;
    cout<<" a.Credit card     b.Cash                    |TYPE a FOR CARD AND b FOR CASH|"<<endl;
    cin>>m;
    cout<<"Your total bill is:Rs.";
    cout<< total;
    cout<<" "<<endl;
    cout<<"Press enter key to go back to main page"<<endl;
    getch();
    system("cls");
    return total;
}

string feedback()
{
    string fb;
    cout << "*******************************************************************************" << endl;
    cout << "Please give us your feedback:" << endl;
    cout << "FEEDBACK: ";
    cin >> fb;
    cout << "Thank You for giving us your feedback" << endl;
    cout << "Click anywhere on the screen" << endl;    
    getch();
    system("cls");	
    return fb;
}
void reset()
{
    espressoQ = 0;
    cappuccinoQ = 0;
    latteQ = 0;
    americanoQ = 0;
    chaiQ = 0;
    greenTeaQ = 0;
    chaiLatteQ = 0;
    browniesQ = 0;
    cheesecakeQ = 0;
    cookiesQ = 0;
}