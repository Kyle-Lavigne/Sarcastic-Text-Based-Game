#ifndef fightClass_h
#define fightClass_h
using namespace std;

class fight{
  public:
  bool Excalibur = false;
  bool Armor = false;
  int BossHealth = 100;
  int Health = 100;
  int ArmorHealth = 100;

  fight(bool sword, bool armor, int bH, int H, int aH){
    this->Excalibur = sword;
    this->Armor = armor;
    this->BossHealth = bH;
    this->Health = H;
    this->ArmorHealth = aH;
  };
};

fight bossFight(false, false, 100, 100, 100);

void bossToFile(){
  ofstream myoutfile("fight.txt");
  myoutfile << bossFight.Excalibur << endl;
  myoutfile << bossFight.Armor << endl;
  myoutfile << bossFight.BossHealth << endl;
  myoutfile << bossFight.Health << endl;
  myoutfile << bossFight.ArmorHealth << endl;
  myoutfile.close();
}

void loadFight(){
  ifstream myinfile;
  myinfile.open("fight.txt",ios::in);
  string line;
  int lineCounter=1;
  while(getline(myinfile,line)){
    if(line>="1"){
      switch(lineCounter){
        case 1:
        bossFight.Excalibur = true;
        break;

        case 2:
        bossFight.Armor = true;
        break;

        case 3:
        bossFight.BossHealth = stoi(line);
        break;

        case 4:
        bossFight.Health = stoi(line);
        break;

        case 5:
        bossFight.ArmorHealth = stoi(line);
        break;
      }
    }
    lineCounter++;
  }
  myinfile.close();
}

#endif