#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0884d940(undefined4 param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar3,7);
    if ((iVar4 < 1) || (2 < iVar4)) {
      iVar4 = FUN_088660e0();
      fVar7 = (float)FUN_08887b94(iVar4 + 0x434);
      iVar4 = FUN_088660e0();
      fVar7 = fVar7 / *(float *)(*(int *)(iVar4 + 0x4bc) + 0x90);
      piVar5 = (int *)FUN_088660c8();
      iVar6 = *piVar5;
      iVar4 = FUN_0885fc80(iVar6);
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar6 + 4);
      }
      fVar8 = (float)FUN_08887b94(iVar6 + 0x434);
      fVar8 = fVar8 / *(float *)(*(int *)(iVar6 + 0x4bc) + 0x90);
      if (param_2 == '\0') {
        bVar1 = fVar8 <= fVar7;
      }
      else {
        bVar1 = fVar7 <= fVar8;
      }
      uVar2 = (uint)!bVar1;
    }
    else {
      uVar2 = FUN_0884d90c(param_1);
    }
  }
  return uVar2;
}

