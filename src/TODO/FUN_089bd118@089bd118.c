#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bd118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 5) == '\0') {
    local_20 = 0;
    local_1c = 0;
    iVar1 = zz_sceKernelVolatileMemTryLock(0,&local_20,&local_1c);
    if (iVar1 == 0) {
      if (*(int *)(DAT_08ac51f8 + 8) == 0) {
        if (DAT_08ac51fc == 0) {
          DAT_08ac51fc = local_20;
        }
        local_18 = 0;
        FUN_089d8634();
        uVar2 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar1 = FUN_089d7d74(0x1c,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        if (iVar1 != 0) {
          FUN_089d6d64(iVar1,local_20,local_1c,0x20,0x40,1);
          local_18 = iVar1;
        }
        *(int *)(DAT_08ac51f8 + 8) = local_18;
      }
      else {
        FUN_089d6f4c(*(int *)(DAT_08ac51f8 + 8),local_20,local_1c);
      }
      *(undefined4 *)(param_1 + 0xc) = local_1c;
      *(int *)(param_1 + 8) = local_20;
      *(undefined *)(param_1 + 5) = 1;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

