#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893d154(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x2c);
  if (uVar8 < 6) {
    if (uVar8 == 1) {
      iVar2 = FUN_089c59d4();
      if (iVar2 != 0) {
        uVar1 = FUN_089c59f0(param_1);
        FUN_089c6350(uVar1,0x2c0000a,0,0);
      }
      FUN_0893c32c(param_1,0);
      FUN_08939cac(param_1,0);
      FUN_0893a240(param_1,0);
      FUN_0893a34c(param_1,0);
      FUN_0893a404(param_1,0);
      FUN_0893a858(param_1,0);
      FUN_0893a968(param_1,0);
      FUN_0893adc8(param_1,0);
      FUN_0893bc28(param_1,0);
      FUN_0893be1c(param_1,0);
      FUN_0893aae8(param_1);
      FUN_0893c678(param_1);
      FUN_08939a00(param_1);
      FUN_0893caa8(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else if (uVar8 == 2) {
      uVar8 = FUN_0893cd1c(param_1,0);
      iVar2 = FUN_0893a1c8(param_1,0);
      iVar3 = FUN_0893a2fc(param_1,0);
      iVar4 = FUN_0893a3b4(param_1,0);
      iVar5 = FUN_0893a768(param_1,0);
      iVar6 = FUN_0893a8e0(param_1,0);
      iVar7 = FUN_0893aa04(param_1,0);
      uVar8 = ((((((uVar8 & 0xff) + iVar2 & 0xff) + iVar3 & 0xff) + iVar4 & 0xff) + iVar5 & 0xff) +
               iVar6 & 0xff) + iVar7 & 0xff;
      iVar2 = FUN_0893ae48(param_1,0);
      iVar3 = FUN_0893bd28(param_1,0);
      iVar4 = FUN_0893bf08(param_1,0);
      FUN_08939a00(param_1);
      FUN_0893caa8(param_1);
      FUN_0893b970(param_1);
      if ((((uVar8 + iVar2 & 0xff) + iVar3 & 0xff) + iVar4 & 0xff) == 10) {
        FUN_0893bfbc(param_1,1);
        FUN_0893c06c(param_1,1);
        FUN_0893b760(param_1);
        FUN_0893af48(param_1,1);
        FUN_0893af7c(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar8 == 3) {
      FUN_0893b870(param_1);
      FUN_0893afb8(param_1);
      iVar2 = FUN_0893b9ec(param_1);
      if (((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) && (iVar2 != 0)) {
        iVar2 = FUN_089c59d4();
        if (iVar2 != 0) {
          uVar1 = FUN_089c59f0(param_1);
          FUN_089c6350(uVar1,0,0,0);
        }
        FUN_0893bfbc(param_1,0);
        FUN_0893c06c(param_1,0);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (uVar8 == 4) {
      FUN_0893af48(param_1,0);
      FUN_0893c32c(param_1,1);
      FUN_08939cac(param_1,1);
      FUN_0893a240(param_1,1);
      FUN_0893a34c(param_1,1);
      FUN_0893a404(param_1,1);
      FUN_0893a858(param_1,1);
      FUN_0893a968(param_1,1);
      FUN_0893adc8(param_1,1);
      FUN_0893bc28(param_1,1);
      FUN_0893be1c(param_1,1);
      FUN_08939a00(param_1);
      FUN_0893caa8(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else if (uVar8 == 5) {
      uVar8 = FUN_0893cd1c(param_1,1);
      iVar2 = FUN_0893a1c8(param_1,1);
      iVar3 = FUN_0893a2fc(param_1,1);
      iVar4 = FUN_0893a3b4(param_1,1);
      iVar5 = FUN_0893a768(param_1,1);
      iVar6 = FUN_0893a8e0(param_1,1);
      iVar7 = FUN_0893aa04(param_1,1);
      uVar8 = ((((((uVar8 & 0xff) + iVar2 & 0xff) + iVar3 & 0xff) + iVar4 & 0xff) + iVar5 & 0xff) +
               iVar6 & 0xff) + iVar7 & 0xff;
      iVar2 = FUN_0893ae48(param_1,1);
      iVar3 = FUN_0893bd28(param_1,1);
      iVar4 = FUN_0893bf08(param_1,1);
      uVar8 = ((uVar8 + iVar2 & 0xff) + iVar3 & 0xff) + iVar4 & 0xff;
      FUN_08939a00(param_1);
      FUN_0893caa8(param_1);
      if (uVar8 == 10) {
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else if (*(int *)(param_1 + 0x790) == 0) {
      *(uint *)(param_1 + 0x2c) = uVar8 + 1;
    }
    else {
      *(int *)(param_1 + 0x790) = *(int *)(param_1 + 0x790) + -1;
    }
  }
  else {
    FUN_0893b0a8(param_1);
    FUN_089389e8(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

