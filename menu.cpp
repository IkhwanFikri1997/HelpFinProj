#include "menu.hpp"
using namespace std;

void menu::NewDocument(){
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> Input.file;
	cin.ignore();
	Input.Myfile.open(Input.file);
	do{
		getline(cin,Input.text);
		Input.Myfile << Input.text <<endl;
	}while(Input.text!="end");
	cout << "file saved" << endl;
	Input.Myfile.close();
}

void menu::OpenDocument(){
	cout << "===============Open Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file, ios_base::in);
	while(getline(Input.Mfile, Input.line)){
		cout << Input.line << endl;
		}
}

void menu::EditDocument(){
	cout << "===============Edit Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Myfile.open(Input.file, ios_base::ate);
	cin.ignore();
	do{
		getline(cin,Input.text);
		Input.Myfile << Input.text <<endl;
	}while(Input.text!="end");
	cout << "file saved" << endl;
	Input.Myfile.close();
}

void menu::FindWords(){
	int i;
	int count=0;
	cout << "===============Find Words================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file);
	string text[count];
	while(Input.Mfile >> Input.word){
		count++;
	}
	
	//Input.Mfile.clear();
	/*
	Input.Mfile.seekg(0, ios::beg);
	for (int i=0;i<count;i++){
		Input.Mfile>>text[i];
		cout<<text[i]<<" ";
	}
	*/
}

	
