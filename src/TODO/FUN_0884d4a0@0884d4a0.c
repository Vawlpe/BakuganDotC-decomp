#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884d4a0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if ((iVar2 < 1) || (2 < iVar2)) {
      piVar3 = (int *)FUN_088660c8();
      iVar2 = *piVar3;
      fVar6 = (float)FUN_08887b94(iVar2 + 0x434);
      iVar5 = *(int *)(iVar2 + 4);
      fVar8 = *(float *)(*(int *)(iVar2 + 0x4bc) + 0x90);
      fVar7 = (float)FUN_08887b94(iVar5 + 0x434);
      uVar4 = (int)((fVar6 * 100.0) / fVar8) & 0xff;
      uVar1 = 0;
      if ((((uVar4 == ((int)((fVar7 * 100.0) / *(float *)(*(int *)(iVar5 + 0x4bc) + 0x90)) & 0xffU))
           && (uVar1 = 1, uVar4 == 0)) && ((fVar6 != 0.0 || (fVar7 != 0.0)))) &&
         (((0.0 < fVar6 && (fVar7 <= 0.0)) || ((fVar6 <= 0.0 && (0.0 < fVar7)))))) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = FUN_0884d3cc(param_1);
    }
  }
  return uVar1;
}

