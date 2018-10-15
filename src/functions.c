#include "functions.h"

napi_value MultiByTwo(napi_env env, napi_callback_info info)
{
    printf("C: top of MultiByTwo\n");
    napi_status status;
    size_t argc = 1;
    int number = 0;
    napi_value argv[1];
    status = napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Failed to parse arguments");
    }

    status = napi_get_value_int32(env, argv[0], &number);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Invalid number was passed as argument");
    }
    napi_value myNumber;
    number = number * 2;
    status = napi_create_int32(env, number, &myNumber);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to create return value");
    }

    printf("C: before return in MultiByTwo\n");
    return myNumber;
}

napi_value helloFunction(napi_env env, napi_callback_info info)
{
    printf("C: top of helloFunction\n");
    napi_status status;
    size_t argc = 1;
    int number = 0;
    napi_value argv[1];
    status = napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Failed to parse arguments");
    }

    status = napi_get_value_int32(env, argv[0], &number);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Invalid number was passed as argument");
    }
    napi_value myNumber;
    number = number * 2;
    status = napi_create_int32(env, number, &myNumber);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to create return value");
    }

    printf("C: before return in helloFunction\n");
    return "myNumber";
}

napi_value MyFunction3(napi_env env, napi_callback_info info)
{
    printf("C: top of MyFunction3\n");

    napi_status status;
    size_t argc = 1;
    int number = 0;
    napi_value argv[1];
    status = napi_get_cb_info(env, info, &argc, argv, NULL, NULL);
    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Failed to parse arguments");
    }

    status = napi_get_value_int32(env, argv[0], &number);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Invalid number was passed as argument");
    }
    napi_value myNumber;
    number = number * 3;
    status = napi_create_int32(env, number, &myNumber);

    if (status != napi_ok)
    {
        napi_throw_error(env, NULL, "Unable to create return value");
    }

    printf("C: before return in MyFunction3\n");
    return myNumber;
}