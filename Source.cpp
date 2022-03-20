#include <iostream>
#include <fstream>
#include "Text_Editor.h"
#include <cmath>
#include <string>
using namespace std;

 void Add(Text_Editor t);
 void Insert(Text_Editor t);
 void Get(Text_Editor t);
 void Update(Text_Editor t);
 void Delete(Text_Editor t);
 void FindAll(Text_Editor t);
 void FindReplace(Text_Editor t);
 void Display(Text_Editor t);
 void menu(Text_Editor t);
 void customization(Text_Editor t);

int main()
{
	Text_Editor t;
	menu(t);

	return 0;
}

 void Add(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Add Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 string s;
	cout << "Please Add Your Line Here: ";
	getline(cin>>ws, s);
	t.Add_Line(s);
	
	customization(t);
}
 void Insert(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Insert Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int x; string s1;
	cout << "Please To Insert Your Line Write Your Index Here: ";
	cin >> x;
	cout << "Please To Insert Your Line Write Your Text Here: ";
	//cin.ignore();
	getline(cin>>ws, s1);
	t.Insert_Line(x, s1);

	customization(t);
}
 void Update(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Update Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int c; string s2;
	cout << "Please To Update Your Line Write Your Index Here: ";
	cin >> c;
	cout << "Please To Update Your Line Write Your Text Here: ";
	//cin.ignore();
	getline(cin>>ws, s2);
	t.Update_Line(c, s2);

	customization(t);

}
 void Get(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Get Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int z;
	cout << "Please To Get Your Line Write Your Index Here: ";
	cin >> z;
	string result=t.Get_Line(z);
	cout << "Your Line is \" " << result << " \"...\n";

	customization(t);
}
 void Delete(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Delte Line Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	int v;
	cout << "Please To Delete Your Line Write Your Index Here: ";
	cin >> v;
	t.Delete_Line(v);

	customization(t);
}
 void FindAll(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Find All Texts Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	string s3;
	cout << "To Find Your Text in All Indexs Please Write Your Text Here: ";
	//cin.ignore();
	getline(cin>>ws, s3);
	t.FindAll(s3);

	customization(t);
}
 void FindReplace(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Find and Replace Text Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	string s4, s5;

		cout << endl;
		cout << "Please Enter Your Old Text Here: ";
		getline(cin>>ws, s5);
		cout << "Please Enter Your New Text Here: ";
		getline(cin>>ws, s4);
		t.Find_Replace(s4, s5);

		customization(t);
}
 void Display(Text_Editor t)
{
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t\t   Display All Lines Operation\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	t.Display();
	customization(t);
}
 void Load(Text_Editor t)
 {
	 system("cls");
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 cout << "\t\t\t\t\t\t   Load All Lines Operation\n\n";
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 t.Load_Lines();

	 customization(t);
 }	
 void Save(Text_Editor t)
 {
	 system("cls");
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 cout << "\t\t\t\t\t    Save All Lines Operation\n\n";
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 t.Save_Lines();
								 
	 customization(t);
 }																  
 void ClearConsle(Text_Editor t)
 {
	 system("cls");
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 cout << "\t\t\t\t\t    Clear All Data From The Consle\n\n";
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 t.Clear_Consle();
	 customization(t);
 }	
 void ClearFile(Text_Editor t)
 {
	 system("cls");
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 cout << "\t\t\t\t\t    Clear All Data From The File\n\n";
	 cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	 t.Clear_File();
	 customization(t);
 }
 void menu(Text_Editor t)
{
	system("cls");
	 int x;
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\t\t\t\t\t      Welcome To Mini Tex Editor\n\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "1. To Add a line \n";
	cout << "2. To Insert a line \n";
	cout << "3. To get Your Line By Index \n";
	cout << "4. To Update a line By Index \n";
	cout << "5. To Delete Your line By Index \n";
	cout << "6. To Find Your Text in All Lines And Display The Indexs \n";
	cout << "7. To Find Your Text And Replace it With New \n";
	cout << "8. To Display Your All Lines\n";
	cout << "9. To Load Your All Lines You Enterd Before\n";
	cout << "10. To Save Your All Lines You Enterd\n";
	cout << "11. To Clear Your All Data From The Consle\n";
	cout << "12. To Clear Your All Data From The File\n";
	cout << endl;
	cout << "Please Choose Your Number From The Previous Options: ";
	cin >> x;
	switch (x)
	{
	case 1:
		Add(t);	break;
	case 2:
		Insert(t);	  break;
	case 3:
		Get(t); break;
	case 4:
		Update(t); break;
	case 5:
		Delete(t); break;
	case 6:
		FindAll(t);
	case 7:
		FindReplace(t);	 break;
	case 8:
		Display(t);	 break;
	case 9:
		Load(t);
		break;
	case 10:
		Save(t);
		break;
	case 11:
		ClearConsle(t);
		break;
	case 12:
		ClearFile(t);
		break;
	default:
		break;
	}
}
 void customization(Text_Editor t)
{
	cout << endl;
	int i;
	cout << " 1. To Back To The Main Menu...\n";
	cout << " 2. To Exit From The Application...\n";
	cout << endl;
	cout << "Please Choose Your Number From The Previous Options: ";
	cin >> i;
	switch (i)
	{
	case 1:
		menu(t);
	case 2:
		exit(0);
	default:
		break;
	}
}