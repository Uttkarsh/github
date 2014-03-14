#define STR_VALUE(arg)      #arg
#define FUNCTION_NAME(name) STR_VALUE(name)

#define TEST_FUNC      test_func
#define TEST_FUNC_NAME FUNCTION_NAME(TEST_FUNC)

#include <stdio.h>

static void TEST_FUNC(void)
{
    printf("In function %s\n", TEST_FUNC_NAME);
}

int main(void)
{
    puts(FUNCTION_NAME(JUST_FUNC));
    TEST_FUNC();
    return(0);
}
