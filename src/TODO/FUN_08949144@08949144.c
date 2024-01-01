#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08949144(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x4c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),uVar2,0x33);
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  do {
    iVar3 = *(int *)(iVar3 + iVar4);
    if (iVar5 == 0) {
LAB_08949260:
      iVar3 = iVar3 + 0xb0;
    }
    else if (iVar5 == 0xb) {
      iVar3 = iVar3 + 0xb0;
    }
    else if (iVar5 == 0xc) {
      iVar3 = iVar3 + 0xb0;
    }
    else {
      if (iVar5 != 0xd) {
        FUN_089f46dc();
        FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
        FUN_089f4954(0x3f99999a,0x3f8ccccd,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),0);
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        goto LAB_08949260;
      }
      iVar3 = iVar3 + 0xb0;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = *(int *)(param_1 + 0x1c);
    if (0xd < iVar5) {
      *(float *)(*(int *)(iVar3 + 0x14) + 0x68) = *(float *)(*(int *)(iVar3 + 4) + 0x68) - 1.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x68) - 1.0;
      uVar1 = FUN_089484a4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                           *(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48) = uVar1;
      FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = 0;
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40),2);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0x128) = 2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      return;
    }
  } while( true );
}

