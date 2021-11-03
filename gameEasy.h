#ifndef gameEasy_h
#define gameEasy_h
using namespace std;

// Declaring the functions used in the header file.

void mainMenu(), easy1(), easy1a(), easy1b(), easy1c(), easy1d(), waitTime(int time), easy2(), easy2a(), easy3(), easy3a(), easy3b(), easy4(), easy4fight(), easy4fighta(), easy5(), easy6(), saveToFile(), saveCurrentToFile(), gameOver(), bossToFile(), dumbResponses();

// Defining the easy1 function.

void easy1(){
  cout<<"Your Eyes are closed...\n\n\n";
  cout<<"You can hear what sounds like a distant conversation but\ncannot make out the words...\n\n\n";
  cout<<"What do you do?\n";
  cout<<"***********************\n";
  cout<<"A - Wake up... I mean what else... \n";
  cout<<"B - Wait for the voices. \n";
  cout<<"C - RUN FOR IT! \n";
  cout<<"D - Sleep... forever... \n";
  cout<<"***********************\n";
  int Time=5;
  int time=30;
  char x;
  Save.Room1 = true;
  Current.Room1=true;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You wake up. Congrats. What next?\n";
    easy1a();
    break;

    case 'B':
    cout<<"You wait for a while. At first, there's nothing...\n";
    waitTime(Time);
    cout<<"\n\n\nThen you hear a roar and some screaming. You can assume \nthat those people are as good as dead.\nYou are not prepared to become a snack.\n";
    easy1b();
    break;

    case 'C':
    cout<<"Really?!...\nAlright then. You run. The Voices turn out to be guards.\nThey stop you.\nI don't know what you thought would happen.\n";
    waitTime(Time);
    gameOver();
    break;

    case 'D':
    cout<<"You stay there. You don't start the game. you don't do anything. The game waits for you, but you never respond... Infinitely waiting. For what? No one knows.\n" ;
    waitTime(time);
    gameOver();
    break;

    case 'a':
    cout<<"You wake up. Congrats. What next?\n";
    easy1a();
    break;

    case 'b':
    cout<<"You wait for a while. At first, there's nothing...\n";
    waitTime(Time);
    cout<<"\n\n\nThen you hear a roar and some screaming. You can assume \nthat those people are as good as dead.\nYou are not prepared to become a snack.\n";
    easy1b();
    break;

    case 'c':
    cout<<"Really?!...\nAlright then. You run. The Voices turn out to be guards.\nThey stop you.\nI don't know what you thought would happen.\n";
    waitTime(Time);
    gameOver();
    break;

    case 'd':
    cout<<"You stay there. You don't start the game. you don't do anything. The game waits for you, but you never respond... Infinitely waiting. For what? No one knows.\n" ;
    waitTime(time);
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy1();
    break;
  }
}

// Defining the easy1a function.

void easy1a(){
  cout<<"***********************\n";
  cout<<"A - Look around. \n";
  cout<<"B - Prepare for an epic battle scene! \n";
  cout<<"***********************\n";
  int Time=5;
  int time=10;
  int time1=2;
  Save.Room1a = true;
  Current.Room1= false;
  Current.Room1a= true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You see a door.\nYou don't know where it goes but \nyou think it might be a way out.\nYou also see a table with some things on it.\nThere is also a chain in the corner of the room.\n";
    easy1c();
    break;

    case 'B':
    cout<<"You get in your best impression of a fighting stance and prepare...\n";
    waitTime(Time);
    cout<<"You are so ready for it!...\n";
    waitTime(Time);
    cout<<"Any day now...\n";
    waitTime(Time);
    cout<<"You let your guard down.\n\n\n";
    waitTime(time1);
    cout<<"Then you get mauled by something from behind...\n\n\nThat's gonna leave a mark...\n\n\n\n";
    gameOver();
    break;

    case 'a':
    cout<<"You see a door.\nYou don't know where it goes but \nyou think it might be a way out.\nYou also see a table with some things on it.\nThere is also a chain in the corner of the room.\n";
    easy1c();
    break;

    case 'b':
    cout<<"You get in your best impression of a fighting stance and prepare...\n";
    waitTime(Time);
    cout<<"You are so ready for it!...\n";
    waitTime(Time);
    cout<<"Any day now...\n";
    waitTime(Time);
    cout<<"You let your guard down.\n\n\n";
    waitTime(time1);
    cout<<"Then you get mauled by something from behind...\n\n\nThat's gonna leave a mark...\n\n\n\n";
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;


    default:
    dumbResponses();
    easy1a();
    break;
  }
}

