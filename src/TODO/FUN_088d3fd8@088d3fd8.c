#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d3fd8(void)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  piVar1 = (int *)FUN_088d3fb0(1);
  iVar4 = *piVar1;
  iVar3 = 0;
  psVar2 = (short *)piVar1[1];
  if (0 < iVar4) {
    do {
      local_20 = (float)(int)*psVar2;
      local_1c = (float)(int)psVar2[1];
      local_18 = (float)(int)psVar2[2];
      local_14 = (float)(int)psVar2[3];
      FUN_088b29c0(&local_20,psVar2[4] & 0x3ff,iVar3,0,0);
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 6;
    } while (iVar3 < iVar4);
  }
  return;
}

