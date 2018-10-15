
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#define NAPI_VERSION 3
#include <node_api.h>
napi_value MultiByTwo(napi_env env, napi_callback_info info);
napi_value helloFunction(napi_env env, napi_callback_info info);
napi_value MyFunction3(napi_env env, napi_callback_info info);
#endif