#include "hub.h"

#include <iostream>

using namespace std;


hub::hub()
{
}

hub::hub(const hub&)
{
}

hub::hub(string url) : _url(url)
{
}

hub::~hub()
{
}

void hub::connect()
{
  // Создаём поток в котором открываем сокет
  start();
  join();
  

}

int hub::exec()
{
  cout << "thread starting" << endl;


  return 0;
}
