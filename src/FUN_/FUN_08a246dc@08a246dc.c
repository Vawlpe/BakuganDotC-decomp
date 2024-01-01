#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte FUN_08a246dc(short *param_1,byte *param_2,short *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  bVar3 = param_2[1];
  iVar4 = (int)(uint)*param_2 >> 4;
  uVar9 = *param_2 & 0xf;
  cVar1 = (&DAT_08aa5e15)[iVar4];
  cVar2 = (&DAT_08aa5e10)[iVar4];
  iVar5 = (int)*param_3;
  iVar4 = (int)param_3[1];
  iVar8 = 2;
  bVar6 = 7;
  if (bVar3 != 7) {
    iVar7 = 0xd;
    do {
      bVar6 = param_2[iVar8];
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + 1;
      iVar4 = (((int)(char)bVar6 << 0x1c) >> uVar9 + 10) + iVar4 * cVar1 + iVar5 * cVar2 >> 6;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *param_1 = (short)iVar4;
      iVar5 = (int)((((int)(char)bVar6 & 0xfffffff0U) << (0xe - uVar9 & 0x1f)) +
                   iVar5 * cVar1 + iVar4 * cVar2) >> 6;
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      param_1[1] = (short)iVar5;
      param_1 = param_1 + 2;
    } while (-1 < iVar7);
    param_3[1] = (short)iVar4;
    *param_3 = (short)iVar5;
    bVar6 = bVar3;
  }
  return bVar6;
}

