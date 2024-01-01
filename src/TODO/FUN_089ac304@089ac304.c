#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac304(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    iVar6 = 0x32;
    iVar5 = 200;
    iVar4 = param_1 + 0x848;
    do {
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((0x31 < iVar6) && (iVar6 < 0x35)) {
        FUN_089ac2a8(param_1,iVar1,0);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = FUN_089ab7a0(param_1);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((iVar1 == 0) && (uVar2 = iVar6 - 0x32, uVar2 < 6)) {
        if (iVar6 == 0x32) {
LAB_089ac464:
          *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + 24.0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        else {
          if (uVar2 != 1) {
            if (uVar2 == 3) goto LAB_089ac464;
            if (uVar2 != 4) {
              *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
              iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
              goto LAB_089ac4a4;
            }
          }
          *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + 56.0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
      }
LAB_089ac4a4:
      FUN_089a5408(0x3fc00000,0,iVar3,iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x38);
  }
  else {
    iVar6 = 0x32;
    iVar5 = 200;
    iVar4 = param_1 + 0x848;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x38);
  }
  return;
}

