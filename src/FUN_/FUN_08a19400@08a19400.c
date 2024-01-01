#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a19400(int param_1,uint **param_2,uint *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x50);
  if (iVar6 == 0) {
    return 0;
  }
  if (param_2 == (uint **)0x0) {
    return 4;
  }
  if (*param_2 != (uint *)0x0) {
    if (param_3 == (uint *)0x0) {
      sVar1 = *(short *)(iVar6 + 0x16);
    }
    else {
      if (*param_3 < 4) {
        return 0;
      }
      *param_3 = *param_3 - 4;
      sVar1 = *(short *)(iVar6 + 0x16);
    }
    iVar4 = (int)sVar1;
    if ((param_4 < iVar4) || (*(short *)(iVar6 + 0x18) <= param_4)) {
      if (param_4 < 0) {
        return 0;
      }
    }
    else {
      if ((iVar4 < 0) || ((int)(uint)*(ushort *)(iVar6 + 0xc) <= iVar4)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar6 + 8) + iVar4 * (uint)*(ushort *)(iVar6 + 0x10) * 4;
      }
      zz_sceKernelDcacheWritebackRange
                (iVar2,(uint)*(ushort *)(iVar6 + 0x10) * (*(short *)(iVar6 + 0x18) - iVar4) * 4);
      *(undefined2 *)(iVar6 + 0x16) = 0;
      *(undefined2 *)(iVar6 + 0x18) = 0;
      if (param_4 < 0) {
        return 0;
      }
    }
    if (param_4 < (int)(uint)*(ushort *)(iVar6 + 0xc)) {
      uVar5 = *(int *)(iVar6 + 8) + param_4 * (uint)*(ushort *)(iVar6 + 0x10) * 4;
      if (uVar5 != 0) {
        puVar3 = *param_2;
        *param_2 = puVar3 + 2;
        *puVar3 = (uVar5 >> 0x18) << 0x10 | 0x10000000;
        puVar3[1] = uVar5 & 0xffffff | 0xa000000;
        return 4;
      }
    }
    return 0;
  }
  return 0;
}

