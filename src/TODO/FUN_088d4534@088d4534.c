#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d4534(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,8);
  iVar6 = *(int *)((&PTR_DAT_08abf0b0)[iVar2] + DAT_08abef9c * 8);
  piVar5 = *(int **)((int)((&PTR_DAT_08abf0b0)[iVar2] + DAT_08abef9c * 8) + 4);
  if ((DAT_08abefb4 == 0) && (iVar2 = 0, 0 < iVar6)) {
    piVar4 = piVar5 + 4;
    do {
      iVar3 = *piVar5;
      if (((0 < iVar3) && (iVar3 < 4)) && (iVar3 = FUN_088d4514(iVar3), iVar3 != 0)) {
        DAT_08abefb4 = 1;
        local_40 = *piVar4;
        iStack_3c = piVar4[1];
        iStack_38 = piVar4[2];
        iStack_34 = piVar4[3];
        FUN_088d8e70(piVar5[8],&local_40);
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0xc;
      piVar4 = piVar4 + 0xc;
    } while (iVar2 < iVar6);
  }
  return;
}

