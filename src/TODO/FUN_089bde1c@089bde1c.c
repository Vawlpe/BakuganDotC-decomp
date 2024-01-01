#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bde1c(int param_1,undefined4 param_2,char param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x2a) == '\0') {
    local_28 = FUN_089bd584(param_2);
    if ((param_3 != '\0') && (0 < local_28)) {
      *(int *)(param_1 + 0x3c) = local_28;
      local_24 = 0;
      iVar1 = local_28 * 0x140;
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(param_4);
      local_2c = FUN_089d7d74(iVar1 + 0x10,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      uVar2 = local_24;
      if (local_2c != 0) {
        uVar2 = FUN_08a02cb4(local_2c + DAT_08af1178,local_28,0x140,FUN_08a294e4,0);
      }
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      local_30 = 0;
      FUN_089bd640(param_2,param_1,param_4,&local_30);
    }
    *(undefined *)(param_1 + 0x2a) = 1;
  }
  return;
}

