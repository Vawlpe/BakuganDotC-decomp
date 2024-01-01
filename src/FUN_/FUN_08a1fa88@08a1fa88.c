#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a1fa88(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int local_40;
  int local_3c;
  ushort local_38 [2];
  int local_34;
  undefined2 local_30 [2];
  int local_2c;
  int local_28 [2];
  
  zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
  FUN_08a234f8(param_1,&local_40,&local_3c,local_38,&local_34,local_30,&local_2c,local_28);
  if (param_2 < 0x2001) {
    uVar4 = 0;
    if ((param_2 < 0x2000) && (local_3c != 0)) {
      iVar1 = (local_34 * 0x7f) / 100;
      iVar5 = ((0x2000 - param_2) * local_3c * 0x80 >> 0xd) + iVar1;
      iVar1 = FUN_08a212a4(local_30[0],(int)(short)((local_2c * 0x7f) / 100),local_38[0],
                           (int)(short)iVar1);
      iVar2 = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x19)) >> 7;
      iVar2 = FUN_08a212a4(local_30[0],(int)(short)((local_2c * 0x7f) / 100),
                           (uint)local_38[0] - iVar2 & 0xffff,
                           (int)(short)((short)iVar2 * 0x80 - (short)iVar5));
      uVar4 = -((uint)((iVar1 - iVar2) * local_28[0]) / 0xac44);
    }
  }
  else {
    uVar4 = 0;
    if (local_40 != 0) {
      sVar3 = (short)((local_34 * 0x7f) / 100);
      iVar1 = FUN_08a212a4(local_30[0],(int)(short)((local_2c * 0x7f) / 100),local_38[0],(int)sVar3)
      ;
      iVar2 = FUN_08a212a4(local_30[0],(int)(short)((local_2c * 0x7f) / 100),local_38[0],
                           (int)(short)((short)(((param_2 - 0x2000) * local_40 * 0x80) / 0x1fff) +
                                       sVar3));
      uVar4 = (uint)((iVar2 - iVar1) * local_28[0]) / 0xac44;
    }
  }
  zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  return uVar4;
}