// Defining the easy1b function.

void easy1b(){
  cout<<"***********************\n";
  cout<<"A - Turn and look for a way out.\n";
  cout<<"B - Go look at what happened. \n";
  cout<<"***********************\n";
  int Time=5;
  int time=10;
  char x;
  Save.Room1b = true;
  Current.Room1 = false;
  Current.Room1b = true;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You turn around and see a door a table and a chain.\n";
    easy1c();
    break;

    case 'B':
    cout<<"You down the hall to the bodies.\nThey are scratched up and mauled to where nothing on them is discernable.\nYou don't want to be the victim of whatever did this to them.\nYou head back to the room where you started.\n What now?\n";
    easy1b();
    break;

    case 'a':
    cout<<"You turn around and see a door a table and a chain.\n";
    easy1c();
    break;

    case 'b':
    cout<<"You down the hall to the bodies.\nThey are scratched up and mauled to where nothing on them is discernable.\nYou don't want to be the victim of whatever did this to them.\nYou head back to the room where you started.\n What now?\n";
    easy1b();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy1b();
    break;
  }
}

// Defining the easy1c function.

void easy1c(){
  cout<<"What do you do?\n";
  cout<<"***********************\n";
  cout<<"A - Inspect the door. \n";
  cout<<"B - Look at the table closer.\n";
  cout<<"C - Pull the chain in the corner.\n";
  cout<<"***********************\n";
  Save.Room1c = true;
  Current.Room1a = false;
  Current.Room1b = false;
  Current.Room1d = false;
  Current.Room1c = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    if(Save.Lockpick==true){
      cout<<"The door opens and you walk through.\n";
      easy2();
      break;
    }
    else{
      cout<<"You head over to the door.\n You try and pull on it.\n It wont budge. You think you could pick the lock though.\n";
      easy1c();
      break;
    }
    break;

    case 'B':
    cout<<"Over on the table, you see a few things.\nYou see some bobby pins, a journal,\nand a sack of coins.\nWhat do you grab?\n";
    easy1d();
    break;

    case 'C':
    cout<<"How have you gotten here...?\nWhatever. You pull the chain.\nYou fall down a hole and die. Voila.\n";
    gameOver();
    break;

    case 'a':
    if(Save.Lockpick==true){
      cout<<"The door opens and you walk through.\n";
      easy2();
      break;
    }
    else{
      cout<<"You head over to the door.\n You try and pull on it.\n It wont budge. You think you could pick the lock though.\n";
      easy1c();
      break;
    }
    break;

    case 'b':
    cout<<"Over on the table, you see a few things.\nYou see some bobby pins, a journal,\nand a sack of coins.\nWhat do you grab?\n";
    easy1d();
    break;

    case 'c':
    cout<<"How have you gotten here...?\nWhatever. You pull the chain.\nYou fall down a hole and die. Voila.\n";
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy1c();
    break;
  }
}

// Defining the easy1d function.

