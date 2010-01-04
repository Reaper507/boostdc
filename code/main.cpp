#include "net/hub.h"




int main(int, char**)
{
  hub* hb = new hub("fakeurl");

  hb->connect();


  delete hb;





  return 0;
}
