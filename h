#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<windows.h>

 using namespace std;
 class Booking;
 class Cabs;
 class Travel;

 class Travel {
    char name[20];
    char gender[6];
    int age;
    int k;
    char destination[20];
    char date[20];
    long int b;
    long int c;
    int id;


    public:
    	int amount;
    	char type[60];
		char place[30];
	//	char date[20];
		char ch;
        int count=0;
    public:
    	 void menu();  //function for continuing two function details and receipt
          void heading(); //function for presenting main heading wherever necessary
          void details(); //functon for taking necessary details of traveller's
           void nepal();   //function for viewing list of tour package available in Nepal
            void receipt(); //function for displaying receipt of the traveller's selected package
             void pokhara();  //function for displaying necessary information of pokhara
           void kathmandu(); //function for displaying necessary infotmation of kathmandu
              void solukhumbu(); //function for displaying necessary information of solukhumbu
            void mustang(); //function for displaying necessary information of mustang
          void chitwan(); //function for displaying necessary information of chitwan
         void lumbini(); //function for displaying necessary information of lumbini
         void placeinfo();//function for displaying all the places necessary information to make traveller's make best choice
         void aboutus(); //function for displaying all the related information of our company
         void terms(); //function for displaying all the terms and condition which is really very necessary to be followed

         void viewreceipt();    //function for searching traveller's details
        void mainmenu();     //function for viewing main menu where all the important functions are listed

};

 class Cabs : public Travel
{
public:
	friend class Travel;
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastCabCost;

    void cabDetails()
    {
    	Travel jantu;
        cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
        cout << "-----------ABC Cabs-----------\n" << endl;
        cout << "1. Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 per 1KM" << endl;

        cout << "\nEnter another key to back or," << endl;

        cout << "\nTo calculate the cost for your journey.." << endl;
        cout << "Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout << "Enter Kilometers you have to travel: ";
        cin >> kilometers;

        int hireCab;

        if(cabChoice == 1){
            cabCost = kilometers * 15;
            cout << "\nYour tour will cost " << cabCost << " rupees for a standard cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired standard cab" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabChoice == 2){
            cabCost = kilometers * 25;
            cout << "\nYour tour will cost " << cabCost << " rupees for a luxury cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired luxury cab" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            jantu.mainmenu();
        }

        cout << "\nPress 1 to Redirect Main Menu: ";
        cin >> hireCab;
        system("CLS");
        if(hireCab == 1){
            jantu.mainmenu();
        }
        else{
            jantu.mainmenu();
        }
    }
};

class Booking:public Travel
{
public:
	friend class Travel;
    int choiceHotel;
    int packChoice1;
    int gotoMenu;
    static float hotelCost;

    void hotels()
    {
        string hotelNo[] = {"Avendra", "ChoiceYou", "ElephantBay"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }

        cout << "\nCurrently we collaborated with above hotels!" << endl;

        cout << "Press any key to back or\nEnter Number of the hotel you want to book or see details: ";
        cin >> choiceHotel;

        system("CLS");

        if(choiceHotel == 1){
            cout << "-------WELCOME TO HOTEL AVENDRA-------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by Avendra:\n" << endl;

            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Avendra: Rs.15000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Avendra" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

            }
           Travel o;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                 o.mainmenu();
            }
            else{
                o.mainmenu();
            }
        }
        else if(choiceHotel == 2){
            cout << "-------WELCOME TO HOTEL CHOICEYOU-------\n" << endl;

            cout << "Swimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;

            cout << "Packages Offered by ChoiceYou:\n" << endl;

            cout << "1. Family Pack" << endl;
            cout << "\t Rs.15000.00 for a day" << endl;
            cout << "2. Couple Pack" << endl;
            cout << "\t Rs.10000.00 for a day" << endl;
            cout << "3. Single Pack" << endl;
            cout << "\t 5000.00 for a day" << endl;

            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 15000.00;
                cout << "You have successfully booked Family Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "You have successfully booked Couple Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 5000.00;
                cout << "You have successfully booked Single Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
          Travel ob;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                ob.mainmenu();
            }
            else{
                //menu();
            }
        }
        else if(choiceHotel == 3){
            cout << "-------WELCOME TO HOTEL ELEPHANTBAY-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout << "Amazing offer in this summer: Rs.5000.00 for a one day!!!" << endl;

            cout << "\nPress another key to back or\nPress 1 to book this special package: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "You have successfully booked ElephantBay Special Pack" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            Travel obe;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                obe.mainmenu();
            }
            else{
               // menu();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            //menu();
        }
    }
};