void easy1d(){
  cout<<"***********************\n";
  cout<<"A - Take the Bobby pins. \n";
  cout<<"B - Read the Journal.\n";
  cout<<"C - Take the sack of coins.\n";
  cout<<"D - Back.\n";
  cout<<"***********************\n";
  Save.Room1d = true;
  Current.Room1c = false;
  Current.Room1d = true;
  int time=15;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    if(Save.Lockpick == false){
      cout<<"You take the bobby pins.\nYou think they could be used as lockpicks.\n";
      Save.Lockpick=true;
      easy1d();
      break;
    }
    else{
      cout<<"There are no more bobby pins...\n";
      easy1d();
      break;
    }
    break;

    case 'B':
    cout<<"This is a useless journal entry. Yep. You heard me right. This page has no use. Why did I create it you ask? Well I created it because I wanted you to read through it just like you are and waste your time. I mean if you're here it has obviously worked and I have succeeded. But now the true question is: Why are you still reading? I told you why I made this page yet you are still reading through it. I mean come on you probably have something better to be doing yet you're still reading through it. Why do you do this to yourself. It truly confuses me and makes me wonder what goes on inside your head. Do you think I'm going to give away a major plot point? Do you think you're going to reach a stage of enlightenment? Do you just simply have nothing better to do than read through this very obviously useless page. I mean if you enjoy reading through everything, then more power to you. But if you're just reading this to read it, I would stop right now before you waste even more of your time. Time is precious. We only get so much time in this life before we run out. So go do something. Read a book. Take a walk. Reinvent calculus. I don't care what you do, I'd just rather you be doing something other than reading this.\n1011\n\nSigned, Steve. Just Steve.\n";
    waitTime(time);
    easy1d();
    break;

    case 'C':
    if(Save.Sack1 == false){
      cout<<"You take the sack of coins. You get 27 gold coins from it.\n";
      Save.Coins += 27;
      Save.Sack1 = true;
      easy1d();
    }
    else{
      cout<<"There is nothing left to take dum dum.\n";
      easy1d();
    }
    break;

    case 'D':
    easy1c();
    break;

    case 'a':
    if(Save.Lockpick == false){
      cout<<"You take the bobby pins.\nYou think they could be used as lockpicks.\n";
      Save.Lockpick=true;
      easy1d();
    }
    else{
      cout<<"There are no more bobby pins...\n";
      easy1d();
    }
    break;

    case 'b':
    cout<<"This is a useless journal entry. Yep. You heard me right. This page has no use. Why did I create it you ask? Well I created it because I wanted you to read through it just like you are and waste your time. I mean if you're here it has obviously worked and I have succeeded. But now the true question is: Why are you still reading? I told you why I made this page yet you are still reading through it. I mean come on you probably have something better to be doing yet you're still reading through it. Why do you do this to yourself. It truly confuses me and makes me wonder what goes on inside your head. Do you think I'm going to give away a major plot point? Do you think you're going to reach a stage of enlightenment? Do you just simply have nothing better to do than read through this very obviously useless page. I mean if you enjoy reading through everything, then more power to you. But if you're just reading this to read it, I would stop right now before you waste even more of your time. Time is precious. We only get so much time in this life before we run out. So go do something. Read a book. Take a walk. Reinvent calculus. I don't care what you do, I'd just rather you be doing something other than reading this.\n1011\n\nSigned, Steve. Just Steve.\n";
    waitTime(time);
    easy1d();
    break;

    case 'c':
    if(Save.Sack1 == false){
      cout<<"You take the sack of coins. You get 27 gold coins from it.\n";
      Save.Coins += 27;
      Save.Sack1 = true;
      easy1d();
    }
    else{
      cout<<"There is nothing left to take dum dum.\n";
      easy1d();
    }
    break;

    case 'd':
    easy1c();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy1d();
    break;
  }
}

// Defining the easy2 function.

