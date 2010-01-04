#include "thread.h"


thread::thread() : _e_code(0)
{
}

void thread::start()
{
  pthread_create(&_thread, NULL, thread::thread_router, reinterpret_cast<void*>(this));
}

void thread::join()
{
  pthread_join(_thread, NULL);
}

void thread::exec_thread()
{
  _e_code = exec();
}

void* thread::thread_router(void* arg)
{
  reinterpret_cast<thread*>(arg)->exec_thread();
  return NULL;
}

