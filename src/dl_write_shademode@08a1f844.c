#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_shademode(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x50000001;
  if (param_2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    uVar2 = 0x50000000;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  *puVar1 = uVar2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 1;
  return;
}