void easy2(){
  cout<<"You look around this new room.\nOn one wall You see set of levers.\nYou also see an open doorway but can't see what's past.\nFinally, you see a chest in the corner next to a bed.\nWhat do you do?\n";
  cout<<"***********************\n";
  cout<<"A - Investigate the levers.\n";
  cout<<"B - Go through the door.\n";
  cout<<"C - Go through the chest.\n";
  cout<<"***********************\n";
  Save.Room2 = true;
  Current.Room1c = false;
  Current.Room2a = false;
  Current.Room2b = false;
  Current.Room2 = true;
  int time = 5;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    if(Save.Room2b == false){
      cout<<"You take a look at the levers.\nIt looks to be a code lock.\nMaybe if you knew the key you could activate whatever it does.\n";
      easy2a();
      break;
    }
    else{
      cout<<"You've already been here\n";
      easy2();
      break;
    }
    break;

    case 'B':
    cout<<"You move onto the next room.\n";
    easy3();
    break;

    case 'C':
    cout<<"You jump into the chest.\nIt brings you to another dimension.\nYou are now stuck...\n";
    waitTime(time);
    cout<<"Forever!\n";
    gameOver();
    break;

    case 'a':
    if(Save.Room2b == false){
      cout<<"You take a look at the levers.\nIt looks to be a code lock.\nMaybe if you knew the key you could activate whatever it does.\n";
      easy2a();
      break;
    }
    else{
      cout<<"You've already been here\n";
      easy2();
      break;
    }
    break;

    case 'b':
    cout<<"You move onto the next room.\n";
    easy3();
    break;

    case 'c':
    cout<<"You jump into the chest.\nIt brings you to another dimension.\nYou are now stuck...\n";
    waitTime(time);
    cout<<"Forever!\n";
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;


    default:
    dumbResponses();
    easy2();
    break;
  }
}

// Defining the easy2a function.

void easy2a(){
  cout<<"***********************\n";
  cout<<"A - Enter in the Code.\n";
  cout<<"B - Back.\n";
  cout<<"***********************\n";
  Save.Room2a = true;
  Current.Room2 = false;
  Current.Room2b = false;
  Current.Room2a = true;
  string code;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"If you know the code go ahead and enter it or type back if you don't:\n";
    cin>>code;
    if(code == "1011"){
      cout<<"You got it right!\nThe wall behind the levers crumbles.\n In the room there is a sword in a stone.\n";
      easy2b();
      break;
    }
    if(code == "back"){
      easy2a();
      break;
    }
    if(code == "Back"){
      easy2a();
      break;
    }
    else{
      cout<<"As you pull the final lever, the wall explodes.\nI guess it's trapped if you don't enter in the right code.\n";
      gameOver();
    }
    break;

    case 'B':
    cout<<"You go back.\n";
    easy2();
    break;

    case 'a':
    cout<<"If you know the code go ahead and enter it or type back if you don't:\n";
    cin>>code;
    if(code == "1011"){
      cout<<"You got it right!\nThe wall behind the levers crumbles.\n In the room there is a sword in a stone.\n";
      easy2b();
      break;
    }
    if(code == "back"){
      easy2a();
      break;
    }
    if(code == "Back"){
      easy2a();
      break;
    }
    else{
      cout<<"As you pull the final lever, the wall explodes.\nI guess it's trapped if you don't enter in the right code.\n";
      gameOver();
    }
    break;

    case 'b':
    cout<<"You go back.\n";
    easy2();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy2a();
    break;
  }
}

// Defining the easy2b function.

void easy2b(){
  cout<<"***********************\n";
  cout<<"A - Take the sword.\n";
  cout<<"B - Take the sword... Cautiously.\n";
  cout<<"***********************\n";
  Save.Room2b = true;
  Current.Room2 = false;
  Current.Room2a = false;
  Current.Room2b = true;
  int time = 5;
  int Time = 10;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You go to take the sword.\nAso you pull it from the stone,\nyou feel power rush through your body.\nYou know the name of this sword: Excalibur.\n";
    Save.Excalibur = true;
    bossFight.Excalibur = true;
    waitTime(Time);
    easy2();
    break;

    case 'B':
    cout<<"You walk up to it cautiously.\nAt first... nothing.\n";
    waitTime(time);
    cout<<"Then, you trip and smash your face on the rock...\nOuch...\n";
    gameOver();
    break;

    case 'a':
    cout<<"You go to take the sword.\nAso you pull it from the stone,\nyou feel power rush through your body.\nYou know the name of this sword: Excalibur.\n";
    Save.Excalibur = true;
    bossFight.Excalibur = true;
    waitTime(Time);
    easy2();
    break;

    case 'b':
    cout<<"You walk up to it cautiously.\nAt first... nothing.\n";
    waitTime(time);
    cout<<"Then, you trip and smash your face on the rock...\nOuch...\n";
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy2b();
    break;
  }
}

// Defining the easy3 function.

