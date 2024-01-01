#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac914(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x2a;
    iVar3 = 0xa8;
    iVar2 = param_1 + 0x708;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2
                   ,7);
      if (iVar4 < 0x2e) {
        if (0x2c < iVar4) {
LAB_089ac9e0:
          iVar1 = FUN_089abfa0(param_1);
          if (iVar1 == 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
            *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xbc) = 0;
          }
        }
      }
      else if (iVar4 == 0x31) goto LAB_089ac9e0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x32);
  }
  else {
    iVar4 = 0x2a;
    iVar3 = 0xa8;
    iVar2 = param_1 + 0x708;
    do {
      FUN_089a54cc(0x3f800000,0,0xc2000000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2
                   ,7);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x32);
  }
  return;
}

