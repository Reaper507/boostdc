#include "hub.h"


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

}
