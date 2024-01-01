#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08844768(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0xa90);
      goto LAB_08844bc0;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      local_28 = 0;
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar8 = FUN_089d7d74(0x80,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      iVar4 = local_28;
      if (iVar8 != 0) {
        FUN_089f4f54(iVar8,0);
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 0x44) = iVar4;
    }
    *(undefined *)(*(int *)(param_1 + 0x44) + 4) = 1;
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar2 = FUN_089d7d74(0x14,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      uVar6 = *(undefined4 *)(param_1 + 0x44);
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x44);
    }
    FUN_0881a0c4(uVar6,*(undefined4 *)(param_1 + 0x48),3);
    iVar4 = 0;
    iVar8 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar7 = *(int *)(*(int *)(param_1 + 0x48) + iVar8);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
      iVar8 = iVar8 + 4;
    } while (iVar4 < 5);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + 8) + 0xbc) = 0;
    if (*(int *)(param_1 + 0xa90) == 0) {
      iVar4 = *(int *)(param_1 + 0xb8);
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar2 = FUN_089d7d74(iVar4 << 2,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xa90) = uVar2;
    }
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0xad0) = 0x3f800000;
    if (0 < *(int *)(param_1 + 0xb8) + -2) {
      iVar8 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x14) + iVar8) == 0) {
          iVar7 = *(int *)(param_1 + 0xb8);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xa90) + iVar8) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar8) + 0xbc);
          iVar7 = *(int *)(param_1 + 0xb8);
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar4 < iVar7 + -2);
    }
    *(undefined4 *)(param_1 + 0xad4) = 0;
    *(undefined4 *)(param_1 + 0xad8) = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  }
  else if (1 < iVar4) {
    iVar4 = *(int *)(param_1 + 0xa90);
    goto LAB_08844bc0;
  }
  iVar4 = FUN_089bf93c(0x14a,1);
  if (iVar4 != 0) {
    FUN_0883fcf8(param_1);
  }
  fVar9 = *(float *)(param_1 + 0xad0) - 0.1;
  *(float *)(param_1 + 0xad0) = fVar9;
  if (fVar9 <= 0.0) {
    *(undefined4 *)(param_1 + 0xad0) = 0;
  }
  memcpy_jak(local_90,&DAT_08aba670,0x44);
  uVar6 = _DONE_Get_DAT_08AAC9E0();
  iVar4 = FUN_0880d0ac(uVar6,0x1b);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  else if (5 < iVar4) {
    iVar4 = 5;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0xb8) + -2) {
    iVar7 = 0;
    do {
      iVar3 = FUN_0884b248();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x14);
LAB_08844af4:
        if (*(int *)(iVar3 + iVar7) == 0) {
          iVar3 = *(int *)(param_1 + 0xb8);
        }
        else {
          *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7) + 0xbc) =
               *(float *)(*(int *)(param_1 + 0xa90) + iVar7) * *(float *)(param_1 + 0xad0);
          iVar3 = *(int *)(param_1 + 0xb8);
        }
      }
      else {
        if (*(int *)(DAT_08ac58c4 + 0x20) != 2) {
          iVar3 = *(int *)(param_1 + 0x14);
          goto LAB_08844af4;
        }
        if (iVar4 < 3) {
          iVar3 = *(int *)(param_1 + 0x14);
          goto LAB_08844af4;
        }
        uVar6 = FUN_0884b268();
        iVar3 = FUN_0884c830(uVar6);
        bVar1 = false;
        if (iVar3 == 0) {
LAB_08844af0:
          iVar3 = *(int *)(param_1 + 0x14);
          goto LAB_08844af4;
        }
        iVar3 = 0;
        piVar5 = local_90;
        do {
          iVar3 = iVar3 + 1;
          if (iVar8 == *piVar5) {
            bVar1 = true;
            break;
          }
          piVar5 = piVar5 + 1;
        } while (iVar3 < 0x11);
        if (!bVar1) goto LAB_08844af0;
        iVar3 = *(int *)(param_1 + 0xb8);
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar8 < iVar3 + -2);
  }
  iVar4 = 0;
  iVar8 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0xa8c) + iVar8) != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0xa8c) + iVar8);
      local_34 = *(undefined4 *)(param_1 + 0xad0);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      *(undefined4 *)(iVar7 + 0xa0) = 0;
      *(undefined4 *)(iVar7 + 0xa4) = 0;
      *(undefined4 *)(iVar7 + 0xa8) = 0;
      *(undefined4 *)(iVar7 + 0xac) = local_34;
    }
    iVar4 = iVar4 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar4 < 4);
  FUN_0888b7d0(*(undefined4 *)(param_1 + 0xad0));
  if (fVar9 > 0.0) {
    return;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  iVar4 = *(int *)(param_1 + 0xa90);
LAB_08844bc0:
  if (iVar4 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xa90);
    FUN_089d8634();
    FUN_089d7fd8(uVar6,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0xa90) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 4;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

