#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089152f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      memset_jak(param_1 + 0x6c,0,0x1018);
      FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x37);
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar1 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      iVar3 = 0;
      if (iVar1 != 0) {
        FUN_089f3aa8(iVar1);
        iVar3 = iVar1;
      }
      *(int *)(*(int *)(param_1 + 0x1c) + 0x198) = iVar3;
      FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x198)
                  );
      FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x198));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x198);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      iVar3 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1668) = (int)(*(float *)(*(int *)(iVar3 + 0x2c) + 0x60) + 10.0);
      *(int *)(param_1 + 0x166c) = (int)(*(float *)(*(int *)(iVar3 + 0x2c) + 100) + 12.0);
      fVar10 = (float)FUN_089f4944(*(undefined4 *)(iVar3 + 0x2c));
      *(int *)(param_1 + 0x1670) = (int)(fVar10 - 20.0);
      fVar10 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c));
      iVar8 = 0;
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar9 = 0;
      *(int *)(param_1 + 0x1674) = (int)(fVar10 - 24.0);
      iVar3 = param_1;
      do {
        *(uint *)(*(int *)(iVar1 + iVar9) + 0xd0) =
             *(uint *)(*(int *)(iVar1 + iVar9) + 0xd0) & 0xfffffffe;
        FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        FUN_089f4954(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),0);
        FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0xbc) = 0;
        FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
        iVar1 = *(int *)(param_1 + 0x1c);
        piVar4 = (int *)(iVar1 + iVar9);
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar3 + 0x1084) = *(undefined4 *)(*piVar4 + 0x68);
        iVar9 = iVar9 + 4;
        *(undefined4 *)(iVar3 + 0x1220) = *(undefined4 *)(*piVar4 + 100);
        iVar3 = iVar3 + 4;
      } while (iVar8 < 0x67);
      iVar3 = 1;
      iVar1 = 4;
      iVar8 = 5;
      do {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0xb0) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb0) + 100);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0xd8) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd8) + 100);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0xf0) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xf0) + 100);
        iVar9 = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x108) + 100) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x108) + 100);
        iVar5 = 0;
        iVar6 = iVar8 << 2;
        do {
          iVar9 = iVar9 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x120) + 100) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x120) + 100);
          iVar5 = iVar5 + 4;
          iVar6 = iVar6 + 4;
        } while (iVar9 < 5);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 4;
        iVar8 = iVar8 + 5;
      } while (iVar3 < 6);
      FUN_0890a358(0x447a0000,0xc1c00000,0,param_1,"up_grade.fab",0,0);
      uVar7 = **(undefined4 **)(param_1 + 0x50);
      uVar2 = FUN_089f889c(uVar7);
      FUN_089f88c0(uVar7,uVar2);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      goto LAB_089156b0;
    }
  }
  else if (iVar3 < 2) {
LAB_089156b0:
    iVar3 = FUN_0890ad3c();
    if (iVar3 != 0) {
      return;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return;
  }
  iVar3 = FUN_089edb80();
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
  iVar3 = FUN_089edb80();
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  uVar2 = FUN_089edb80();
  FUN_089edf24(uVar2,10);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

