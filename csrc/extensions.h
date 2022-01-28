
#include <torch/torch.h>

// for getpid()
#ifdef _WIN32
#include <process.h>
#define TORCHSPARSE_API __declspec(dllexport)
#else
#define TORCHSPARSE_API 
#include <unistd.h>
#endif
