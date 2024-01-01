#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a10608(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_30 [4];
  
  if (param_1 != (undefined4 *)0x0) {
    iVar5 = 0;
    puVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      FUN_08a10484(*puVar4);
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (iVar5 != 3);
    if (DAT_08af1287 == '\0') {
      iVar5 = 0;
      do {
        piVar2 = (int *)((int)(param_1 + 3) + iVar5);
        iVar1 = iVar5 + 0x1c;
        piVar3 = (int *)((int)local_30 + iVar5);
        iVar5 = iVar5 + 4;
        *piVar3 = *piVar2 + *(int *)((int)param_1 + iVar1);
      } while (iVar5 != 0x10);
      iVar5 = FUN_08a10084(param_1,0,local_30);
      if ((iVar5 != 0) && (iVar5 = FUN_08a10084(param_1,2,0), iVar5 != 0)) {
        param_1[1] = *param_1;
        FUN_08a0ff84();
        param_1[0x13] = param_1[0xf] + param_1[3];
        param_1[0x14] = param_1[0x10] + param_1[4];
        param_1[0x15] = param_1[0x11] + param_1[5];
        param_1[0x16] = param_1[0x12] + param_1[6];
        return 1;
      }
    }
    else {
      iVar5 = FUN_08a10084(param_1,0,0);
      if (((iVar5 != 0) && (iVar5 = FUN_08a10084(param_1,1,0), iVar5 != 0)) &&
         (iVar5 = FUN_08a10084(param_1,2,0), iVar5 != 0)) {
        return 1;
      }
    }
    FUN_08a10580(param_1);
  }
  return 0;
}

