#define CHAZ_USE_SHORT_NAMES

#include "charmony.h"
#include "Charmonizer/Test.h"
#include "Charmonizer/Test/AllTests.h"

TestBatch*
chaz_TUnusedVars_prepare()
{
    return Test_new_batch("UnusedVars", 2, chaz_TUnusedVars_run);
}
void
chaz_TUnusedVars_run(TestBatch *batch)
{
#ifdef UNUSED_VAR
    PASS(batch, "UNUSED_VAR macro is defined");
#else
    FAIL(batch, "UNUSED_VAR macro is defined");
#endif

#ifdef UNREACHABLE_RETURN
    PASS(batch, "UNREACHABLE_RETURN macro is defined");
#else
    FAIL(batch, "UNREACHABLE_RETURN macro is defined");
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
