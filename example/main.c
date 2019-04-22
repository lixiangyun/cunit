
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

#include "CUnit.h"
#include "MyMem.h"
#include "TestDB.h"
#include "TestRun.h"
#include "Util.h"
#include "CUnit_intl.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif


void ctest_api_01()
{
	CU_ASSERT_EQUAL(NULL, NULL);
}

void ctest_suite_01(void)
{
    CU_pSuite Suite = CU_add_suite(__func__, NULL, NULL);
    CU_ADD_TEST(Suite, ctest_api_01);
}

void CUEX_AddTests()
{
    ctest_suite_01();
}

int main (int argc, char *argv[])
{
    CUEX_ParseOpt(argc, argv);
    CUEX_RunAllTests();
    return 0;
}

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif


