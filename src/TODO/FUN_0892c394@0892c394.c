#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined3 FUN_0892c394(byte param_1)

{
  undefined3 local_20;
  undefined auStack_1c [12];
  
  memcpy_jak(auStack_1c,&DAT_08ac17c6,0xc);
  memset_jak((undefined *)&local_20,0,4);
  local_20 = CONCAT12(auStack_1c[(uint)param_1 * 2 + 1],
                      CONCAT11(auStack_1c[(uint)param_1 * 2],param_1));
  return local_20;
}

