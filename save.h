#ifndef save_h
#define save_h
using namespace std;

// Declaring all the functions used in this header.

void saveToFile(), saveCurrentToFile(), loadFile(), loadLocation(), resetSave(), mainMenu(), easy1(), easy1a(), easy1b(), easy1c(), easy1d(), easy2(), easy2a(), easy2b(), easy3(), easy3a(), easy3b(), easy4(), easy4fight(), easy4fighta(), easy5(), easy6();
int coins = 0;

// Defining the save function that saves all you progress.
class save{
  public:
    bool Room1 = false;
    bool Room1a = false;
    bool Room1b = false;
    bool Room1c = false;
    bool Room1d = false;
    bool Room2 = false;
    bool Room2a = false;
    bool Room2b = false;
    bool Room3 = false;
    bool Room3a = false;
    bool Room3b = false;
    bool Room4 = false;
    bool Room4fight = false;
    bool Room4fighta = false;
    bool Room5 = false;
    bool Room6 = false;
    bool Sack1 = false;
    bool Lockpick = false;
    bool Excalibur = false;
    bool Armor = false;
    int Coins = 0;
    save(bool s1, bool s1a, bool s1b, bool s1c, bool s1d, bool s2, bool s2a, bool s2b, bool s3, bool s3a, bool s3b, bool s4, bool s4f, bool s4fa, bool s5, bool s6, bool sack1, bool lockpick, bool sword, bool armor, int coins){
      this->Room1 = s1;
      this->Room1a = s1a;
      this->Room1b = s1b;
      this->Room1c = s1c;
      this->Room1d = s1d;
      this->Room2 = s2;
      this->Room2a = s2a;
      this->Room2b = s2b;
      this->Room3 = s3;
      this->Room3a = s3a;
      this->Room3b = s3b;
      this->Room4 = s4;
      this->Room4fight = s4f;
      this->Room4fighta = s4fa;
      this->Room5 = s5;
      this->Room6 = s6;
      this->Sack1 = sack1;
      this->Lockpick = lockpick;
      this->Excalibur = sword;
      this->Armor = armor;
      this->Coins = coins;
    };
};

save Save(false, false ,false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false,false, 0);

save Current(false, false, false, false ,false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 0);

// Defining the function that saves progress to a file.

void saveToFile(){
  ofstream myoutfile("Current.txt");
  myoutfile << Save.Room1 << endl;
  myoutfile << Save.Room1a << endl;
  myoutfile << Save.Room1b << endl;
  myoutfile << Save.Room1c << endl;
  myoutfile << Save.Room1d << endl;
  myoutfile << Save.Room2 << endl;
  myoutfile << Save.Room2a << endl;
  myoutfile << Save.Room2b << endl;
  myoutfile << Save.Room3 << endl;
  myoutfile << Save.Room3a << endl;
  myoutfile << Save.Room3b << endl;
  myoutfile << Save.Room4 << endl;
  myoutfile << Save.Room4fight << endl;
  myoutfile << Save.Room4fighta << endl;
  myoutfile << Save.Room5 << endl;
  myoutfile << Save.Room6 << endl;
  myoutfile << Save.Sack1 << endl;
  myoutfile << Save.Lockpick << endl;
  myoutfile << Save.Excalibur << endl;
  myoutfile << Save.Armor << endl;
  myoutfile << Save.Coins << endl;
  myoutfile.close();
}

// Defining the function that saves your location to a file.

void saveCurrentToFile(){
  ofstream myoutfile("current.txt");
  myoutfile << Current.Room1 << endl;
  myoutfile << Current.Room1a << endl;
  myoutfile << Current.Room1b << endl;
  myoutfile << Current.Room1c << endl;
  myoutfile << Current.Room1d << endl;
  myoutfile << Current.Room2 << endl;
  myoutfile << Current.Room2a << endl;
  myoutfile << Current.Room2b << endl;
  myoutfile << Current.Room3 << endl;
  myoutfile << Current.Room3a << endl;
  myoutfile << Current.Room3b << endl;
  myoutfile << Current.Room4 << endl;
  myoutfile << Current.Room4fight << endl;
  myoutfile << Current.Room4fighta << endl;
  myoutfile << Current.Room5 << endl;
  myoutfile << Current.Room6 << endl;
  myoutfile.close();
}