void easy3(){
  cout<<"In this room there is a table with a bunch of gear.\nYou don't know what is ahead, but you'll probably need it.\n";
  cout<<"***********************\n";
  cout<<"A - Kit up.\n";
  cout<<"B - Don't take anything.\n";
  cout<<"***********************\n";
  Save.Room3 = true;
  Current.Room2 = false;
  Current.Room3 = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You cover yourself head to toe in armor.\nThere is not one part of you that is visible from the outside.\nYou can either move on or look around more.\n";
    Save.Armor = true;
    bossFight.Armor = true;
    easy3a();
    break;

    case 'B':
    cout<<"Despite the warning I gave, you take no armor.\nYou move directly onto the next room because you think you're a god.\n";
    easy4();
    break;

    case 'a':
    cout<<"You cover yourself head to toe in armor.\nThere is not one part of you that is visible from the outside.\nYou can either move on or look around more.\n";
    Save.Armor = true;
    bossFight.Armor = true;
    easy3a();
    break;

    case 'b':
    cout<<"Despite the warning I gave, you take no armor.\nYou move directly onto the next room because you think you're a god.\n";
    easy4();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;


    default:
    dumbResponses();
    easy3();
    break;
  }
}

// Defining the easy3a function.

void easy3a(){
  cout<<"You spot a bookcase in the far corner of the room.\nThere seems to be a book very out of place.\n";
  cout<<"***********************\n";
  cout<<"A - Pull the out of place book.\n";
  cout<<"B - Get a nice book of poems.\n";
  cout<<"C - Nah this is cheap.\n";
  cout<<"D - Go on to the obvious boss fight.\n";
  cout<<"***********************\n";
  Save.Room3a = true;
  Current.Room3 = false;
  Current.Room3b = false;
  Current.Room3a = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"The bookcase swings open.\nYou see a secret passageway.\nYou can either follow it or turn back.\n";
    easy3b();
    break;

    case 'B':
    cout<<"Your Life is a Waste\nYep, I just said that to you\nYou Like my Haiku?\n";
    easy3a();
    break;

    case 'C':
    cout<<"You know this trick, but you ignore it.\nYou move on into the next room.\n";
    easy4();
    break;

    case 'D':
    cout<<"You ignore the bookcase because you want to fight.\n";
    easy4();
    break;

    case 'a':
    cout<<"The bookcase swings open.\nYou see a secret passageway.\nYou can either follow it or turn back.\n";
    easy3b();
    break;

    case 'b':
    cout<<"Your Life is a Waste\nYep, I just said that to you\nYou Like my Haiku?\n";
    easy3a();
    break;

    case 'c':
    cout<<"You know this trick, but you ignore it.\nYou move on into the next room.\n";
    easy4();
    break;

    case 'd':
    cout<<"You ignore the bookcase because you want to fight.\n";
    easy4();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy3a();
    break;
  }
}

// Defining the easy3b function.

void easy3b(){
  cout<<"***********************\n";
  cout<<"A - Follow the long, dark hallway.\n";
  cout<<"B - Turn around, nope out of there.\n";
  cout<<"***********************\n";
  Save.Room3b = true;
  Current.Room3a = false;
  Current.Room3b = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You go on for a while.\nIt doesn't stop going straight for about 5 minutes.\nYou finally see a light.\nWhat you can assume is the outside world.\n";
    easy6();
    break;

    case 'B':
    cout<<"Then why'd you come here in the first place?\n";
    easy3a();
    break;

    case 'a':
    cout<<"You go on for a while.\nIt doesn't stop going straight for about 5 minutes.\nYou finally see a light.\nWhat you can assume is the outside world.\n";
    easy6();
    break;

    case 'b':
    cout<<"Then why'd you come here in the first place?\n";
    easy3a();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy3b();
    break;
  }
}

// Defining the easy4 function.

