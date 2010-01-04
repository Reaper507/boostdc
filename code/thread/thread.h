#ifndef _THREAD_H_GUARD_
#define _THREAD_H_GUARD_

#include <pthread.h>



class thread
{
 private:
  pthread_t _thread;
  int _e_code;

  static void* thread_router(void* arg);
  void exec_thread();

 public:
  thread();
  void start();
  void join();

  virtual int exec() = 0;
  int exit_code();
};

#endif
