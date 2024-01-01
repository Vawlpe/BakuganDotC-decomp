#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a25bd0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_30;
  undefined4 *local_2c [3];
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((param_2 & 2) == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = FUN_08a10958(param_1,1,0);
      iVar3 = FUN_08a10970(param_1,1,0);
      iVar5 = *(int *)(param_1 + 0x10);
      if ((*(int *)(param_1 + 0xc) != 0) && (iVar2 == 0)) {
        iVar2 = FUN_08a2541c(*(int *)(param_1 + 0xc),1,0x80000001,param_3);
        *(undefined2 *)(iVar2 + 8) = 1;
        FUN_08a109c4(param_1,iVar2);
      }
      if (iVar5 == 0) {
        iVar2 = *(int *)(param_1 + 4);
      }
      else if (iVar3 == 0) {
        iVar2 = FUN_08a252b0(iVar5,1,0x80000001,param_3);
        *(undefined2 *)(iVar2 + 8) = 1;
        FUN_08a10a24(param_1,iVar2);
        iVar2 = *(int *)(param_1 + 4);
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
      }
      uVar1 = 1;
      if (iVar2 == *(int *)(param_1 + 8)) {
        if ((*(ushort *)(param_1 + 2) & 0x10) == 0) {
          local_30 = FUN_08a111b4(param_1,0,0,0x80000001);
          local_30 = local_30 + 4;
          puVar4 = (undefined4 *)FUN_08a102d4(param_3,2,4,local_30);
          local_2c[0] = puVar4;
          FUN_08a111b4(param_1,local_2c,&local_30,0x80000001);
          *local_2c[0] = 0xb000000;
          local_2c[0] = local_2c[0] + 1;
          FUN_08a10a8c(param_1,puVar4);
          thunk_FUN_08a1078c(2,puVar4);
          zz_sceKernelDcacheWritebackAll();
          uVar1 = 1;
        }
        else {
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

