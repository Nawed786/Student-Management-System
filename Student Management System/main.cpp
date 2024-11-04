#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void addStudents(){
 ofstream file("students.txt", ios::app);
 if(!file){
  cout << "Error opening file."<< endl;
  return ;
 }

 string name;
 int roll;
 string grade;

 cout << "Enter the Student name: ";
 cin.ignore();
 getline(cin,name);

 cout << "Enter roll no: ";
 cin >> roll;

 cout << "Enter the grade: ";
 cin >> grade;

 file << name << "," << roll << "," << grade << endl;
 cout << "Student record added sucessfully."<< endl;
 
 file.close();
}

void viewStudents(){
  ifstream file("students.txt");
  if(!file){
    cout << "Error opening file." << endl;
    return;
  }

  string line;

  cout << "------- Students Information-----------"<<endl;
  while(getline(file,line)){
    cout << line << endl;
  }

  cout << "--------------------------------------------"<<endl;
  file.close();
}

void deleteStudents(){
  ofstream file("students.txt",ios::trunc);
  if(!file){
    cout << "Error opening file. " << endl;
    return;
  }

  cout << " File deleted sucessfully. "<< endl;

  file.close();
}

int main(){
  int choice;
  do
  {
    cout << "\n Student Management System "<<endl;
    cout << "1. Add Student Information. " << endl;
    cout << "2. View Student Information. " << endl;
    cout << "3. Delete Student Information. " << endl;
    cout << "4. Exist "<<endl;
    cout << " Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      addStudents();
      break;

    case 2:
      viewStudents();
      break;

    case 3:
      deleteStudents();
      break;

    case 4:
      cout << "Existing program goodBye." <<endl;
      break;
    
    default:
     cout << "Invalid choice. Please try again. "<<endl;
     
    }

  } while (choice !=4 );
  
  
  return 0;
 // code written by Nawed Ahmad email: ahmadnawed796@gmail.com
}
