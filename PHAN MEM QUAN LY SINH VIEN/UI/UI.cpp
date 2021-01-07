#include "UI.h"

void UI::Display(StudentObjectData* studentobjectdata) {
    for (int i = 0; i < studentobjectdata->GetSize(); i++) {
        StudentObject* studentobject = studentobjectdata->GetPointer(i);
        cout << studentobject->ToString() << endl;
    }
}
void UI::SaveFile(string foldername) {
    mkdir(("BackUpData/"+foldername).c_str());
    _studentdata.ExportToFile("BackUpData/"+foldername+"/Student.txt");
    _subjectdata.ExportToFile("BackUpData/"+foldername+"/Subject.txt");
    _markdata.ExportToFile("BackUpData/"+foldername+"/Mark.txt");
}
vector<string> UI::GetBackUpName() {
    vector<string> backupname;
    ifstream infile("BackUpData/BackUpName.txt");
    string temp;
    while(getline(infile,temp)) {
        backupname.push_back(temp);
    }
    infile.close();
    return backupname;
}
void UI::SaveFolderName(string foldername) {
    bool check = true;
    vector<string> backupname = GetBackUpName();
    for(string temp:backupname) {
        if (temp == foldername) {
            check = false;
            break;
        }
    }
    if (check) {
        ofstream outfile("BackUpData/BackUpName.txt",ios::app);
        outfile << foldername << endl;
        outfile.close();
    }
}
void UI::RestoreFile(string foldername) {
    _studentdata.Read("BackUpData/"+foldername+"/Student.txt");
    _subjectdata.Read("BackUpData/"+foldername+"/Subject.txt");
    _markdata.Read("BackUpData/"+foldername+"/Mark.txt");
}
void UI::QuestionMenu() {
    system("cls");
    do {
        cout << "Question Menu\n";
        cout << "1.CRUD\n";
        cout << "2.Save File\n";
        cout << "3.Restore from folder\n";
        cout << "0.Exit\n";
        cout << " Your choice : ";
        int i;
        cin >> i; cin.ignore();
        switch(i) {
            case 0:
                exit(0);
            case 1:
                SheetMenu();
                break;
            case 2:
            {
                cout << "The data will be saved in the back up folfer\n";
                cout << "You will be asked for enter the folder name and the data will be saved in this folder\n";
                cout << "If the folder name existed, the data will be overwrited\n";
                cout << "If the folder name will be save in the BackUpName.txt file\n";
                cout << "Enter name folder you want to save \n" ;
                string foldername;
                getline(cin,foldername);
                SaveFile(foldername);
                SaveFolderName(foldername);
            }
                break;
            case 3:
                {
                    string foldername;
                    cout << "the list of the folder name in the BackUpData folder \n";
                    vector<string> backupname = GetBackUpName();
                    for (int i = 0; i < backupname.size(); i++) {
                        cout << i << " " << backupname[i] << endl;
                    }
                    int choice;
                    cout << "Enter the ordial number of folder name you want to get data : \n";
                    cin >> choice; cin.ignore();
                    RestoreFile(backupname[choice]);
                    Display(&_studentdata);
                    system("pause");
                    Display(&_subjectdata);
                    system("pause");
                    Display(&_markdata);
                    system("pause");
                }
                break;
            case 4:
                break;
            default:
                break;
        }
        system("cls");
    } while(1);
}
void UI::SheetMenu() {
    system("cls");
    bool check = true;
    do {
        cout << "SheetMenu\n";
        cout << "1.Student\n";
        cout << "2.Subject\n";
        cout << "3.Mark\n";
        cout << "4.Return\n";
        cout << "0.Exit\n";
        cout << " Your choice : ";
        int i;
        cin >> i; cin.ignore();
        switch(i) {
            case 0:
                exit(0);
            case 1:
                CRUDMenu(i);
                break;
            case 2:
                CRUDMenu(i);
                break;
            case 3:
                CRUDMenu(i);
                break;
            case 4:
                check = false;
                break;
            default:
                break;
        }
        system("cls");
    } while(check);
}
void UI::CRUDMenu(int k) {
    system("cls");
    bool check = true;
    do {
        cout << "Menu CRUD\n";
        cout << "1.Create\n";
        cout << "2.Update\n";
        cout << "3.Delete\n";
        cout << "4.Read from file\n";
        cout << "5.Return\n";
        cout << "0.Exit\n";
        cout << " Your choice : ";
        int i;
        cin >> i; cin.ignore();
        switch(i) {
            case 0:
                exit(0);
            case 1:
                if (k == 1) {
                    Student student;
                    cin >> student;
                    _studentdata.Create(student);
                    Display(&_studentdata);
                    system("pause");
                }
                else if (k == 2) {
                    Subject subject;
                    cin >> subject;
                    _subjectdata.Create(subject);
                    Display(&_subjectdata);
                    system("pause");
                }
                else if (k == 3) {
                    Mark mark;
                    cin >> mark;
                    _markdata.Create(mark);
                    Display(&_markdata);
                    system("pause");
                }
                break;
            case 2:
                if (k == 1) {
                    int id;
                    cout << "Enter the position you want to update : ";
                    cin >> id; cin.ignore();
                    Student student;
                    cin >> student;
                    _studentdata.Update(id,student);
                    Display(&_studentdata);
                    system("pause");
                }
                else if (k == 2) {
                    int id;
                    cout << "Enter the position you want to update : ";
                    cin >> id; cin.ignore();
                    Subject subject;
                    cin >> subject;
                    _subjectdata.Update(id,subject);
                    Display(&_subjectdata);
                    system("pause");
                }
                else if (k == 3) {
                    int id;
                    cout << "Enter the position you want to update : ";
                    cin >> id; cin.ignore();
                    Mark mark;
                    cin >> mark;
                    _markdata.Update(id,mark);
                    Display(&_markdata);
                    system("pause");
                }
                break;
            case 3:
                if (k == 1) {
                    int id;
                    cout << "Enter the position you want to delete : ";
                    cin >> id; cin.ignore();
                    _studentdata.Delete(id);
                    Display(&_studentdata);
                    system("pause");
                }
                else if (k == 2) {
                    int id;
                    cout << "Enter the position you want to delete : ";
                    cin >> id; cin.ignore();
                    _subjectdata.Delete(id);
                    Display(&_subjectdata);
                    system("pause");
                }
                else if (k == 3) {
                    int id;
                    cout << "Enter the position you want to delete : ";
                    cin >> id; cin.ignore();
                    _markdata.Delete(id);
                    Display(&_markdata);
                    system("pause");
                }
                break;
            case 4:
                if (k == 1) {
                    _studentdata.Read("Data/Student.txt");
                    Display(&_studentdata);
                    system("pause");
                }
                else if (k == 2) {
                    _subjectdata.Read("Data/Subject.txt");
                    Display(&_subjectdata);
                    system("pause");
                }
                else if (k == 3) {
                    _markdata.Read("Data/Mark.txt");
                    Display(&_markdata);
                    system("pause");
                }
                break;
            case 5:
                check = false;
                break;
            default:
                break;
        }
        system("cls");
    } while(check);
}