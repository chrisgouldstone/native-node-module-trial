#include "functions.h"

napi_value Init(napi_env env, napi_value exports)
{
    printf("C: top of Init\n");
    napi_status status;
    napi_value fnMultiByTwo;
    napi_value fnhello;
    napi_value fn3;

    status = napi_create_function(env, NULL, 0, MultiByTwo, NULL, &fnMultiByTwo);
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to wrap native function");
    }

    status = napi_create_function(env, NULL, 0, helloFunction, NULL, &fnhello);
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to wrap native function");
    }

    status = napi_create_function(env, NULL, 0, MyFunction3, NULL, &fn3);
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to wrap native function");
    }

    status = napi_set_named_property(env, exports, "doubleIt", fnMultiByTwo); //MultiByTwo
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to populate exports");
    }

    status = napi_set_named_property(env, exports, "hello", fnhello); //MyFunction2
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to populate exports");
    }

    status = napi_set_named_property(env, exports, "my_function3", fn3); //MyFunction3
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to populate exports");
    }

    printf("C: before return in Init\n");
    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)