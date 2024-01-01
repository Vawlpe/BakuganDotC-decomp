#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d04ec(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  
  iVar1 = FUN_088dfa48();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_088dfa48();
    iVar1 = *piVar2;
    *(int *)(param_1 + 0x70) = iVar1;
    if (iVar1 != 0) {
      FUN_088cf0f0(param_1);
      uVar3 = FUN_088e1948();
      iVar1 = *(int *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x74) = uVar3;
      iVar5 = *(int *)(param_1 + 0xcc);
      iVar6 = *(int *)(param_1 + 0x78);
      while (iVar1 != 0) {
        iVar7 = iVar6 + 1;
        if (*(uint *)(iVar1 + 8) < 0x4e) {
LAB_088d0580:
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          if (*(uint *)(iVar1 + 8) < 0x54) {
            *(int *)(param_1 + 0x78) = iVar7;
            iVar7 = iVar6 + 2;
            if (*(int *)(iVar1 + 8) == 0x53) {
              iVar5 = iVar5 + 1;
              *(int *)(param_1 + 0xcc) = iVar5;
            }
            goto LAB_088d0580;
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        *(int *)(param_1 + 0x78) = iVar7;
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + -1;
      *(int *)(param_1 + 0x78) = iVar6;
      *(int *)(param_1 + 0x7c) = iVar6;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar4 = FUN_089d7d74((iVar6 + iVar5 + 0x48) * 4,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
      memset_jak(uVar4,0,4);
      FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0xc);
      FUN_088cf29c(param_1);
      local_20 = *(undefined4 *)(param_1 + 0x1c);
      FUN_088c8e98(param_1 + 0x6c,&local_20);
      piVar2 = (int *)FUN_0880cc48();
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(*piVar2 + 0x464);
      FUN_088d03c0(param_1);
      *(undefined4 *)(param_1 + 0x28) = 2;
    }
  }
  return;
}

