#include <iostream>

using namespace std;

#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
class vehicle_info;
class Time{
	
protected:
		int minutes, hour;
		
		public:
	Time(){
			
			minutes;
			hour ;
		}
		virtual void display()=0;
	int get_hour(){
			cout<< endl << endl << endl << "                                                    Enter hour: ";
			cin >> hour;
		}
	int get_minutes(){
			cout <<endl<< endl<< "                                                    Enter Minutes: ";
			cin >> minutes;
		}
	void set_info(){
		ofstream f1;
		f1.open("TIME.txt",ios::app);
		f1<<hour;
		f1<<minutes;
		
	}
		
};


class bike_info:  virtual public Time {
	
	private:
	string model_name, colour, dm;
		int model_no, reg_no;
		float count;
	public:
		int bno;
		int l2;
			
			bike_info(){
				 model_name;
				 colour;
				  dm;
				 model_no; 
				 reg_no;
				 count;
			}
			
			void get_model_name(){
				
				cout <<"\n\n\t\t\t ...............ENTER DETAILS.............\n\n\n ";
				cout << ".......................Driver's Name: ";
				cin >>dm;
				cout << ".......................Model Name: ";
				cin >> model_name;
				cout<<".........................Enter bike no: ";
				cin>>bno;
				cout<<".........................Enter hours of stay: ";
				cin>>count;
				
			}
			void get_colour(){
				
				cout << ".......................Colour: ";
				cin >> colour;
			}
			int get_model_no(){
				cout << ".......................Model Number: ";
				cin >> model_name;
			}
			int get_reg_no(){
				int d;
				cout << ".......................Registration Number: ";
				cin >> reg_no;
			
			if(d<20&&count<8)
   			{
   				cout<<"\n\n\t\tParking Available! You can park your car. ";
   			}
   			else
   				cout<<"\n\n\t\t Parking not possible!!";
   			cout<<"\n\n\t\tCar got parked!!";
   		}
   		
			void display(){
				cout << "                  Model Name: " << model_name << endl;
				
				cout << "                  Colour: " << colour << endl;
				
				cout << "                  Model Number: " << model_no << endl;
				
				cout << "                  Registration Number: "	 << reg_no << endl;
				cout <<"                   Bike No: " << bno << endl;
			}
			void cal()
	{
		char x;
		
			
		cout<<"\n\t\n\tAre you a V.I.P: y/n ";
		cin>>x;
		if(x=='y')
	{
		system("CLS");
		cout<<"\n\t\n\tThe total expense during parking  ";
		cout<<count*20<<" rupees";
	}
	else 
	{
		system("CLS");
		cout<<"\n\t\n\tThe total expenses during parking  ";
		cout<<count*25<<" rupees";
		
	}
}	
	void output()
	{
		
		cout<<"\n\n\t\tThe Driver Name : "<<dm<<endl;
	    cout<<"\n\n\t\tVehicle No:"<< bno<<endl;
		cout<<"\n\n\t\tThe Hours Of Stay : " <<count;
		cout<<"\n\n\t\tThe Time Slot Of Parking : " <<l2;
		cout <<"\n\n\t\tVBike No: "<< bno;
	
	}
	void set_vehicle(ofstream &file){
				file.open("BIKE.txt",ios::app);
				file<<"BIKE INFO: "<<dm<<endl<<colour<<endl<<model_name<<endl<<reg_no<<endl;
			}			
		friend void delete_record(bike_info b);
};

class vehicle_info: virtual public Time{
	
	protected:
		
		 char model_name[100], colour[100], dm[100],l[100];
		int model_no, reg_no;
		
		float count;
		
		public:
			int l1;
			int vno1;
			
			vehicle_info(){
				model_name[100];
				 colour[100];
				  dm[100];
				  l[100];
				model_no;
				reg_no;
			}


