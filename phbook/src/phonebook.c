#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_
#include "phonebook.h"
#endif // _PHONEBOOK_H_ 

// Event handler cycle
void run(struct mg_mgr *mptr, int delay) {
  
  for (;;) {
    mg_mgr_poll(mptr, delay);
  }
  
}



