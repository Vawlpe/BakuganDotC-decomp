#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945fc4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) < 2) {
    if (((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 0x40) == 0) &&
       ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 0x20) == 0)) {
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
    else {
      FUN_089c87e4(0);
      FUN_089c879c(0,0);
      *(undefined4 *)(param_1 + 0x2c) = 2;
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2c);
  }
  if (4 < uVar1) goto LAB_08946228;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      FUN_08944590(0x41800000,&DAT_08ac33d0,&DAT_08ac33c0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else if (uVar1 == 3) {
      iVar2 = FUN_089445ec();
      if (iVar2 != 0) {
        FUN_08909a94(param_1);
        DAT_08ac0e70 = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x28) = 3;
      }
    }
    else if (uVar1 == 4) {
      iVar2 = (int)((float)*(int *)(param_1 + 0x78) + 1.0);
      *(int *)(param_1 + 0x78) = iVar2;
      if (0x95 < iVar2) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(int *)(param_1 + 0x74) = (int)((float)*(int *)(param_1 + 0x74) + 1.0);
      }
    }
    else {
      FUN_08945488(param_1);
      FUN_08945d98(param_1);
      FUN_08945e24(param_1);
      iVar2 = (int)((float)*(int *)(param_1 + 0x74) + 1.0);
      *(int *)(param_1 + 0x74) = iVar2;
      if (0x42fe < iVar2) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      if (iVar2 == DAT_08ac1be0) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    goto LAB_08946228;
  }
  FUN_08945e24(param_1);
  if (*(int *)(param_1 + 0x74) < 0x43ef) {
    iVar2 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar2 + 3) & 0x40) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
    if (((int)*(char *)(iVar2 + 3) & 0x80U) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
    if ((*(byte *)(iVar2 + 3) & 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
    if ((*(byte *)(iVar2 + 3) & 0x10) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
    if ((*(byte *)(iVar2 + 2) & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
    if ((*(byte *)(iVar2 + 2) & 8) != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      goto LAB_0894614c;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
LAB_0894614c:
    *(int *)(param_1 + 0x2c) = iVar2 + 1;
  }
  *(int *)(param_1 + 0x74) = (int)((float)*(int *)(param_1 + 0x74) + 1.0);
LAB_08946228:
  FUN_08945ed8(param_1);
  return;
}