void easy4(){
  cout<<"This door is unlike any other one so far.\nIt's big, heavy, and is very ornate and fancy.\n";
  cout<<"***********************\n";
  cout<<"A - Move into the room.\n";
  cout<<"***********************\n";
  Save.Room4 = true;
  Current.Room3a = false;
  Current.Room4 = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You move into the next room.\nAs you go in there ,you see a terrible looking beast.\nIt is well over 10 foot tall, and has razor sharp claws.\n";
    easy4fight();
    break;

    case 'a':
    cout<<"You move into the next room.\nAs you go in there ,you see a terrible looking beast.\nIt is well over 10 foot tall, and has razor sharp claws.\n";
    easy4fight();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy4();
    break;
  }
}

// Defining the easy4fight function.

void easy4fight(){
  Save.Room4fight = true;
  Current.Room4 = false;
  Current.Room4fight = true;
  if(bossFight.BossHealth <= 0){
    easy4fighta();
  }
  else if(bossFight.Health <= 0){
    gameOver();
  }
  else{
    cout<<"Your health is "<<bossFight.Health<<" hit points.\n";
    cout<<"***********************\n";
    cout<<"A - Hit it.\n";
    cout<<"B - Block the attack.\n";
    cout<<"C - Run.\n";
    cout<<"D - Hide.\n";
    cout<<"***********************\n";
    int y;
    int z;
    char x;
    cin>>x;
    switch(x){
      case 'A':
      if(bossFight.Excalibur == true){
        y = rand() % 15 + 25;
        z = rand() % 5 + 10;
        cout<<"When you swing, you hit hard. Very hard.\nYou do "<<y<<" damage to it.\n";
        cout<<"It swings back and does "<<z<<" damage to you.\n";
        bossFight.BossHealth -= y;
        bossFight.Health -= z;
        easy4fight();
        break;
      }
      else{
        y = rand() % 15 + 10;
        z = rand() % 5 + 10;
        cout<<"You take a swing at it.\nYour hit does "<<y<<"damage to it.\n";
        cout<<"It swings back and does "<<z<<" damage to you.\n";
        bossFight.BossHealth -= y;
        bossFight.Health -= z;
        easy4fight();
        break;
      }
      break;

      case 'B':
      if(bossFight.Armor == true){
        y = rand() % 15 + 25;
        z = rand() % 5 + 10;
        cout<<"When you block, it doesn't hurt you much.\nYour armor takes "<<y<<" damage.\n";
        cout<<"You get some time. You regain "<<z<<" health.\n";
        bossFight.ArmorHealth -= y;
        bossFight.Health += z;
        if(bossFight.ArmorHealth<=0){
          bossFight.Armor = false;
        }
        if(bossFight.Health>=100){
          bossFight.Health = 100;
        }
        easy4fight();
        break;
      }
      else{
        y = rand() % 5 + 10;
        cout<<"You don't have armor, so it does "<<y<<"damage to you.\n";
        bossFight.Health -= y;
        easy4fight();
        break;
      }
      break;

      case 'C':
      cout<<"You have nowhere to run.\n";
      easy4fight();
      break;

      case 'D':
      cout<<"Where are you gonna hide? In your helmet?\n";
      easy4fight();
      break;

      case 'a':
      if(bossFight.Excalibur == true){
        y = rand() % 15 + 25;
        z = rand() % 5 + 10;
        cout<<"When you swing, you hit hard. Very hard.\nYou do "<<y<<" damage to it.\n";
        cout<<"It swings back and does "<<z<<" damage to you.\n";
        bossFight.BossHealth -= y;
        bossFight.Health -= z;
        easy4fight();
        break;
      }
      else{
        y = rand() % 15 + 10;
        z = rand() % 5 + 10;
        cout<<"You take a swing at it.\nYour hit does "<<y<<"damage to it.\n";
        cout<<"It swings back and does "<<z<<" damage to you.\n";
        bossFight.BossHealth -= y;
        bossFight.Health -= z;
        easy4fight();
        break;
      }
      break;

      case 'b':
      if(bossFight.Armor == true){
        y = rand() % 15 + 25;
        z = rand() % 5 + 10;
        cout<<"When you block, it doesn't hurt you much.\nYour armor takes "<<y<<" damage.\n";
        cout<<"You get some time. You regain "<<z<<" health.\n";
        bossFight.ArmorHealth -= y;
        bossFight.Health += z;
        if(bossFight.ArmorHealth<=0){
          bossFight.Armor = false;
        }
        if(bossFight.Health>=100){
          bossFight.Health = 100;
        }
        easy4fight();
        break;
      }
      else{
        y = rand() % 5 + 10;
        cout<<"You don't have armor, so it does "<<y<<"damage to you.\n";
        bossFight.Health -= y;
        easy4fight();
        break;
      }
      break;

      case 'c':
      cout<<"You have nowhere to run.\n";
      easy4fight();
      break;

      case 'd':
      cout<<"Where are you gonna hide? In your helmet?\n";
      easy4fight();
      break;

      case 'Q':


      saveAllToFile();
      mainMenu();
      break;

      case 'q':


      saveAllToFile();
      mainMenu();
      break;

      default:
      dumbResponses();
      easy4fight();
      break;
    }  
  }
}

