#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897273c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_089707c0(param_1);
    FUN_08970868(param_1);
    FUN_08970910(param_1);
    FUN_08970a34(param_1);
    FUN_08970adc(param_1);
    FUN_08970b84(param_1);
    FUN_08970c70(param_1);
    FUN_08970d5c(param_1);
    FUN_08970e04(param_1);
    FUN_08970f34(param_1);
    FUN_08971404(param_1);
    FUN_08970448(param_1,0);
    FUN_08970550(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    uVar1 = FUN_08970608(param_1,0);
    uVar1 = uVar1 & 0xff;
    iVar2 = FUN_089704b8(param_1,0);
    if ((uVar1 + iVar2 & 0xff) == 2) {
      FUN_089720e8(param_1);
      FUN_08971e64(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_08971504(param_1);
    FUN_0897155c(param_1);
    FUN_089716cc(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8),param_1 + 0x988);
    iVar2 = FUN_08971c74(param_1);
    if (iVar2 == 1) {
      iVar2 = FUN_089c59d4();
      if (iVar2 != 0) {
        uVar3 = FUN_089c59f0();
        FUN_089c6350(uVar3,0,0,0);
      }
      FUN_089720e8(param_1);
      FUN_08971ca8(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
    else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
      iVar2 = FUN_089717a0(param_1);
      if (iVar2 == 1) {
        iVar2 = FUN_089c59d4();
        if (iVar2 != 0) {
          uVar3 = FUN_089c59f0();
          FUN_089c6350(uVar3,1,0,0);
        }
        FUN_089720e8(param_1);
      }
      else {
        iVar2 = FUN_0897196c(param_1);
        if (iVar2 == 1) {
          iVar2 = FUN_089c59d4();
          if (iVar2 != 0) {
            uVar3 = FUN_089c59f0();
            FUN_089c6350(uVar3,1,0,0);
          }
          FUN_08971b4c(param_1);
          FUN_08971bb0(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
        else {
          iVar2 = FUN_08971910(param_1);
          if (iVar2 == 1) {
            iVar2 = FUN_089c59d4();
            if (iVar2 != 0) {
              uVar3 = FUN_089c59f0();
              FUN_089c6350(uVar3,1,0,0);
            }
            FUN_089720e8(param_1);
          }
        }
      }
    }
    else {
      iVar2 = FUN_089c59d4();
      if (iVar2 != 0) {
        uVar3 = FUN_089c59f0();
        FUN_089c6350(uVar3,2,0,0);
      }
      *(undefined *)(param_1 + 0xb88) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 3:
    FUN_08971504(param_1);
    iVar2 = FUN_08972410(param_1);
    if (iVar2 == 1) {
      FUN_08971104(param_1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 4:
    FUN_08971e64(param_1,0);
    FUN_08971770(param_1);
    FUN_08970448(param_1,1);
    FUN_08970550(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    uVar1 = FUN_08970608(param_1,1);
    uVar1 = uVar1 & 0xff;
    iVar2 = FUN_089704b8(param_1,1);
    if ((uVar1 + iVar2 & 0xff) == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    break;
  case 6:
    iVar2 = FUN_08971ce4(param_1);
    if (iVar2 == 1) {
      uVar3 = 4;
      if (*(char *)(param_1 + 0x74) == '\x04') {
        FUN_08971770(param_1);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
      else {
        FUN_089564e4();
        FUN_0896f7fc(param_1,0);
        FUN_08970f34(param_1);
        FUN_08971404(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
    break;
  default:
    FUN_08970414(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

