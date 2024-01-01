#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08983e9c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x11;
    iVar3 = 0x44;
    iVar2 = param_1 + 0x31c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (0x13 < iVar4) {
        FUN_089f4c84();
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      if (iVar4 < 0x12) {
        if (0x10 < iVar4) {
          *(undefined4 *)(iVar1 + 0xb0) = 0;
LAB_08983f70:
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        }
      }
      else if (iVar4 == 0x14) {
        *(undefined4 *)(iVar1 + 0xb0) = 0;
        goto LAB_08983f70;
      }
      FUN_089a5408(0x3f800000,0,iVar1,iVar2,3);
      FUN_089a51fc(0x3f800000,0x40000000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x17);
    FUN_08983e00(0,param_1);
  }
  else {
    iVar4 = 0x11;
    iVar3 = 0x44;
    iVar2 = param_1 + 0x31c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x17);
  }
  return;
}

