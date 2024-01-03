#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884e0f8(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  piVar3 = (int *)FUN_088660c8();
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    return 0;
  }
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  iVar6 = *piVar3;
  uVar4 = DONE_Get_DAT_08AAC9E0();
  iVar5 = FUN_0880d0ac(uVar4,2);
  if (iVar5 == 0) {
    iVar5 = FUN_0884c63c(param_1);
    if (iVar5 != 0) {
      return 4;
    }
    iVar5 = FUN_0884c4a4(param_1);
    if (iVar5 != 0) {
      uVar4 = 1;
      iVar5 = FUN_088660e0();
      if (*(int *)(iVar5 + 0x150) != param_2) {
        uVar4 = 2;
      }
      return uVar4;
    }
    iVar5 = FUN_0884c570(param_1);
    if (iVar5 != 0) {
      uVar4 = 2;
      iVar5 = FUN_088660e0();
      if (*(int *)(iVar5 + 0x150) != param_2) {
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar5 = iVar6;
    if (*(int *)(iVar6 + 0x150) != param_2) {
      iVar5 = *(int *)(iVar6 + 4);
      do {
        if (1 < param_2) break;
      } while (*(int *)(iVar5 + 0x150) != param_2);
    }
    fVar7 = (float)FUN_08887b94(iVar5 + 0x434);
    fVar7 = fVar7 / *(float *)(*(int *)(iVar5 + 0x4bc) + 0x90);
    if (*(int *)(iVar6 + 0x150) == param_2) {
      iVar6 = *(int *)(iVar6 + 4);
      do {
        if (1 < param_2) break;
      } while (*(int *)(iVar6 + 0x150) == param_2);
    }
    fVar8 = (float)FUN_08887b94(iVar6 + 0x434);
    fVar8 = fVar8 / *(float *)(*(int *)(iVar6 + 0x4bc) + 0x90);
    uVar4 = 4;
    if ((fVar8 != fVar7) && (uVar4 = 2, fVar8 < fVar7)) {
      uVar4 = 1;
    }
    return uVar4;
  }
  uVar4 = 2;
  iVar5 = FUN_0884c63c(param_1);
  if (iVar5 != 0) {
    return 4;
  }
  iVar5 = FUN_0884c4a4(param_1);
  if (iVar5 != 0) {
    uVar4 = 1;
    iVar5 = FUN_088660e0();
    if (*(int *)(iVar5 + 0x150) != param_2) {
      uVar4 = 2;
    }
    return uVar4;
  }
  iVar5 = FUN_0884c570(param_1);
  if (iVar5 != 0) {
    uVar4 = 2;
    iVar5 = FUN_088660e0();
    if (*(int *)(iVar5 + 0x150) != param_2) {
      uVar4 = 1;
    }
    return uVar4;
  }
  bVar2 = true;
  if (iVar6 == 0) {
LAB_0884e488:
    if (bVar2) {
      uVar4 = 4;
    }
    return uVar4;
  }
  iVar5 = *(int *)(iVar6 + 0x14);
  do {
    iVar5 = (**(code **)(iVar5 + 0x54))(iVar6 + *(short *)(iVar5 + 0x50));
    if (iVar5 == 0) {
      iVar5 = (**(code **)(*(int *)(iVar6 + 0x14) + 100))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x60));
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar6 + 0x4c1);
        goto LAB_0884e458;
      }
      iVar6 = *(int *)(iVar6 + 4);
    }
    else {
      cVar1 = *(char *)(iVar6 + 0x4c1);
LAB_0884e458:
      if (cVar1 == '\0') {
        if (*(int *)(iVar6 + 0x150) == param_2) {
          uVar4 = 1;
        }
        bVar2 = false;
      }
      else {
        if (*(int *)(iVar6 + 0x150) != param_2) {
          iVar6 = *(int *)(iVar6 + 4);
          goto LAB_0884e480;
        }
        uVar4 = 2;
      }
      iVar6 = *(int *)(iVar6 + 4);
    }
LAB_0884e480:
    if (iVar6 == 0) goto LAB_0884e488;
    iVar5 = *(int *)(iVar6 + 0x14);
  } while( true );
}

