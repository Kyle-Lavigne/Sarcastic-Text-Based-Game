#ifndef waitTime_h
#define waitTime_h
using namespace std;

// Defining the function that sets up pauses and waits between choices

void waitTime(int time){ 
  chrono::seconds dura(time);
  this_thread::sleep_for(dura);
}
  
#endif