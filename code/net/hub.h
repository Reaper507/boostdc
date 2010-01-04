#ifndef _HUB_H_GUARD_
#define _HUB_H_GUARD_

#include <string>
#include "../thread/thread.h"

using namespace std;


class hub : thread
{
 private:
  string _url;
  
  hub();
  hub(const hub&);


 public:
  hub(string url);
  ~hub();


  void connect();
  virtual int exec();
};

#endif
