#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088165d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x800,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[3] = uVar2;
  FUN_08816544(param_1,0xf0,0x88);
  FUN_08816550(param_1,0);
  param_1[1] = 0x44ed8000;
  param_1[4] = 0;
  *param_1 = 999;
  param_1[2] = 0;
  *(undefined *)(param_1 + 7) = 0;
  *(undefined *)((int)param_1 + 0x1d) = 0;
  param_1[8] = 0xffffffff;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089eaf90(iVar3);
    iVar4 = iVar3;
  }
  param_1[0xb] = iVar4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x50,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089ed6c8(iVar3,1);
    iVar4 = iVar3;
  }
  param_1[0xc] = iVar4;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,0);
    iVar4 = iVar3;
  }
  param_1[0xe] = iVar4;
  *(undefined *)(iVar4 + 4) = 1;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x2c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[0xf] = uVar2;
  FUN_0881a0c4(param_1[0xe],uVar2,9);
  iVar3 = 0;
  iVar4 = param_1[0xf];
  iVar6 = 0;
  do {
    piVar5 = (int *)(iVar4 + iVar6);
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 4;
    *(uint *)(*piVar5 + 0xd0) = *(uint *)(*piVar5 + 0xd0) & 0xfffffffe;
    iVar4 = param_1[0xf];
  } while (iVar3 < 0xb);
  iVar4 = *(int *)(iVar4 + 0x20);
  uVar1 = FUN_089f7720("co_bo_ita_1_01");
  *(undefined4 *)(iVar4 + 0xd4) = uVar1;
  *(undefined *)(param_1 + 0x11) = 0;
  return param_1;
}

