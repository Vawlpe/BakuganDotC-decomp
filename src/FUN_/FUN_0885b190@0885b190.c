#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885b190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (4 < uVar4) {
    return;
  }
  if (uVar4 == 1) {
    puVar5 = *(undefined4 **)(&DAT_08ab9c2c + *(int *)(param_1 + 0x2c) * 4);
LAB_0885b248:
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    uVar2 = FUN_089d9674();
    iVar1 = FUN_089d9c84(uVar2,*puVar5);
    if (iVar1 == -1) {
      uVar2 = FUN_089d9674();
      FUN_089d9914(uVar2,(&PTR_DAT_08ab9ba8)[*(int *)(param_1 + 0x2c)]);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
LAB_0885b2c4:
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 0x2c);
      if ((iVar1 < 1) || (0x14 < iVar1)) {
        *(undefined4 *)(param_1 + 0x28) = 3;
        iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
      }
      else if (*(int *)(DAT_08ac58c4 + 4) == 0x18) {
        uVar2 = FUN_0880cc48(0x18,iVar1 + 0x57);
        iVar3 = FUN_0880d0ac(uVar2,3);
        if (iVar1 == iVar3) {
          iVar1 = FUN_088b95ec(param_1 + 0x20,*(int *)(param_1 + 0x2c) + 0x57);
          if (iVar1 == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x28) = 3;
          iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
        }
        else {
          *(undefined4 *)(param_1 + 0x28) = 3;
          iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
        }
      }
      else {
        iVar1 = FUN_088b95ec(param_1 + 0x20);
        if (iVar1 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 3;
        iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 3;
      iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
    }
  }
  else {
    if (uVar4 == 2) {
      iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
      goto LAB_0885b2c4;
    }
    if (uVar4 != 3) {
      if (uVar4 == 4) {
        iVar1 = *(int *)(param_1 + 0x1c);
        goto LAB_0885b4d0;
      }
      *(undefined *)(param_1 + 0x30) = 1;
      iVar1 = FUN_0886fd24(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x18,param_1 + 0x1c);
      if (iVar1 == 0) {
        return;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      puVar5 = *(undefined4 **)(&DAT_08ab9c2c + *(int *)(param_1 + 0x2c) * 4);
      goto LAB_0885b248;
    }
    iVar1 = *(int *)(DAT_08ac58c4 + 0x20);
  }
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(DAT_08ac58c4 + 4) == 0x18) {
      uVar2 = FUN_0880cc48();
      iVar3 = FUN_0880d0ac(uVar2,3);
      if (iVar1 == iVar3) {
        if (*(int *)(param_1 + 0x2c) == 2) {
          iVar1 = FUN_088b95ec(param_1 + 0x24,0x67);
          if (iVar1 == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x28) = 4;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        else if (*(int *)(param_1 + 0x2c) == 10) {
          iVar1 = FUN_088b95ec(param_1 + 0x24,0x60);
          if (iVar1 == 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x28) = 4;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        else {
          *(undefined4 *)(param_1 + 0x28) = 4;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = 4;
        iVar1 = *(int *)(param_1 + 0x1c);
      }
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_088b95ec(param_1 + 0x24,0x67);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else if (iVar1 == 10) {
      iVar1 = FUN_088b95ec(param_1 + 0x24,0x60);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 4;
    iVar1 = *(int *)(param_1 + 0x1c);
  }
LAB_0885b4d0:
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x31) = 1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