			void get_model_name(){
				
				
				cout <<"\n\n\t\t\t ...............ENTER DETAILS.............\n\n\n ";
				cout << ".......................Driver's Name: ";
				cin >>dm;
				cout << ".......................Model Name: ";
				cin >> model_name;
				cout <<"........................The Hours Of Stay:";
				cin >> count;
				cout <<"........................Vehicle No:";
				cin >> vno1;
				cout << ".......................The Slot Of Parking :";
				cin >>l1;
				
			}
			
			void get_colour(){
				
				cout << ".......................Colour: ";
				cin >> colour;
			}
			int get_model_no(){
				cout << ".......................Model Number: ";
			   cin >> model_no;
			}
			int get_reg_no(){
				int d;
				cout << ".......................Registration Number: ";
				cin >> reg_no;
				if(d<20&&count<8)
   			{
   				cout<<"\n\n\t\tParking Available! You can park your car. "  << endl<<endl;
   			}
   			else
   				cout<<"\n\n\t\t Parking not possible!!";
   			cout<<"\n\n\t\tCar got parked!!";
   		}
			
			void display(){
				cout << "                  Model Name: " << model_name << endl;
				
				cout << "                  Colour: " << colour << endl;
				
				cout << "                  Model Number: " << model_no << endl;
				
				cout << "                  Registration Number: "	 << reg_no << endl;
				cout << "                  Vehicle No: " <<vno1 <<endl;
			}
	void cal()
	{
		char x;
		
			
		cout<<"\n\t\n\tAre you a V.I.P: y/n ";
		cin>>x;
		if(x=='y')
	{
		system("CLS");
		cout<<"\n\t\n\tThe total expense during parking  ";
		cout<<count*20<<" rupees";
	}
	else 
	{
		system("CLS");
		cout<<"\n\t\n\tThe total expenses during parking  ";
		cout<<count*25<<" rupees";
		
	}
}	
	void output()
	{
		
		cout<<"\n\n\t\tThe Driver Name : "<<dm<<endl;
	    cout<<"\n\n\t\tVehicle No:"<< vno1<<endl;
		cout<<"\n\n\t\tThe Hours Of Stay : " <<count;
		cout<<"\n\n\t\tThe Time Slot Of Parking : " <<l1;
	
	}
			void set_vehicle(ofstream &file){
				file.open("CAR.txt",ios::app);
				file<<"CAR INFO: "<<endl<<dm<<endl<<colour<<endl<<model_name<<endl<<reg_no<<endl;
			}
			friend int delete_record(vehicle_info);
}a;

class owner_info: public vehicle_info, public bike_info{
	
	private:
		string name;
		string license;
	public:
		ofstream f1;
		ifstream f2;
		owner_info(string n, string l){
			n=name;
			l=license;
		}
		int getname(){
			cout<<"Enter your name: ";
			cin>>name;
		}
		void getlicense(){
			cout<<"Enter your license: ";
			cin>>license;
		}
		void set_info(){
			
        	f1.open("owner_info.txt",ios::app);
        	f1<<"FOLLOWING ARE THE OWNERS' INFORMATION : "<<endl<<name<<endl<<license<<endl;
        	f1.close();
		}
		void display(){
			string li;
			//cout<<"OWNER INFORMATION: "<<endl<<name<<endl<<license<<endl;
			cout<<"ENTER THE LICENSE: ";
			cin>>li;
			getline(f2,license);
			f2.open("owner_info.txt",ios::ate);
			while(!f2.eof()){
			f2.read((char*)&license, sizeof(license));
			if("li"=="license")
			
			 cout<<"OWNER INFO: "<<endl<<name<<endl;
			else cout<<"WRONG INPUT: ";
}
            getline(f2,license);
		}
		
};
class parking_lot{
	
	private:
		
		int lots[100][100];
		int total_lots ;
		int hour,count;
		public:
			 
