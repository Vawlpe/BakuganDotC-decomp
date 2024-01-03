#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d04ec(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *ptr;
  int iVar4;
  int iVar5;
  int iVar6;
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
      iVar4 = *(int *)(param_1 + 0xcc);
      iVar5 = *(int *)(param_1 + 0x78);
      while (iVar1 != 0) {
        iVar6 = iVar5 + 1;
        if (*(uint *)(iVar1 + 8) < 0x4e) {
LAB_088d0580:
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          if (*(uint *)(iVar1 + 8) < 0x54) {
            *(int *)(param_1 + 0x78) = iVar6;
            iVar6 = iVar5 + 2;
            if (*(int *)(iVar1 + 8) == 0x53) {
              iVar4 = iVar4 + 1;
              *(int *)(param_1 + 0xcc) = iVar4;
            }
            goto LAB_088d0580;
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        *(int *)(param_1 + 0x78) = iVar6;
        iVar5 = iVar6;
      }
      iVar5 = iVar5 + -1;
      *(int *)(param_1 + 0x78) = iVar5;
      *(int *)(param_1 + 0x7c) = iVar5;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      ptr = (undefined *)FUN_089d7d74((iVar5 + iVar4 + 0x48) * 4,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined **)(param_1 + 0x1c) = ptr;
      memset_jak(ptr,0,4);
      FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0xc);
      FUN_088cf29c(param_1);
      local_20 = *(undefined4 *)(param_1 + 0x1c);
      FUN_088c8e98(param_1 + 0x6c,&local_20);
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(*piVar2 + 0x464);
      FUN_088d03c0(param_1);
      *(undefined4 *)(param_1 + 0x28) = 2;
    }
  }
  return;
}