void easy4fighta(){
  Save.Room4fighta = true;
  Current.Room4fight = false;
  Current.Room4fighta = true;
  int Time = 30;
  if(bossFight.Health <= 50){
    cout<<"You got hurt pretty badly so you take some time to rest.\n";
    bossFight.Health = 100;
  }
  cout<<"***********************\n";
  cout<<"A - Move into the next room.\n";
  cout<<"B - Stay here... Forever.\n";
  cout<<"***********************\n";
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You move into the next room.\n";
    easy5();
    break;

    case 'B':
    cout<<"You never go anywhere. You just sit in this room forever.\n";
    waitTime(Time);
    gameOver();
    break;

    case 'a':
    cout<<"You move into the next room.\n";
    easy5();
    break;

    case 'b':
    cout<<"You never go anywhere. You just sit in this room forever.\n";
    waitTime(Time);
    gameOver();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy4fighta();
    break;
  }
}

void easy5(){
  cout<<"This room is filled with riches.\n Piles and piles of gold coins.\n";
  cout<<"***********************\n";
  cout<<"A - Take the gold. All of it.\n";
  cout<<"B - Take some of the gold.\n";
  cout<<"***********************\n";
  Save.Room5 = true;
  Current.Room4fighta = false;
  Current.Room5 = true;
  int y;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You take all the gold. It is a lot.\nYou realize you have no way to carry it all.\nYou swallow it because of this to try and carry more.\nWait...Why?\nYou don't deserve to continue you greedy dum dum.\n";
    gameOver();
    break;

    case 'B':
    y = rand() % 100 + 500;
    cout<<"You take as much gold as you can fit in what you have.\nYou get "<<y<<" gold coins.\nWhen you're done you can go through the next door.\n";
    Save.Coins += y;
    easy6();
    break;

    case 'a':
    cout<<"You take all the gold. It is a lot.\nYou realize you have no way to carry it all.\nYou swallow it because of this to try and carry more.\nWait...Why?\nYou don't deserve to continue you greedy dum dum.\n";
    gameOver();
    break;

    case 'b':
    y = rand() % 100 + 500;
    cout<<"You take as much gold as you can fit in what you have.\nYou get "<<y<<" gold coins.\nWhen you're done you can go through the next door.\n";
    Save.Coins += y;
    easy6();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy5();
    break;
  }
}

// Defining the easy6 function.

void easy6(){
  cout<<"***********************\n";
  cout<<"A - Go on to the next room.\n";
  cout<<"***********************\n";
  Save.Room6 = true;
  Current.Room3b = false;
  Current.Room5 = false;
  Current.Room6 = true;
  char x;
  cin>>x;
  switch(x){
    case 'A':
    cout<<"You enter the exit of the dungeon.\nYou can see the light of the outside world.\nYou are free to go on your own adventure now.\n";
    gameWin();
    break;

    case 'a':
    cout<<"You enter the exit of the dungeon.\nYou can see the light of the outside world.\nYou are free to go on your own adventure now.\n";
    gameWin();
    break;

    case 'Q':
    saveAllToFile();
    mainMenu();
    break;

    case 'q':
    saveAllToFile();
    mainMenu();
    break;

    default:
    dumbResponses();
    easy6();
    break;
  }
}

#endif