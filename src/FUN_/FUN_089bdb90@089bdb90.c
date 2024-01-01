#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bdb90(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 = FUN_089fbbe0(), iVar1 != 0)) {
    iVar1 = DAT_08ac520c;
    if (*(char *)(param_1 + 0x2a) == '\0') {
      uVar2 = FUN_089fbcb8(*(undefined4 *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      FUN_089bde1c(param_1,uVar2,param_2,1);
      iVar1 = param_1;
      if (DAT_08ac520c != 0) {
        FUN_089d8c60(param_1,DAT_08ac520c,0);
        iVar1 = DAT_08ac520c;
      }
    }
    DAT_08ac520c = iVar1;
    return 1;
  }
  return 0;
}

