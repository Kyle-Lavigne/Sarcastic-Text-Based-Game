#ifndef menus_h
#define menus_h
using namespace std;

// Declaring all the menus.

void mainMenu(), story(), optionsMenu(), difficulty(), help(), easy1(), medium1(), hard1(), loadLocation(), LoadFile(), resetConfirm(), gameOver(), LoadFight(), gameWin(), dumbResponses(), saveAllToFile();

// Defining the Main Menu.

void mainMenu(){
  cout<<"***********************\n";
  cout<<"A - Play Game \n";
  cout<<"B - Story \n";
  cout<<"C - Options \n";
  cout<<"D - Help \n";
  cout<<"E - Exit Game \n";
  cout<<"***********************\n";
char x;
cin>>x;
switch(x){
case 'A':
  loadFile();
  if(Save.Room1 == false){
    difficulty();
    break;
  }
  else{
    loadFight();
    loadLocation();
  }
  break;

case 'B':
  story();
  break;

case 'C':
  optionsMenu();
  break;

case 'D':
  help();
  break;

case 'E':
  exit(0);
  break;

case 'a':
  loadFile();
  if(Save.Room1 == false){
    difficulty();
  }
  else{
    loadFight();
    loadLocation();
  }
  break;

case 'b':
  story();
  break;

case 'c':
  optionsMenu();
  break;

case 'd':
  help();
  break;

case 'e':
  exit(0);
  break;

case 'Q':
  cout<<"You already are home dingus.\n";
  mainMenu();
  break;

case 'q':
  cout<<"You already are home dingus.\n";
  mainMenu();
  break;

default:
  dumbResponses();
  mainMenu();
  break;
}
}

// Defining the story menu.

void story(){
  cout<<"You were convicted of treason by the high courts of Angaroth.\nThey decided not to have a public execution,\nbut instead keep you in a cell underground.\nYou have not had access to the outside world in a very long time.\nBy your estimate, about 6 months.\nAround a month ago you started hearing word of strange things happening\naround the holding cells from the guards.\nGuards have been randomly disappearing and you don't know why.\nYou find a key that one of the guards left unattended.\nYou unlock your cell and want to figure out just what is happening.\n";
  char x;
  cin>>x;
  switch(x){
    case 'Q':
    mainMenu();
    break;

    case 'q':
    mainMenu();
    break;

    default:
    cout<<"I said press Q not "<<x<<".\n";
    story();
  }
}

// Defining The options menu.

void optionsMenu(){
  cout<<"***********************\n";
  cout<<"A - Reset Save \n";
  cout<<"***********************\n";
  char x;
  cin>>x;
  switch(x){
     case 'A':
    resetConfirm();
    break;

     case 'a':
    resetConfirm();
    break;
  
    case 'Q':
    mainMenu();
    break;

    case 'q':
    mainMenu();
    break;

    default:
    dumbResponses();
    optionsMenu();
    break;
  }
};

void resetConfirm(){
  cout<<"Are You sure? This cannot be undone.\n";
  cout<<"***********************\n";
  cout<<"A - Yes\n";
  cout<<"B - No\n";
  cout<<"***********************\n";
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"Alright I hope you did what you wanted. Or else you're screwed.\n";
    resetSave();
    mainMenu();
    break;

    case 'B':
    cout<<"Well then why'd you click it?\n";
    mainMenu();
    break;

    case 'a':
    cout<<"Alright I hope you did what you wanted. Or else you're screwed.\n";
    resetSave();
    mainMenu();
    break;

    case 'b':
    cout<<"Well then why'd you click it?\n";
    mainMenu();
    break;
  
    case 'Q':
    mainMenu();
    break;

    case 'q':
    mainMenu();
    break;

    default:
    dumbResponses();
    optionsMenu();
    break;
  }
};


// Defining the difficulty selector.

void difficulty(){
  cout<<"***********************\n";
  cout<<"Choose Your difficulty:\n";
  cout<<"A - Easy\n";
  cout<<"B - Medium\n";
  cout<<"C - Hard\n";
  cout<<"***********************\n";
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"Set to Easy\n";
    easy1();
    break;

    case 'B':
    cout<<"Set to Medium\n";
    easy1();
    break;

    case 'C':
    cout<<"Set to Hard\n";
    easy1();
    break;

    case 'a':
    cout<<"Set to Easy\n";
    easy1();
    break;

    case 'b':
    cout<<"Set to Medium\n";
    easy1();
    break;

    case 'c':
    cout<<"Set to Hard\n";
    easy1();
    break;

    default:
    dumbResponses();
    difficulty();
    break;
  }
}

// Defining The help menu.

void help(){
  cout<<"The options are all listed.\nIf you choose something other than the option,\nit will tell you and you can try again.\nYou can also press Q at any time to go home.\nI would recommend going home often as this is how the game saves.\nPress Q to go home.\n";
  char x;
  cin>>x;
  switch(x){
    case 'Q':
    mainMenu();
    break;

    case 'q':
    mainMenu();
    break;

    default:
    dumbResponses();
    story();
  }
}

// Defining the game over screen.

void gameOver(){
  cout<<"***********************\n";
  cout<<"Restart?\n";
  cout<<"A - Yes\n";
  cout<<"B - No\n";
  cout<<"***********************\n";
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"Alright I hope you did what you wanted. Or else you're screwed.\n";
    resetSave();
    difficulty();
    break;

    case 'B':
    cout<<"Alright you failure!\n";
    resetSave();
    mainMenu();
    break;

    case 'a':
    cout<<"Alright I hope you did what you wanted. Or else you're screwed.\n";
    resetSave();
    difficulty();
    break;

    case 'b':
    cout<<"Alright you failure!\n";
    resetSave();
    mainMenu();
    break;

    default:
    dumbResponses();
    gameOver();
    break;
  }
}

void gameWin(){
  cout<<"Your final score was:\n";
  cout<<"Gold: "<<Save.Coins<<endl;
  cout<<"Thanks For Playing!\n";
  resetSave();
}

void dumbResponses(){
  int y;
  y = rand() % 10 + 1;
  switch(y){
    case 1:
    cout<<"Pick an actual option\n";
    break;

    case 2:
    cout<<"Just pick the right option.\n";
    break;

    case 3:
    cout<<"How many times...\nyou know what just choose the value... it's not that hard.\n";
    break;

    case 4:
    cout<<"I gave you the options and you still can't get it right... smh.\n";
    break;

    case 5:
    cout<<"You're not very smart are you.\n";
    break;

    case 6:
    cout<<"Just take the hint. Choose the right option.\n";
    break;

    case 7:
    cout<<"Oh does someone have a listening problem?\n";
    break;

    case 8:
    cout<<"Does dum dum want gum gum? choose the right option.\n";
    break;

    case 9:
    cout<<"Maybe you should write it out. Choose the right option.\n";
    break;

    case 10:
    cout<<"Maybe if you choose the right answer,\nyou can use the rest of your day productively.\n";
    break;
  }
}

void saveAllToFile(){
  saveToFile();
  saveCurrentToFile();
  bossToFile();
}

#endif