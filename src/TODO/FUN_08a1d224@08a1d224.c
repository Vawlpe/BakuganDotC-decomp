#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1d224(int param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    if (((param_3 & 0x81) != 0) && (FUN_08a1444c(param_2,param_4), 0 < param_2)) {
      iVar6 = 0;
      do {
        uVar5 = 1;
        if ((int)param_3 < 0) {
          uVar5 = 2;
        }
        iVar6 = iVar6 + 1;
        if (param_1 != 0) {
          uVar1 = *(ushort *)(param_1 + 0x1c);
          uVar2 = *(ushort *)(param_1 + 0x1e);
          uVar3 = *(ushort *)(param_1 + 0xc);
          uVar4 = 0x60;
          if (*(int *)(param_1 + 0x10) == 0) {
            uVar4 = 0;
          }
          FUN_08a12d94(param_4,uVar5,4,uVar4);
          FUN_08a12d94(param_4,uVar5,4,(uint)uVar3 << 2);
          FUN_08a12d94(param_4,uVar5,4,(uint)uVar1 * (uint)uVar2);
        }
        param_1 = param_1 + 0x20;
      } while (param_2 != iVar6);
    }
    return 1;
  }
  return 0;
}

