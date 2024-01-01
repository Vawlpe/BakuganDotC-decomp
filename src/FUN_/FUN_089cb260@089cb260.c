#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb260(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_1c;
  
  puVar1 = (uint *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_089c9da8(param_1);
  local_1c = vrndi_s();
  if (iVar2 != 0) {
    local_1c = (local_1c >> 0x10) * iVar2 >> 0x10;
  }
  *puVar1 = local_1c;
  return 0;
}

