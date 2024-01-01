#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889d3ac(void)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  piVar2 = (int *)FUN_0889d384(0);
  iVar8 = *piVar2;
  iVar7 = 0;
  psVar5 = (short *)piVar2[1];
  if (0 < iVar8) {
    psVar4 = psVar5 + 4;
    psVar6 = psVar5;
    do {
      uVar1 = psVar6[4];
      iVar3 = FUN_088b763c(psVar5);
      if (iVar3 != 0) {
        local_30 = (float)(int)*psVar6;
        local_2c = (float)(int)psVar6[1];
        local_28 = (float)(int)psVar6[2];
        local_24 = (float)(int)psVar6[3];
        FUN_088b29c0(&local_30,uVar1 & 0x3ff,((int)*psVar4 & 0xfc00U) >> 10,
                     ((int)*(char *)((int)psVar4 + 3) & 0xfcU) >> 2,*(byte *)(psVar4 + 1) & 0x3f);
      }
      iVar7 = iVar7 + 1;
      psVar6 = psVar6 + 6;
      psVar5 = psVar5 + 6;
      psVar4 = psVar4 + 6;
    } while (iVar7 < iVar8);
  }
  FUN_088b2774();
  return;
}

