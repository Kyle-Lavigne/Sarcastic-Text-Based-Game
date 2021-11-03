#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include <cmath>
#include <chrono>
#include <thread>
#include <fstream>
#include "save.h"
#include "fightClass.h"
#include "menus.h"
#include "gameEasy.h"
#include "gameMedium.h"
#include "gameHard.h"
#include "waitTime.h"
using namespace std;

int main(){
  srand(time(NULL));
  mainMenu();
  return 0;
};