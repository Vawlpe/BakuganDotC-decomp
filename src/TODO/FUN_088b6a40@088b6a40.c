#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b6a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 1.0;
  iVar4 = 0;
  FUN_088b6884(param_1,0x200190,*(int *)(param_1 + 0x40) + 0x250);
  FUN_08823f5c(DAT_08b00b98,0x52,param_1 + 0x20);
  FUN_08863144(0x3f666666,*(undefined4 *)(param_1 + 0x40),&DAT_08b00190);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = FUN_08886d3c(*(int *)(param_1 + 0x40) + 0x434,0x15);
    if (iVar1 != 0) {
      fVar8 = 1.5;
    }
    iVar1 = FUN_08886d3c(*(int *)(param_1 + 0x40) + 0x434,0x16);
    if (iVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 0x44);
      goto LAB_088b6afc;
    }
    fVar8 = fVar8 + 1.0;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
LAB_088b6afc:
  if (uVar3 < 6) {
    if (uVar3 == 1) {
      FUN_08860260(*(undefined4 *)(param_1 + 0x40));
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,2);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,4);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0x11);
      *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) =
           *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) & 0xfffdffeb;
      iVar4 = FUN_088243d8(DAT_08b00b98,0x57,*(int *)(param_1 + 0x40) + 0x250);
      FUN_088887f8(*(int *)(param_1 + 0x40) + 0x434,0,(int)(fVar8 * 450.0));
      *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      FUN_088b6884(param_1,0x200192,*(int *)(param_1 + 0x40) + 0x250);
      iVar1 = FUN_0885fc80(*(undefined4 *)(param_1 + 0x40));
      if ((iVar1 != 0) && (iVar1 = _DONE_NotZero_DAT_08AC5874(), iVar1 != 0)) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x5100001,0,0);
      }
    }
    else if (uVar3 == 2) {
      FUN_08860260(*(undefined4 *)(param_1 + 0x40));
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,4);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0x11);
      *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) =
           *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) & 0xfffdffee;
      iVar4 = FUN_088243d8(DAT_08b00b98,0x58,*(int *)(param_1 + 0x40) + 0x250);
      FUN_088887f8(*(int *)(param_1 + 0x40) + 0x434,2,(int)(fVar8 * 600.0));
      *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      FUN_088b6884(param_1,0x200194,*(int *)(param_1 + 0x40) + 0x250);
      iVar1 = FUN_0885fc80(*(undefined4 *)(param_1 + 0x40));
      if ((iVar1 != 0) && (iVar1 = _DONE_NotZero_DAT_08AC5874(), iVar1 != 0)) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x5100002,0,0);
      }
    }
    else if (uVar3 == 3) {
      iVar4 = FUN_088243d8(DAT_08b00b98,0x5b,*(int *)(param_1 + 0x40) + 0x250);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,2);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,4);
      *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) =
           *(uint *)(*(int *)(param_1 + 0x40) + 0x1c0) & 0xffffffea;
      iVar5 = *(int *)(param_1 + 0x40) + 0x434;
      fVar6 = (float)FUN_08887b94(iVar5);
      iVar1 = FUN_08887a90(iVar5);
      fVar7 = (float)iVar1;
      if (iVar1 < 0) {
        fVar7 = fVar7 + 4.294967e+09;
      }
      FUN_08887ae4(fVar6 + fVar7 * 0.1,iVar5);
      FUN_088887f8(*(int *)(param_1 + 0x40) + 0x434,0x11,(int)(fVar8 * 90.0));
      *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      FUN_088b6884(param_1,0x200191,*(int *)(param_1 + 0x40) + 0x250);
      iVar1 = FUN_0885fc80(*(undefined4 *)(param_1 + 0x40));
      if ((iVar1 != 0) && (iVar1 = _DONE_NotZero_DAT_08AC5874(), iVar1 != 0)) {
        uVar2 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar2,0x5100003,0,0);
      }
    }
    else if (uVar3 == 4) {
      FUN_08860260(*(undefined4 *)(param_1 + 0x40));
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,2);
      FUN_088865ac(*(int *)(param_1 + 0x40) + 0x434,0x11);
      iVar4 = FUN_088243d8(DAT_08b00b98,0x5a,*(int *)(param_1 + 0x40) + 0x250);
      FUN_088887f8(*(int *)(param_1 + 0x40) + 0x434,4,300);
      *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      FUN_088b6884(param_1,0x200193,*(int *)(param_1 + 0x40) + 0x250);
    }
    else if (uVar3 == 5) {
      *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      FUN_088b6884(param_1,0x200192,*(int *)(param_1 + 0x40) + 0x250);
    }
    else {
      iVar1 = FUN_0882c13c();
      if (iVar1 != 0) {
        uVar2 = FUN_0882c15c();
        FUN_0882c310(uVar2,*(undefined4 *)(param_1 + 0x40));
        *(int *)(*(int *)(param_1 + 0x40) + 0x58c) = *(int *)(*(int *)(param_1 + 0x40) + 0x58c) + 1;
      }
    }
  }
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(iVar4 + 0x1fc) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(iVar1 + 0xc);
    }
  }
  return;
}