			 void getlots(){
			 	int i, j, n;
			 	
			 	cout << "\n\n\n                                       Total lots in parking lot are " << total_lots <<"\n\n";
			 	cout << "\n\n                                         Number of lots available: ";
			 	cin >>n;
			 	
			 
			 if(hour<7 && n<100 && n!=0){
			 	
			 	cout<<"\n\n\t\t\t\tParking Available! You can park your car. ";
			 	system ("CLS");
			 	
			 }
			 else {
			 	
			 	cout<<"\n\n\t\t Parking not possible!!";
   			cout<<"\n\n\t\tCar got parked!!";
   			system ("CLS");
   		 
			 }
		}
            void set_info(ofstream &file){
            	file.open("parking_lots.txt",ios::app);
            	file<<"lots: "<<total_lots;
			}		
};
int login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tCar Parking Reservation System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      
   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   
}
 void   delete_record(vehicle_info a, bike_info b)
{
  	int  n, j;
	system("CLS");
	cout<<"\n\n\n\t\t\tdo you have a car(1) or bike(2)";
	cin>>j;
	if(j==1){
		
	system("CLS");
	cout<<"\n\n\t\tEnter the car no you want to get depart : ";
	cin>>n;
	ifstream inFile;
    inFile.open("parking3.dat", ios::binary);
	ofstream outFile;
    outFile.open("temp.dat", ios::out | ios::binary);
    while(inFile.read((char*)&a, sizeof(a)))
    {
        if(a.vno1!= n)
        {	
        	
            outFile.write((char*)&a, sizeof(a));
        }
         
    }
    cout<<"\n\n\t\t Parking Record Deleted";

    inFile.close();
    outFile.close();
    
    remove("parking3.dat");
    rename("temp.dat", "parking3.dat");
	}
	else if(j==2){
		
		cout<<"\n\n\t\tEnter the bike no you want to get depart : ";
	cin>>n;
	
	ifstream inFile;
    inFile.open("parking3.dat", ios::binary);
	ofstream outFile;
    outFile.open("temp.dat", ios::out | ios::binary);
    while(inFile.read((char*)&a, sizeof(a)))
    {
        if(b.bno!= n)
        {	
        	
            outFile.write((char*)&a, sizeof(a));
        }
         
    }
    cout<<"\n\n\t\t Parking Record Deleted";

    inFile.close();
    outFile.close();
    
    remove("parking3.dat");
    rename("temp.dat", "parking3.dat");
}
}
int main(){ 
	int login(), choice;
	login();
	system("CLS");
	int l [100][100], n, r;
	char m[100], c[100];
   
   parking_lot p;
   vehicle_info  V;
   bike_info b;
   
   while(1){
   system("CLS");
   cout << "                     \n\n\n              .............................. CAR PARKING LOGIN SYSTEM........................" << endl;
   cout <<"\n\n                                          ";
     cout<<" \n\t\t\t======================";
     cout << "\n\n\t\t\t  0. owner info: ";
     cout << "\n\n\t\t\t  1. Arrival of a Car";
     cout << "\n\n\t\t\t  2. Arrival of a Bike";
     cout << "\n\n\t\t\t  3. Total no of cars Arrived";
     cout << "\n\n\t\t\t  4. Total no of Bikes Arrived";
     cout << "\n\n\t\t\t  5. Total parking charges of all cars with details";
     cout << "\n\n\t\t\t  6. Departure of the car";
     cout << "\n\n\t\t\t  7. Exit Program";
     cout<<" \n\t\t\t======================";
     cout << "\n\n";
     cout << "\t\t\t Select Your Choice ::";
     cin>>choice;
     p;
     int y;
     switch(choice)
     {
     	case 0:
     		{
     				owner_info obj1("shaheer","21awe");
                	obj1.getname();
	                obj1.getlicense();
                	obj1.set_info();
                	cout<<"do you want to see owner info: ";
                	cin>>y;
                	if(y==1)
                 	obj1.display();
                    else continue;          
			 }
     	case 1:
     		
     		{
     			char f;
        		cout<<"\n\n\t\t==Do You Want to continue==y/n ";
        		cin>>f;
        		system("CLS");
        		if(f=='y')
        		{
        			 ofstream f1;
        			
    
             f1.open("vehicle_info.txt",ios::app);
                V.get_model_name();
                V.get_colour();
                V.get_model_no();
                V.get_reg_no();
                
                f1.write((char*)&V,sizeof(V));
                cout << endl;
               
                system("PAUSE");
            }
     break;
    
			 }
			 case 2:
			 	{
     			char f;
        		cout<<"\n\n\t\t==Do You Want to continue==y/n ";
        		cin>>f;
        		system("CLS");
        		if(f=='y')
                {
    
                ofstream file("bike_info.txt",ios::app);
                    b.set_vehicle(file);
                    //file<<b.dm<<endl<<b.colour<<endl;
			 		b.get_hour();
                    b.get_minutes();
                    system ("CLS");
			 		b.get_model_name();
			 		b.get_colour();
                    b.get_model_no();
                    b.get_reg_no();
                    p.getlots();
				 }
		//		 f1.write((char*)&b,sizeof(b));  
                cout << endl;
               
                system("PAUSE");
            }
     break;
				 case 3:
				 {
				 	
           	system("CLS");
  		   cout << "\n\n\t\t=== View the Records in the Parking Database ===";
           cout << "\n";
           ifstream infile("vehicle_info.txt",ios::in);
           int d=1;
           
           while (infile.read((char *)&V,sizeof (V)))
		   {
		system("CLS");
           cout << "\n";
           cout<<"\n\n\tThe Car position in parking lot : "<<d;
           d++;
           cout << endl<< endl<<endl;
            V.display();
           cout<<"\n";
           cout<<"\n\n\n";
           system("PAUSE");
           cout<<endl;
       	   }
       
           break;
       	   
				 }
				 case 4:
				 	{
				 		system("CLS");
  		   cout << "\n\n\t\t=== View the Records in the Parking Database ===";
           cout << "\n";
           ifstream infile("bike_info.txt",ios::in);
           int d=1;
           
           while (infile.read((char *)&b,sizeof (b)))
		   {
		system("CLS");
           cout << "\n";
           cout<<"\n\n\tThe bike position in parking lot : "<<d;
           d++;
           cout << endl<< endl<<endl;
            b.display();
           cout<<"\n";
           cout<<"\n\n\n";
           system("PAUSE");
           cout<<endl;
       	   }
       
           break;
       	   
					 }
					 case 5:
					 	{
					 		char f;
					 		int n;
        		cout<<"\n\n\t\t==Do You Want to continue==y/n ";
        		cin>>f;
        		system("CLS");
        		if(f=='y')
					 		{
					 			cout << "\n\n\n\t\t\tPRESS 1 FOR BIKE CHARGES.........."<<endl;
							    cout <<endl<<"\n\n\t\t\tPRESS 2 FOR CAR CHARGES........";
							    cin >> n;
					 			if(n==1){
					 				 ofstream file("bike_info.txt",ios::app);
                                     b.set_vehicle(file);
					                 b.cal();
					 				b.output();
								 }
								 else if(n==2)
								 {
								 	ofstream file("vehicle_info.txt",ios::app);
                                     V.set_vehicle(file);
					                 
								 	V.cal() ;
					 		       V.output();
					 		    
					 		getch();
								 }
						 }
						 break;
	 }
	                case 6:
	                	{
	                		system("cls");
	                		delete_record(a, b);
	                		getch();
	                		break;
						}
						case 7:
							 
		   {
		   	system("CLS");
		
		   	cout<<"\n\n\n\t\t\tCode written by Owais Ali and Shaheer ashraf \n";
		   	cout <<"\n\n\n\t\t\t.......THANK YOU......";
		   	getch();
		   exit(0);
   			break;
   		}
   		default : 
		   {
		   cout<<"\n\n\t\t Invalid input";
			cout<<"\n\n\t\tPress Enter to continue";
   
}
}
getch();
}}





