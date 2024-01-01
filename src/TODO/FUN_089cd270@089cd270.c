#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cd270(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(int *)(DAT_08ac5908 + 0x6b4) - 1;
  if (4 < uVar5) {
    return 1;
  }
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 1;
      return 1;
    }
    if ((uVar5 != 3) && (uVar5 != 4)) {
      iVar2 = FUN_089cbde8(param_1);
      if ((0 < iVar2) && (iVar2 < 5)) {
        return 1;
      }
      iVar2 = zz_sceUtilitySavedataInitStart(DAT_08ac5908);
      if (iVar2 != 0) {
        return 1;
      }
      *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 2;
      return 1;
    }
  }
  iVar2 = FUN_089cbde8(param_1);
  if (1 < iVar2) {
    if (iVar2 < 3) {
      return 1;
    }
    if (3 < iVar2) {
      return 1;
    }
    iVar2 = zz_sceUtilitySavedataShutdownStart();
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 5;
    return 1;
  }
  if (iVar2 != 0) {
    return 1;
  }
  if (*(int *)(DAT_08ac5908 + 0x6b4) != 5) {
    return 1;
  }
  *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 0;
  FUN_089cbe08(param_1,0);
  *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 3;
  iVar2 = *(int *)(DAT_08ac5908 + 0x1c);
  if (iVar2 < -0x7feefc7c) {
    if (iVar2 < -0x7feefcbf) {
      if (iVar2 < -0x7feefcfd) {
        if (iVar2 < -0x7feefcff) {
          iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
          goto LAB_089cd5a8;
        }
        *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 5;
        iVar6 = DAT_08ac5910;
      }
      else {
        if (iVar2 != -0x7feefcf9) {
          iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
          goto LAB_089cd5a8;
        }
LAB_089cd400:
        *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 6;
        iVar6 = DAT_08ac5910;
      }
    }
    else if (iVar2 < -0x7feefc7f) {
      iVar6 = DAT_08ac5910;
      if (iVar2 < -0x7feefcb8) {
                    // WARNING: Could not recover jumptable at 0x089cd448. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar3 = (**(code **)(&DAT_08aa1f10 + (iVar2 + 0x7feefcbf) * 4))();
        return uVar3;
      }
    }
    else if (iVar2 < -0x7feefc7d) {
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 5;
      iVar6 = DAT_08ac5910;
    }
    else {
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 7;
      iVar6 = DAT_08ac5910;
    }
  }
  else if (iVar2 < -0x7feefc3d) {
    if (iVar2 < -0x7feefc7b) {
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 4;
      iVar6 = DAT_08ac5910;
    }
    else {
      if (iVar2 < -0x7feefc3f) {
        iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
        goto LAB_089cd5a8;
      }
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 5;
      iVar6 = DAT_08ac5910;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)(DAT_08ac5908 + 0x5cc);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
        goto LAB_089cd5a8;
      }
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 1;
      iVar6 = DAT_08ac5910;
    }
    else {
      if (1 < iVar2) {
        iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
        goto LAB_089cd5a8;
      }
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 3;
      iVar6 = DAT_08ac5910;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 1;
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 < 2) {
          if (iVar2 < 0) {
            iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
            goto LAB_089cd5a8;
          }
        }
        else if (iVar2 != 0xd) {
          iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
          goto LAB_089cd5a8;
        }
        iVar6 = 0;
        iVar2 = 0;
        do {
          iVar4 = strcmp(DAT_08ac5908 + 0x4c,DAT_08ac5908 + iVar2 + 0x6b8);
          if (iVar4 == 0) goto LAB_089cd5a4;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 0x14;
        } while (iVar6 < 8);
        iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
        goto LAB_089cd5a8;
      }
      if (iVar2 != -0x7feefc39) {
        iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
        goto LAB_089cd5a8;
      }
      goto LAB_089cd400;
    }
    *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 2;
    iVar6 = DAT_08ac5910;
  }
LAB_089cd5a4:
  DAT_08ac5910 = iVar6;
  iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
LAB_089cd5a8:
  bVar1 = false;
  if (iVar2 == 1) {
    bVar1 = true;
  }
  else {
    iVar2 = *(int *)(DAT_08ac5908 + 0x1c);
    if (iVar2 < -0x7feefc3a) {
      if (iVar2 == -0x7feefc7d) {
        bVar1 = true;
      }
    }
    else if (iVar2 < -0x7feefc38) {
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 1;
      bVar1 = true;
    }
  }
  if (bVar1) {
    if (*(int *)(DAT_08ac5908 + 0x5d0) == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else if (*(uint **)(DAT_08ac5908 + 0x5d8) == (uint *)0x0) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      uVar5 = **(uint **)(DAT_08ac5908 + 0x5d8);
      if (*(uint *)(*(int *)(DAT_08ac5908 + 0x5d0) + 4) < uVar5) {
        *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 7;
        uVar5 = **(uint **)(DAT_08ac5908 + 0x5d8);
      }
      DAT_08ac590c = uVar5 * **(int **)(DAT_08ac5908 + 0x5d0);
      iVar2 = *(int *)(param_1 + 0x14);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (iVar2 == 3) {
    iVar2 = *(int *)(DAT_08ac5908 + 0x6b0);
    bVar1 = true;
    if (iVar2 < 2) {
      if (0 < iVar2) {
        bVar1 = false;
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
      }
    }
    else if (iVar2 == 5) {
      bVar1 = false;
    }
    if ((bVar1) &&
       (iVar2 = *(int *)(param_1 + 0x18) + 1, *(int *)(param_1 + 0x18) = iVar2, iVar2 < 8)) {
      strcpy(DAT_08ac5908 + 0x4c,DAT_08ac5908 + *(int *)(param_1 + 0x18) * 0x14 + 0x6b8);
      *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 3;
      FUN_089cbe08(param_1,1);
    }
  }
  return 1;
}

