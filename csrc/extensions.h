
#include <torch/torch.h>
#include <torch/script.h>

// for getpid()
#ifdef _WIN32
#include <process.h>
#else
#include <unistd.h>
#endif
