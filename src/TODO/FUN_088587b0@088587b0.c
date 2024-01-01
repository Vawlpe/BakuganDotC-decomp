#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088587b0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  short *psVar6;
  int iVar7;
  float fVar8;
  
  if (*(char *)(*(int *)(param_1 + 0x168) + 0xc) == '\0') {
    cVar1 = *(char *)(param_1 + 0x942);
  }
  else {
    if (*(char *)(param_1 + 0xa39) == '\0') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x942);
  }
  bVar2 = false;
  if (cVar1 != '\0') {
    fVar8 = *(float *)(param_1 + 0x8a0);
    iVar3 = FUN_088575c4(param_1,*(uint *)(param_1 + 0x8dc) & 0x1f);
    *(float *)(*(int *)(param_1 + 0x130) + 0xb0) = fVar8 + (float)iVar3;
    fVar8 = *(float *)(param_1 + 0x8a8);
    iVar3 = FUN_088575c4(param_1,*(int *)(param_1 + 0x8dc) + 8U & 0x1f);
    *(float *)(*(int *)(param_1 + 0x130) + 0xb8) = fVar8 + (float)iVar3;
    iVar3 = *(int *)(param_1 + 0x8dc);
    *(int *)(param_1 + 0x8dc) = iVar3 + 1;
    if (0xb < iVar3) {
      *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb0) = *(undefined4 *)(param_1 + 0x8a0);
      *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb8) = *(undefined4 *)(param_1 + 0x8a8);
      *(undefined *)(param_1 + 0x942) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20c) == 0) {
    iVar3 = *(int *)(param_1 + 0x6c8);
  }
  else {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0xb4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb0));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x6c8);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar3 + 0x148) = 0;
      *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) | 1;
      *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
      iVar3 = *(int *)(param_1 + 0x6c8);
    }
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20c);
  }
  else {
    iVar3 = FUN_0881a580();
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x20c);
    }
    else {
      FUN_08857690(param_1);
      iVar3 = *(int *)(param_1 + 0x20c);
    }
  }
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x144);
  }
  else {
    iVar3 = FUN_0881a580();
    if (iVar3 == 0) {
      uVar4 = *(uint *)(param_1 + 0x144);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x148) = 4;
      bVar2 = true;
      uVar4 = *(uint *)(param_1 + 0x144);
    }
  }
  *(uint *)(param_1 + 0x144) = uVar4 & 0xff9dffeb;
  *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x1c) = 0;
  if (*(char *)(param_1 + 0x4c1) == '\0') {
    iVar3 = *(int *)(param_1 + 0x8c8) * 8;
    iVar7 = param_1 + *(short *)(&DAT_08a6711c + iVar3);
    pcVar5 = *(code **)(&DAT_08a67120 + iVar3);
    if (*(short *)(&DAT_08a6711e + iVar3) != 0) {
      psVar6 = (short *)(*(int *)(pcVar5 + iVar7) + *(short *)(&DAT_08a6711e + iVar3) * 8);
      pcVar5 = *(code **)(psVar6 + 2);
      iVar7 = iVar7 + *psVar6;
    }
    (*pcVar5)(iVar7);
    FUN_088578dc(param_1);
    FUN_08858094(param_1);
    if ((*(int *)(param_1 + 0x6d0) == 0) && (bVar2)) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xc0));
    }
  }
  return;
}