// Declares the function that loads what you had done at save.

void loadFile(){
  ifstream myinfile;
  myinfile.open("save.txt",ios::in);
  string line;
  int lineCounter=1;
  while(getline(myinfile,line)){
    if(line>="1"){
      switch(lineCounter){
        case 1:
        Save .Room1 = true;
        break;

        case 2:
        Save.Room1a = true;
        break;

        case 3:
        Save.Room1b = true;
        break;

        case 4:
        Save.Room1c = true;
        break;

        case 5:
        Save.Room1d = true;
        break;

        case 6:
        Save.Room2 = true;
        break;

        case 7:
        Save.Room2a = true;
        break;

        case 8:
        Save.Room2b = true;
        break;

        case 9:
        Save.Room3 = true;
        break;

        case 10:
        Save.Room3a = true;
        break;
        
        case 11:
        Save.Room3b = true;
        break;

        case 12:
        Save.Room4 = true;
        break;

        case 13:
        Save.Room4fight = true;
        break;

        case 14:
        Save.Room4fighta = true;
        break;

        case 15:
        Save.Room5 = true;
        break;

        case 16:
        Save.Room6 = true;
        break;

        case 17:
        Save.Sack1 = true;
        break;

        case 18:
        Save.Lockpick = true;
        break;

        case 19:
        Save.Excalibur = true;
        break;

        case 20:
        Save.Armor = true;
        break;

        case 21:
        Save.Coins = stoi(line);
        break;
      }
      
    }
    lineCounter++;
  }
  myinfile.close();
}

// Defining the function that loads where you were at at save.

void loadLocation(){
  ifstream myinfile;
  myinfile.open("current.txt",ios::in);
  string line;
  int lineCounter=1;
  while(getline(myinfile,line)){
    if(line=="1"){
      switch(lineCounter){
        case 1:
        easy1();
        break;

        case 2:
        easy1a();
        break;

        case 3:
        easy1b();
        break;

        case 4:
        easy1c();
        break;

        case 5:
        easy1d();
        break;

        case 6:
        easy2();
        break;

        case 7:
        easy2a();
        break;

        case 8:
        easy2b();
        break;

        case 9:
        easy3();
        break;

        case 10:
        easy3a();
        break;

        case 11:
        easy3b();
        break;

        case 12:
        easy4();
        break;

        case 13:
        easy4fight();
        break;

        case 14:
        easy4fighta();
        break;

        case 15:
        easy5();
        break;

        case 16:
        easy6();
        break;
      }
    }
    lineCounter++;
  }
  myinfile.close();
}

// Defining the function that resets all saves.

void resetSave(){
  ofstream myoutfile("save.txt");
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << false << endl;
  myoutfile << 0 << endl;
  myoutfile.close();
  ofstream myoutfile1("current.txt");
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile1 << false << endl;
  myoutfile.close();
  ofstream myoutfile2("fight.txt");
  myoutfile2 << false << endl;
  myoutfile2 << false << endl;
  myoutfile2 << 100 << endl;
  myoutfile2 << 100 << endl;
  myoutfile2 << 100 << endl;
  myoutfile.close();
    Save.Room1 = false;
    Save.Room1a = false;
    Save.Room1b = false;
    Save.Room1c = false;
    Save.Room1d = false;
    Save.Room2 = false;
    Save.Room2a = false;
    Save.Room2b = false;
    Save.Room3 = false;
    Save.Room3a = false;
    Save.Room3b = false;
    Save.Room4 = false;
    Save.Room4fight = false;
    Save.Room4fighta = false;
    Save.Room5 = false;
    Save.Room6 = false;
    Save.Sack1 = false;
    Save.Lockpick = false;
    Save.Excalibur = false;
    Save.Armor = false;
    Save.Coins = 0;  
    Current.Room1 = false;
    Current.Room1a = false;
    Current.Room1b = false;
    Current.Room1c = false;
    Current.Room1d = false;
    Current.Room2 = false;
    Current.Room2a = false;
    Current.Room2b = false;
    Current.Room3 = false;
    Current.Room3a = false;
    Current.Room3b = false;
    Current.Room4 = false;
    Current.Room4fight = false;
    Current.Room4fighta = false;
    Current.Room5 = false;
    Current.Room6 = false;
}

#endif