#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>


using namespace std;
	string Names[20];
	int Registeration_Number[20];
	float CGPA[20];
	int TotalStudents = 0;
	
	void Add_New_User(){
		bool Terminate = false;
		while(!Terminate){
			system("cls");
			int User_Choice;
		
			cout<<"\n \n\t Welcome to the student managment system"<<endl<<endl
			    <<"\t\t1 for Adding new user"<<endl
			    <<"\t\t2 for Back to Menu"<<endl
			    <<"\t\t Choice : ";
			cin>>User_Choice;
			
			if(User_Choice == 1){
				string StudentName;
				int StudentRegisteration_Number;
				int studentCGPA;
				system("cls");
				cout<<"\t Enter The Student Name: ";
				cin>>StudentName;
				cout<<"\t Enter The Student Resisteration Number : ";
				cin>>StudentRegisteration_Number;
				cout<<"\t Enter The Student CGPA : ";
				cin>>studentCGPA;

				Names[TotalStudents] = StudentName;
				Registeration_Number[TotalStudents] = StudentRegisteration_Number;
				CGPA[TotalStudents] = studentCGPA;
				TotalStudents++;

				system("cls");
				cout<<"\t Student Added succefully";
				Sleep(3000);
			}
			else{
				system("cls");
				Terminate = true;
				cout<<"\t Going Back";
				Sleep(3000);
				
			}
	    }
			
		
	}
	
    void Read_User(){
		system("cls");
		int Terminate = false;
		while(!Terminate){
			system("cls");
			cout<<"\t\t1 for Reading all the user"<<endl
			    <<"\t\t2 for Reading a specific Student"<<endl
				<<"\t\t3 for Back to Menu"<<endl
			    <<"\t\t Choice : ";
			int User_Choice;
			cin>>User_Choice;
			
			if(User_Choice == 1){
				system("cls");
				cout<<"\t List of Students "<<endl<<endl;
				for(int i = 0; i < TotalStudents; i++){
					cout<<"\t Name: "<<Names[i]<<" | Registeration Number: "<<Registeration_Number[i]<<" | CGPA: "<<CGPA[i]<<endl;
				}
				cout<<endl<<"\t Press any key to go back";
				getch();
			}
			else if(User_Choice == 2){
				system("cls");
				int Search_Registeration_Number;
				bool Found = false;
				cout<<"\t Enter the Registeration Number of the student: ";
				cin>>Search_Registeration_Number;
				for(int i = 0; i < TotalStudents; i++){
					if(Registeration_Number[i] == Search_Registeration_Number){
						cout<<"\t Name: "<<Names[i]<<" | Registeration Number: "<<Registeration_Number[i]<<" | CGPA: "<<CGPA[i]<<endl;
						Found = true;
						break;
					}
				}
				if(!Found){
					cout<<"\t Student with Registeration Number "<<Search_Registeration_Number<<" not found."<<endl;
				}
				cout<<endl<<"\t Press any key to go back";
				getch();
			}
			else{
				system("cls");
				cout<<"\t Going Back";
				Sleep(3000);
				Terminate = true;
			}
	    }


	}

	void Update_User(){
		 system("cls");
		 int Search_Registeration_Number;
		 bool Found = false;
		 cout<<"\t Enter the Registeration Number of the student to update: ";
		 cin>>Search_Registeration_Number;
		 for(int i = 0; i < TotalStudents; i++){
			 if(Registeration_Number[i] == Search_Registeration_Number){
				 cout<<"\t Name: "<<Names[i]<<" | Registeration Number: "<<Registeration_Number[i]<<" | CGPA: "<<CGPA[i]<<endl;
				 cout<<"\t Enter the new Name: ";
				 cin>>Names[i];
				 cout<<"\t Enter the new CGPA: ";
				 cin>>CGPA[i];
				 Found = true;
				 break;
			 }
		 }
		 if(!Found){
			 cout<<"\t Student with Registeration Number "<<Search_Registeration_Number<<" not found."<<endl;
		 }
		 cout<<endl<<"\t Press any key to go back";
		 getch();

	}

	void  Delete_User(){
		system("cls");
		int Search_Registeration_Number;
		bool Found = false;
		cout<<"\t Enter the Registeration Number of the student to delete: ";
		cin>>Search_Registeration_Number;
		for(int i = 0; i < TotalStudents; i++){
			if(Registeration_Number[i] == Search_Registeration_Number){
				for(int j = i; j < TotalStudents - 1; j++){
					Names[j] = Names[j + 1];
					Registeration_Number[j] = Registeration_Number[j + 1];
					CGPA[j] = CGPA[j + 1];
				}
				TotalStudents--;
				Found = true;
				break;
			}
		}
		if(!Found){
			cout<<"\t Student with Registeration Number "<<Search_Registeration_Number<<" not found."<<endl;
		}
		cout<<endl<<"\t Press any key to go back";
		getch();
	}
	



int main(){	

	bool Terminate = false;
	
	while(!Terminate){
		 system("cls");
		int User_Choice;
	
		cout<<"\n \n\t Welcome to the student managment system"<<endl<<endl
		    <<"\t\t1 for Adding new user"<<endl
		    <<"\t\t2 for Reading all the user"<<endl
		    <<"\t\t3 for Updating a user"<<endl
		    <<"\t\t4 for Deleting a user"<<endl
		    <<"\t\t5 for Termination a user"<<endl
		    <<"\t\t Choice : ";
		cin>>User_Choice;
		
		if (User_Choice == 1) Add_New_User();
		else if (User_Choice == 2) Read_User();
		else if (User_Choice == 3) Update_User();
		else if (User_Choice == 4) Delete_User();
		else if (User_Choice == 5) Terminate = true;
		else {
			system("cls");
			cout<<"\n \n \n \t  \t\t Wrong Choice";
			Sleep(3000);
			system("cls");
		}
   }
	
	
	
}
