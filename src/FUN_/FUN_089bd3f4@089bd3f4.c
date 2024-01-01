#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bd3f4(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_089bb728(*(undefined4 *)(DAT_08ac51f8 + 4));
  uVar4 = DAT_08ac5200;
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)((int)param_1 + 0x16) != '\0') {
      return;
    }
    uVar5 = param_1[4];
    *param_1 = DAT_08ac5200;
    if ((uVar4 & 0x90000) == 0) {
      if ((uVar4 & 0x20000) == 0) {
        if ((uVar4 & 0x40000) == 0) {
          cVar3 = *(char *)(param_1 + 1);
          goto LAB_089bd554;
        }
        param_1[4] = 0;
        if (*(char *)((int)param_1 + 0x17) != '\0') {
          *(undefined *)((int)param_1 + 0x17) = 0;
        }
      }
      else {
        if ((2 < (int)uVar5) && ((int)uVar5 < 5)) {
          cVar3 = *(char *)(param_1 + 1);
          goto LAB_089bd554;
        }
        param_1[4] = 3;
      }
    }
    else {
      if ((0 < (int)uVar5) && ((int)uVar5 < 3)) {
        cVar3 = *(char *)(param_1 + 1);
        goto LAB_089bd554;
      }
      param_1[4] = 1;
    }
  }
  else {
    uVar4 = param_1[4];
    if (4 < uVar4) {
      cVar3 = *(char *)(param_1 + 1);
      goto LAB_089bd554;
    }
    if (((uVar4 == 0) || (uVar4 == 3)) || (uVar4 == 4)) {
      uVar4 = 2;
      if (*(char *)((int)param_1 + 5) != '\0') {
        uVar4 = 1;
      }
      param_1[4] = uVar4;
    }
    else {
      if (*(char *)((int)param_1 + 0x16) != '\0') {
        cVar3 = *(char *)(param_1 + 1);
        goto LAB_089bd554;
      }
      if (*(char *)((int)param_1 + 0x15) == '\0') {
        cVar3 = *(char *)(param_1 + 1);
        goto LAB_089bd554;
      }
      iVar1 = FUN_089cc058();
      if (iVar1 == 0) {
        param_1[4] = 0;
      }
      else {
        uVar2 = FUN_089cc080();
        iVar1 = FUN_089cc300(uVar2);
        if (iVar1 != 0) {
          cVar3 = *(char *)(param_1 + 1);
          goto LAB_089bd554;
        }
        param_1[4] = 0;
      }
      *(undefined *)((int)param_1 + 0x15) = 0;
      *(undefined *)(param_1 + 5) = 0;
    }
  }
  cVar3 = *(char *)(param_1 + 1);
LAB_089bd554:
  if (cVar3 != '\0') {
    FUN_089bd298(param_1);
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac51f8 + 4));
  return;
}