float Booking::hotelCost;


float Cabs::lastCabCost;

class Login:public Travel{
	public:
		int tot;
		int amounts;
	void adminlogin();
void userregister();
void userlogin();
void logfunc();
                          };



void Login:: userregister()
{
	string ruserID,rpassword,rid,rpass;
	system("cls");
	cout<<"\t\t\t Enter the username : ";
	cin>>ruserID;
	cout<<"\t\t\t Enter the password : ";
	cin>>rpassword;

    ofstream f1;
	f1.open("record.txt",ios::app);
	f1<<ruserID<<' '<<rpassword<<endl;
	system("cls");
	getchar();
	cout<<"\n\t\t\t Registration is succesfull! \n ";
	getchar();
	userlogin();

}

void Login::userlogin()
{
	int count;
	string userID,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please enter the username and password: ";
	cout<<"\t\t\t USERNAME : ";
	cin>>userID;
	cout<<"\t\t\t PASSWORD : ";
	cin>>password;

	ifstream input("record.txt");//to check whether username and pass already exist in our records
	while(input>>id>>pass)//
	{
		if(id==userID && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	getchar();
	if(count==1)
	{
       cout<<userID<<"\n Your LOGIN is succesfull! \n";
		getchar();
	}
	else
	{

	cout<<"\n LOGIN ERROR!! \n Please check your username and password\n";
	getchar();
     userlogin();	
	}
}

void Travel::menu()
{
	int a;
    system("cls"); //clear the screen
   // heading();

    strcpy(type, "Nepal Tour Package");
    printf("\t\t\tNEPAL TOUR PACKAGE\n\n");

    printf("\t\t1) Pokhara Tour Packages\n");
    printf("\t\t2) Mustang Tour Packages\n");
    printf("\t\t3) Lumbini Tour Packages\n");
    printf("\t\t4) Chitwan Tour Packages\n");
    printf("\t\t5) Kathmandu Tour Packages\n");
    printf("\t\t6) Solukhumbu Tour Packages\n");
    printf("\t\t7) Return Back to Main Menu\n");
    flag:
    printf("\t\tEnter Choice: ");
    scanf("%d", &a);

    if (a == 1) {
	strcpy(place, "Pokhara Tour");
	system("CLS");
	pokhara();
		 }
    else if (a == 2) {
	strcpy(place, "Mustang Tour");
	system("cls");
	mustang();
		     }
    else if (a == 3) {	strcpy(place, "Lumbini Tour");
	system("cls");
	lumbini();
		    }
    else if (a == 4) {
	strcpy(place, "Chitwan Tour");
	system("cls");
	chitwan();
		     }

    else if (a == 5) {
	strcpy(place, "Kathmandu Tour");
	system("cls");
	kathmandu();
		    }

    else if (a == 6) {
	strcpy(place, "Solukhumbu Tour");
	system("cls");
	solukhumbu();
		    }
    else if (a==7)
    {
      int main();
    }

    else
    {
	printf("Enter Correct Choice...");
	goto flag;
    }
}

void Travel::pokhara()
{
	getchar();
	Booking obb;
	Cabs obe;
	int nuu;
	amount=5000;
	details();
	getchar();
	cout<<"1> book hotel "<<endl;
	cout<<"2> book cab "<<endl;
	cout<<"3> Print receipt"<<endl;
	cin>>nuu;
	 if(nuu==1)
	 {
	 	obb.hotels();

	 }
	 else if(nuu==2)
	 {
	 	obe.cabDetails();
	 }
	 else
	 {
        receipt();
     }
	getchar();
	mainmenu();

}
void Travel::mustang()
{
	getchar();
	amount=5000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::lumbini()
{
	getchar();
	amount=5000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::kathmandu()
{
	getchar();
	amount=5000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::solukhumbu()
{
	getchar();
	amount=5000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::chitwan()
{
	getchar();
	amount=5000;
	details();
	getchar();
	receipt();
	
	getchar();
	mainmenu();
}
void Travel::placeinfo()
{
	getchar();
   printf("\n1) POKHARA:\n");
  printf("\tSet at the base of the foothills and surrounded by some of the highest\n\tmountains in the world - Dhaulagiri, Manaslu, and Annapurna I,\n\tPokhara is one of Nepal's most scenic cities.");

  printf("\n2) Mustang:\n");
  printf("\tThe district is a part of Gandaki Province in northern Nepal,\n\tstraddlesthe Himalayas and extends northward onto the Tibetan Plateau. ");

  printf("\n3) Lumbini:\n");
  printf("\tSiddhartha Gautama,the Lord Buddha, was born in 623 B.C.\n\tin the famous gardens of Lumbini, which soon became a place of\n\tpilgrimage. ");

  printf("\n4) Chitwan:\n");
  printf("\tAt the foot of the Himalayas, Chitwan is one of the few remaining\n\tundisturbed vestiges of the 'Terai' region, which formerly extended\n\tover the foothills of India and Nepal. ");

  printf("\n5) Kathmandu:\n");
  printf("\tKathmandu is the largest city and capital of Nepal and the namesake of\n\tthe Kathmandu Valley.");

  printf("\n6) Solukhumbu:\n");
  printf("\tSolukhumbu is one of the Eastern-most areas of Nepal and features high\n\taltitutes mountains.");
  printf("\nPress Enter to get back to main menu");
  getchar();	
}
void Travel::viewreceipt()
{
    getchar();
	Travel op;
	int ids;
	int total1;
	ifstream fin;
	fin.open("travelling.txt");
	getchar();
	cout<<"enter your id to search"<<endl;
	cin>>ids;
	getchar();
	fin.read((char *)&op,sizeof(op));
	while(!fin.eof())
 		{
 			fin.read((char *)&op,sizeof(op));

 			if(ids==op.id)
	{
		getchar();
		cout<<"Name = "<<op.name<<endl;
		cout<<"Age = "<<op.age<<endl;
		cout<<"Gender = "<<op.gender<<endl;
		cout<<"Date = "<<op.date<<endl;
		cout<<"Destination = "<<op.destination<<endl;

	}
}
fin.close();
//getchar();
	
	ifstream ins;
	ins.open("totla.txt",ios::in);
	while(!ins.eof())
	{
         ins>>total1;
         cout<<"Total :"<<total1;
    }
	   
	   ins.close();
	   getchar();
	op.mainmenu();
}
void Travel::terms()
{
}
void Travel::receipt()
{
	getchar();
	Travel det;
	int totla;
	int ids1;

   ifstream fin1;
	fin1.open("travelling.txt");
	getchar();
	cout<<"enter your id to search"<<endl;
	cin>>ids1;
	getchar();
	
	while(!fin1.eof())
 		{
 			fin1.read((char *)&det,sizeof(det));
 			if(ids1==det.id)
	    {
		getchar();
		cout<<"Name = "<<det.name<<endl;
		cout<<"Age = "<<det.age<<endl;
		cout<<"Gender = "<<det.gender<<endl;
		cout<<"Date = "<<det.date<<endl;
		cout<<"Destination = "<<det.destination<<endl;
        }
	fin1.read((char *)&det,sizeof(det));
}
    fin1.close();
	totla=Booking::hotelCost+Cabs::lastCabCost+(Travel::amount)*det.count;
    cout<<"Total cost is : "<<totla;
    ofstream fout;
   fout.open("totla.txt",ios::out);
   fout<<totla;
    fout.close();

getchar();
    mainmenu();
    getchar();

}
void Travel::aboutus()
{
}
void Travel::details()
{
	   ofstream fout;
        Travel tr;
        int counter;
        char another='y';
		//count++;
		fout.open("travelling.txt",ios::app);
		while(another=='y'||another=='Y')
		{
          tr.count++;
		cout<<"\n\t\tEnter name of traveller:";
		cin>>tr.name;
		fflush(stdin);

		  printf("\t\tEnter id of traveller:");
		  cin>>tr.id;
		  fflush(stdin);

		  printf("\t\tEnter gender of traveller:");
		  cin>>tr.gender;
		  fflush(stdin);

		  printf("\t\tEnter age of traveller:");
		  cin>>tr.age;
		  fflush(stdin);

		  printf("\t\tEnter checkin date (y/m/d):");
		 cin>>tr.date;
		  fflush(stdin);

		  printf("\t\tEnter Destination:");
		  cin>>tr.destination;
		  fflush(stdin);
        
		cout<<"Enter 'y' to add record and 'n' to discard"<<endl;
		cin>>another;
		fout.write((char *)&tr,sizeof(tr));
		
		
     }
     fout.write((char *)&tr,sizeof(tr));
     //break;
     fout.close();
}
void Travel::mainmenu()
{
		int option;
        system("cls");

    printf("\n\t\t\t1) Hotel Booking\n\t\t\t2) Cabs Booking\n\t\t\t3) Terms and Condition\n\t\t\t4) Search Traveller's Information\n\t\t\t5) Exit\n\t\t\t6) Menu");
    printf("\n\t\t\tEnter Choice(1-5)");
    label:
    scanf("%d",&option);
    Booking bo1;
    Cabs ca1;

	 if(option == 1)
	{
	  system("CLS");
	  bo1.hotels();
	}
	 else if(option == 2)
	{
	   system("CLS");
	   ca1.cabDetails();
	}
	else if(option== 3)
	{
	   system("CLS");
	   terms();
	}

	else if(option==4)
	{
	    system("cls");
	    viewreceipt();
	}
	else if(option==5)
	{
	    system("cls");
	    exit(0);
	}
	else if(option==6)
	{
		system("cls");
		menu();
	//	object.receipt();
	}
	else if(option==7)
	{
		system("cls");
	//	k1.dis();
		receipt();
	}

	else
	{
	   printf("\n\n\t\t\tPlease enter the given choice from(1-8)");
	   	//charg.dis();
	   goto label;
	}
}
void Login::logfunc()
{
    int c;
	int amts;
	cout<<"\t\t\t-------------------------------------------------------\n\n\n";
	cout<<"\t\t\t-------------------WELCOME-----------------------------\n\n\n";

	cout<<"\t\t\t-------------------MENU-----------------------------\n\n\n";
	cout<<"                                                         \n";
	//cout<<"\t |Press 1 for ADMIN LOGIN |"<<endl;   
	cout<<"\t |Press 1 for REGISTER |"<<endl; 
	cout<<"\t |Press 2 for USER LOGIN |"<<endl;
	cout<<"\t |Press 3 for USER LOGOUT|"<<endl;
	cout<<"\n\t\t Please enter your choice : ";
	cin>>c;
	cout<<endl;

	switch(c)
	{
		case 1:

            userregister();
			break;

		case 2 :
			userlogin();
			break;

		case 3 :
			exit(0);
			break;	

		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above!!! \n"<<endl;
			//main();
	}

}
int main()
{

	Login obj;
	Travel object;
	int c;
	int amts;
	cout<<"\t\t\t-------------------------------------------------------\n\n\n";
	cout<<"\t\t\t-------------------WELCOME-----------------------------\n\n\n";

	cout<<"\t\t\t-------------------MENU-----------------------------\n\n\n";
	cout<<"                                                         \n";
	//cout<<"\t |Press 1 for ADMIN LOGIN |"<<endl;   
	cout<<"\t |Press 1 for REGISTER |"<<endl; 
	cout<<"\t |Press 2 for USER LOGIN |"<<endl;
	cout<<"\t |Press 3 for USER LOGOUT|"<<endl;
	cout<<"\n\t\t Please enter your choice : ";
	cin>>c;
	cout<<endl;

	switch(c)
	{
		case 1:

            obj.userregister();
			break;

		case 2 :
			obj.userlogin();
			break;

		case 3 :
			exit(0);
			break;	

		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above!!! \n"<<endl;
			main();
	}
	Booking b1;
	Cabs c1;
	int option;
    system("cls");

    printf("\n\t\t\t1) Hotel Booking\n\t\t\t2) Cabs Booking\n\t\t\t3) Terms and Condition\n\t\t\t4) Search Traveller's Information\n\t\t\t5) Exit\n\t\t\t6) Menu");

    printf("\n\t\t\tEnter Choice(1-5)");
    label:
    scanf("%d",&option);


	 if(option == 1)
	{
	  system("CLS");
	  b1.hotels();
	}
	 else if(option == 2)
	{
	   system("CLS");
	   c1.cabDetails();
	}
	else if(option== 3)
	{
	   system("CLS");
	   object.terms();
	}

	else if(option==4)
	{
	    system("cls");
	    object.viewreceipt();
	}
	else if(option==5)
	{
	    system("cls");
	    exit(0);
	}
	else if(option==6)
	{
		system("cls");
		object.menu();
	//	object.receipt();
	}
	else if(option==7)
	{
		system("cls");
		//charg.dis();
		object.receipt();
	}

	else
	{
	   printf("\n\n\t\t\tPlease enter the given choice from(1-8)");
	   	//charg.dis();
	   goto label;
	}

//	object.menu();
	//obj.menu();
	return 0;
}
