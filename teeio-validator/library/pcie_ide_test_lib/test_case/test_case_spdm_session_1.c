/**
 *  Copyright Notice:
 *  Copyright 2023-2024 Intel. All rights reserved.
 *  License: BSD 3-Clause License.
 **/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ide_test.h"
#include "teeio_debug.h"

bool pcie_ide_test_spdm_session_1_setup(void *test_context)
{
  (void)test_context;
  TEEIO_DEBUG((TEEIO_DEBUG_INFO, "%s is not implemented. Skip the test.\n", __func__));
  return false;
}

void pcie_ide_test_spdm_session_1_run(void *test_context)
{
  (void)test_context;
}

void pcie_ide_test_spdm_session_1_teardown(void *test_context)
{
  (void)test_context;
}
