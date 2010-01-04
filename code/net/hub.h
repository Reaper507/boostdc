#ifndef _HUB_H_GUARD_
#define _HUB_H_GUARD_

#include <string>


using namespace std;

class hub
{
 private:
  string _url;



  hub();
  hub(const hub&);


 public:
  hub(string url);
  ~hub();


  void connect();
};

#endif
