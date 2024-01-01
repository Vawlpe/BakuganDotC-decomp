#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a212a4(short param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_4 + (int)param_2;
  iVar5 = (int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x19)) >> 7;
  param_1 = ((short)iVar5 + param_3) - param_1;
  sVar1 = param_1 / 0xc;
  param_1 = param_1 % 0xc;
  iVar3 = (int)param_1;
  uVar4 = iVar7 + iVar5 * -0x80;
  if ((iVar3 < 0) || (sVar2 = sVar1 + -2, ((uint)(iVar3 == 0) & uVar4 >> 0x1f) != 0)) {
    iVar3 = (int)(short)(param_1 + 0xc);
    sVar2 = sVar1 + -3;
  }
  uVar6 = -(int)sVar2;
  if ((int)uVar4 < 0) {
    iVar3 = (int)(short)((short)iVar3 + (short)iVar5 + -1);
    uVar4 = uVar4 + iVar5 * 0x80 + 0x80;
  }
  uVar4 = (int)((uint)*(ushort *)(&DAT_08aa5cf8 + iVar3 * 2) *
               (uint)*(ushort *)(&DAT_08aa5d10 + uVar4 * 2)) >> 0x10;
  if (sVar2 < 0) {
    uVar4 = uVar4 + (1 << (uVar6 - 1 & 0x1f)) >> (uVar6 & 0x1f);
  }
  return uVar4 & 0xffff;
}

