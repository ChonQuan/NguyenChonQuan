#include "UI.h"

void UI::Display(LibraryObjectData* libraryobjectdata) {
    for(int i = 0; i<libraryobjectdata->GetSize();i++){
        LibraryObject* libraryobject = libraryobjectdata->GetPointer(i);
        cout << libraryobject->ToString() << endl;
    }   
}
void UI::SaveFile(string filename) {
    mkdir(("BackUpData/"+filename).c_str());
    _memberdata.ExportToFile("BackUpData/"+filename+"/Member.txt");
    _bookdata.ExportToFile("BackUpData/"+filename+"/Book.txt");
    _borrowreturndata.ExportToFile("BackUpData/"+filename+"/BorrowReturn.txt");
}
vector<string> UI::GetBackUpName() {
    ifstream infile("BackUpData/BackUpName.txt");
    vector<string> backupname;
    string temp;
    while(getline(infile,temp)) {
        backupname.push_back(temp);
    }
    infile.close();
    return backupname;
}
void UI::SaveFileName(string filename) {
    vector<string> backupname = GetBackUpName();
    ofstream outfile("BackUpData/BackUpName.txt",ios::app);
    bool check = true;
    for(string temp:backupname) {
        if(filename == temp) {
            check = false;
            break;
        }
    }
    if(check) {
        outfile << filename << endl;
    }
}
void UI::RestoreData(string filename) {
    _memberdata.Read("BackUpData/"+filename+"/Member.txt");
    _bookdata.Read("BackUpData/"+filename+"/Book.txt");
    _borrowreturndata.Read("BackUpData/"+filename+"/BorrowReturn.txt");
}
void UI::QuestionMenu() {
    system("cls");
    do{
        cout << "Menu\n";
        cout << "1.CRUD\n";
        cout << "2.Save\n";
        cout << "3.Restore\n";
        cout << "0.Exit\n";
        int k;
        cout << "your choice ";
        cin >> k; cin.ignore();
        switch(k) {
            case 1:
                SheetMenu();
                break;
            case 2:
            {
                cout << "The data will be saved into the backupdata folder\n";
                cout << "You will be ask for enter the name folder you want to save data!\n";
                cout << "If the name folder existed in the backupname, it will be overwrited!\n";
                cout << "Enter the name folder you want to save : ";
                string filename;
                getline(cin,filename);
                SaveFile(filename);
                SaveFileName(filename);
                system("pause");
            }
                break;
            case 3:
            {
                cout << "The list of the backup folder name \n";
                vector<string> backupname = GetBackUpName();
                for(int i =0; i<backupname.size();i++) {
                    cout << i << " " << backupname[i] << endl;
                }
                cout << "Enter the order number of folder you want to restore : ";
                int temp;
                cin >> temp ; cin.ignore();
                RestoreData(backupname[temp]);
                Display(&_memberdata);
                system("pause");
                Display(&_bookdata);
                system("pause");
                Display(&_borrowreturndata);
                system("pause");
            }
                break;
            case 0:
                exit(0);
            default:
            cout << "Ban nhap sai";
            break;
        }
    system("cls");
    } while(1);
}
void UI::SheetMenu() {
    system("cls");
    bool check = true;
    do {
        cout << "1.Member\n";
        cout << "2.Book\n";
        cout << "3.BorrowReturn\n";
        cout << "4.Return\n";
        cout << "0.Exit\n";
        int k;
        cout << " your choice :";
        cin >> k; cin.ignore();
        switch(k) {
            case 1:
                CRUDMenu(k);
                break;
            case 2:
                CRUDMenu(k);
                break;
            case 3:
                CRUDMenu(k);
                break;
            case 4:
                check = false;
                system("pause");
                break;
            case 0:
                exit(0);
            default:
                break;
        }
    system("cls");
    } while(check);
}
void UI::CRUDMenu(int& k) {
    system("cls");
    bool check = true;
    do {
        cout << "1.Create\n";
        cout << "2.Update\n";
        cout << "3.Delete\n";
        cout << "4.Read from file\n";
        cout << "5.Return\n";
        cout << "0.Exit\n";
        int i;
        cout << " your choice :";
        cin >> i; cin.ignore();
        switch(i) {
            case 1:
                if(k==1){
                    Member member;
                    cin >> member;
                    _memberdata.Create(member);
                    Display(&_memberdata);
                }
                else if(k==2) {
                    Book book;
                    cin >> book;
                    _bookdata.Create(book);
                    Display(&_bookdata);
                }
                else if(k==3) {
                    BorrowReturn borrowreturn;
                    cin >> borrowreturn;
                    _borrowreturndata.Create(borrowreturn);
                    Display(&_borrowreturndata);
                };
                system("pause");
                break;
            case 2:
                if(k==1){
                    int p;
                    cout << "Update position : ";
                    cin >> p;  cin.ignore();                  
                    Member member;
                    cin >> member;
                    _memberdata.Update(p,member);
                    Display(&_memberdata);
                }
                else if(k==2) {
                    int p;
                    cout << "Update position : ";
                    cin >> p;cin.ignore();
                    Book book;
                    cin >> book;
                    _bookdata.Update(p,book);
                    Display(&_bookdata);
                }
                else if(k==3) {
                    int p;cin.ignore();
                    cout << "Update position : ";
                    cin >> p;
                    BorrowReturn borrowreturn;
                    cin >> borrowreturn;
                    _borrowreturndata.Update(p,borrowreturn);
                    Display(&_borrowreturndata);
                };
                system("pause");
                break;
            case 3:
                if(k==1){
                    int p;
                    cout << "Delete position : ";
                    cin >> p; cin.ignore();
                    _memberdata.Delete(p); 
                    Display(&_memberdata);            
                }
                else if(k==2) {
                    int p;
                    cout << "Delete position : ";
                    cin >> p; cin.ignore();
                    _bookdata.Delete(p);  
                    Display(&_bookdata); 
                }
                else if(k==3) {
                    int p;
                    cout << "Delete position : ";
                    cin >> p; cin.ignore();
                    _borrowreturndata.Delete(p); 
                    Display(&_borrowreturndata);  
                };
                system("pause");
                break;
            case 4:
                if(k==1){
                    _memberdata.Read("Data/Member.txt");
                    Display(&_memberdata);
                }
                else if(k==2) {
                    _bookdata.Read("Data/Book.txt");
                    Display(&_bookdata);
                }
                else if(k==3) {
                    _borrowreturndata.Read("Data/BorrowReturn.txt");
                    Display(&_borrowreturndata);
                };
                system("pause");
                break;
            case 5:
                check = false;
                system("pause");
                break;
            case 0:
                exit(0);
            default:
                break;
        }
    system("cls");
    } while(check);
}