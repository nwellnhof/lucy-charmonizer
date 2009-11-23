#define CHAZ_USE_SHORT_NAMES

#include "charmony.h"
#include <string.h>
#include "Charmonizer/Test.h"
#include "Charmonizer/Test/AllTests.h"

TestBatch*
chaz_TFuncMacro_prepare()
{
    return Test_new_batch("FuncMacro", 4, chaz_TFuncMacro_run);
}

#ifdef INLINE
static INLINE char* S_inline_function()
{
    return "inline works";
}
#endif

void
chaz_TFuncMacro_run(TestBatch *batch)
{

#ifdef HAS_FUNC_MACRO
    ASSERT_STR_EQ(batch, FUNC_MACRO, "chaz_TFuncMacro_run", 
        "FUNC_MACRO");
#else
    SKIP(batch, "no FUNC_MACRO");
#endif

#ifdef HAS_ISO_FUNC_MACRO
    ASSERT_STR_EQ(batch, __func__, "chaz_TFuncMacro_run",
        "HAS_ISO_FUNC_MACRO");
#else
    SKIP(batch, "no ISO_FUNC_MACRO");
#endif

#ifdef HAS_GNUC_FUNC_MACRO
    ASSERT_STR_EQ(batch, __FUNCTION__, "chaz_TFuncMacro_run", 
        "HAS_GNUC_FUNC_MACRO");
#else
    SKIP(batch, "no GNUC_FUNC_MACRO");
#endif

#ifdef INLINE
    PASS(batch, S_inline_function());
#else
    SKIP(batch, "no INLINE functions");
#endif
}

/**
 * Copyright 2006 The Apache Software Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
