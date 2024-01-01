#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894fc1c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0894e1d4(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar1 = FUN_0894f12c(param_1,0);
    if (cVar1 == '\x01') {
      FUN_0894e4f0(param_1,0);
      FUN_0894e804(param_1,0);
      FUN_0894ef84(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    uVar3 = FUN_0894f5c0(param_1,0);
    uVar3 = uVar3 & 0xff;
    iVar4 = FUN_0894e83c(param_1,0);
    uVar3 = uVar3 + iVar4 & 0xff;
    iVar4 = FUN_0894efb4(param_1,0);
    if ((uVar3 + iVar4 & 0xff) == 3) {
      FUN_0894e924(param_1,1,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_0894ea3c(param_1,*(undefined *)(param_1 + 0x74));
    cVar1 = FUN_0894eed0(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 0x20) != 0) {
        iVar4 = _DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar2 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,2,0,0);
        }
        *(undefined *)(param_1 + 0x2d0) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 5;
        return;
      }
      iVar4 = FUN_0894eb5c(param_1);
      if (iVar4 == 1) {
        iVar4 = _DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar2 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,1,0,0);
        }
        FUN_0894ed2c(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else {
      if (cVar1 == '\x01') {
        iVar4 = _DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar2 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,0,0,0);
        }
        FUN_0894ef10(param_1);
        *(undefined *)(param_1 + 0x2d0) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 7;
        return;
      }
      iVar4 = _DONE_NotZero_DAT_08AC5874();
      if (iVar4 != 0) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,3,0,0);
      }
    }
    break;
  case 4:
    iVar4 = FUN_0894f8e4(param_1);
    if (iVar4 == 1) {
      FUN_0894e924(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    FUN_0894e1d4(param_1,1);
    FUN_0894e4f0(param_1,1);
    FUN_0894e804(param_1,1);
    FUN_0894ef84(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    uVar3 = FUN_0894f12c(param_1,1);
    iVar4 = FUN_0894f5c0(param_1,1);
    uVar3 = (uVar3 & 0xff) + iVar4 & 0xff;
    iVar4 = FUN_0894e83c(param_1,1);
    uVar3 = uVar3 + iVar4 & 0xff;
    iVar4 = FUN_0894efb4(param_1,1);
    if ((uVar3 + iVar4 & 0xff) == 4) {
      *(undefined4 *)(param_1 + 0x2c) = 9;
    }
    break;
  case 7:
    iVar4 = FUN_0894ef4c(param_1);
    if (iVar4 == 1) {
      FUN_089bf6e8(2000,100);
      iVar4 = FUN_089bfa40(2000);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0xc) + 0x2c))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 0x28),5,(int)*(char *)(param_1 + 0x74)
                  );
        *(undefined4 *)(param_1 + 0x2c) = 8;
        FUN_0894e6cc(param_1,*(char *)(param_1 + 0x74) + '\x02');
      }
    }
    break;
  case 8:
    iVar4 = FUN_089bf93c(2000,1);
    if (iVar4 == 0) {
      iVar4 = FUN_0890a5a8(param_1);
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined4 *)(param_1 + 0x2c) = 3;
          FUN_0894e6cc(param_1,*(undefined *)(param_1 + 0x74));
          FUN_0880d360(0xffffffff);
        }
      }
      else if (iVar4 < 3) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    break;
  default:
    FUN_0894e150(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

