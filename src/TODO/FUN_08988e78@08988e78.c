#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08988e78(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x19;
    iVar3 = 100;
    iVar2 = param_1 + 0x45c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (0x1b < iVar4) {
        FUN_089f4c84();
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      if (iVar4 < 0x1a) {
        if (0x18 < iVar4) {
          *(undefined4 *)(iVar1 + 0xb0) = 0;
LAB_08988f4c:
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        }
      }
      else if (iVar4 == 0x1c) {
        *(undefined4 *)(iVar1 + 0xb0) = 0;
        goto LAB_08988f4c;
      }
      FUN_089a5408(0x3f800000,0,iVar1,iVar2,3);
      FUN_089a51fc(0x3f800000,0x40000000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x1f);
    FUN_08988ddc(0,param_1);
  }
  else {
    iVar4 = 0x19;
    iVar3 = 100;
    iVar2 = param_1 + 0x45c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x1f);
  }
  return;
}

