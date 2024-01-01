#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894ac6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar4,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x74) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_089f4f54(iVar2,0);
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar4;
  *(undefined *)(iVar4 + 4) = 1;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x4c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),uVar3,0x33);
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = 0;
  do {
    if ((((iVar2 != 0) && (iVar2 != 0xb)) && (iVar2 != 0xc)) && (iVar2 != 0xd)) {
      FUN_089f46dc(*(undefined4 *)(iVar4 + iVar5));
      FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      FUN_089f4954(0x3f99999a,0x3f8ccccd,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar2 < 0xe);
  *(float *)(*(int *)(iVar4 + 0x14) + 0x68) = *(float *)(*(int *)(iVar4 + 4) + 0x68) - 1.0;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68) =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x68) - 1.0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4) + 0x60)
  ;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4) + 100);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4) + 0x60)
  ;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4) + 100);
  uVar1 = FUN_089484a4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                       *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48) = uVar1;
  FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = 0x3f800000;
  FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),2);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0x3f800000;
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x128) = 2;
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

