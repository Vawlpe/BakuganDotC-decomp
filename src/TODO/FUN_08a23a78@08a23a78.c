#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a23a78(int *param_1,uint param_2,uint param_3)

{
  byte **ppbVar1;
  int iVar2;
  uint uVar3;
  byte **ppbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *local_80 [32];
  
  ppbVar4 = local_80;
  ppbVar1 = local_80;
  uVar6 = 0;
  uVar5 = 0xffffffff;
  uVar3 = 0;
  if (param_2 == 0) {
LAB_08a23b00:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *param_1;
    while( true ) {
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
      if (*(uint *)(iVar2 + 0x58) <= param_3) {
        uVar7 = *(uint *)(iVar2 + 4);
        *ppbVar4 = (byte *)iVar2;
        uVar6 = uVar6 + 1;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        ppbVar4 = (byte **)((int *)ppbVar4 + 1);
      }
      if (param_2 <= uVar3) break;
      iVar2 = *param_1;
    }
    uVar3 = 0xffffffff;
    if ((uVar6 != 0) && (uVar7 = 0, uVar6 != 0)) {
      while( true ) {
        uVar7 = uVar7 + 1;
        ppbVar1 = ppbVar1 + 1;
        if (*(uint *)(local_80[0] + 4) == uVar5) break;
        if (uVar6 <= uVar7) goto LAB_08a23b00;
        local_80[0] = *ppbVar1;
      }
      uVar3 = (uint)*local_80[0];
    }
  }
  return uVar3;
}

