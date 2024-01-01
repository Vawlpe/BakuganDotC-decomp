#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08846a70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_088660e0();
  uVar6 = *(uint *)(DAT_08ac58c4 + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x94))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x90));
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = iVar1;
  }
  if (iVar5 == 0) {
    return;
  }
  uVar7 = uVar6;
  if (uVar6 < 0x18) {
    uVar7 = (int)(uVar6 * 4) >> 2;
    switch(uVar6) {
    case 0:
      FUN_088892c8(iVar5 + 0x434);
      iVar1 = FUN_0884693c(param_1,2);
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x20c), iVar1 != 0)) {
        *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) | 1;
        *(undefined4 *)(iVar1 + 0x148) = 0xffffffff;
      }
      break;
    default:
      goto LAB_08846e38;
    case 3:
      iVar1 = 0;
      if (*(int *)(iVar5 + 0x170) != 0) {
        iVar1 = FUN_08854e68(*(int *)(iVar5 + 0x170),0x10);
      }
      FUN_088892c8(iVar5 + 0x434);
      iVar1 = FUN_088467ac(param_1,0 < iVar1,iVar1,1);
      if (iVar1 != 0) {
        iVar1 = FUN_0884693c(param_1,2);
        if (iVar1 != 0) {
          *(undefined *)(iVar1 + 0x59c) = 1;
        }
        iVar1 = FUN_0882c13c();
        if (iVar1 != 0) {
          uVar3 = FUN_0882c15c();
          FUN_0882cd8c(uVar3,0,0,0,0xffffffff);
        }
      }
      break;
    case 5:
      iVar1 = *(int *)(iVar5 + 0x580);
      FUN_088892c8(iVar5 + 0x434);
      FUN_088467ac(param_1,2 < iVar1,iVar1,3);
      break;
    case 7:
      iVar1 = *(int *)(iVar5 + 0x580);
      FUN_088892c8(iVar5 + 0x434);
      FUN_088467ac(param_1,5 < iVar1,iVar1,6);
      break;
    case 9:
      iVar2 = 0;
      FUN_088892c8(iVar5 + 0x434);
      iVar1 = FUN_0884693c(param_1,2);
      if (iVar1 == 0) {
        iVar2 = 1;
LAB_08846cbc:
        bVar4 = iVar2 != 0;
      }
      else {
        bVar4 = false;
        if (*(char *)(iVar1 + 0x701) != '\0') {
          if (*(float *)(iVar5 + 0x28) < 900.0) {
            FUN_088469d4(param_1,1,0);
            iVar2 = 1;
          }
          else {
            bVar4 = false;
            if ((3300.0 <= *(float *)(iVar5 + 0x28)) ||
               (bVar4 = false, *(char *)(iVar5 + 0x665) != '\0')) goto LAB_08846cc0;
            *(undefined *)(iVar5 + 0x665) = 1;
          }
          goto LAB_08846cbc;
        }
      }
LAB_08846cc0:
      FUN_088467ac(param_1,bVar4,iVar2,1);
      break;
    case 0xb:
      iVar2 = 0;
      iVar1 = FUN_08846a20(param_1,1);
      if (iVar1 == 0) {
        iVar2 = 1;
      }
      else if (*(char *)(iVar1 + 0x88) == '\0') {
        iVar2 = 1;
      }
      FUN_088892c8(iVar5 + 0x434);
      iVar1 = FUN_088467ac(param_1,iVar2 != 0,iVar2,1);
      if (iVar1 != 0) {
        iVar1 = FUN_0884693c(param_1,2);
        if (iVar1 != 0) {
          iVar5 = *(int *)(iVar1 + 0x20c);
          if (iVar5 == 0) {
            iVar1 = *(int *)(iVar1 + 0x208);
          }
          else {
            *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffffffe;
            *(undefined4 *)(iVar5 + 0x148) = 0;
            iVar1 = *(int *)(iVar1 + 0x208);
          }
          if (iVar1 != 0) {
            *(uint *)(iVar1 + 0x130) = *(uint *)(iVar1 + 0x130) & 0xffffffbf;
          }
        }
        FUN_088469d4(param_1,0,0);
      }
      break;
    case 0xd:
      iVar1 = FUN_0884693c(param_1,2);
      if (iVar1 != 0) {
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar5 < 1) {
          if (-1 < iVar5) {
            *(undefined4 *)(*(int *)(iVar1 + 0x168) + 0x14) = 0;
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            return;
          }
        }
        else if (iVar5 == 0x3c) {
          *(undefined4 *)(*(int *)(iVar1 + 0x168) + 0x14) = 0xfffff257;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          return;
        }
        *(int *)(param_1 + 0x1c) = iVar5 + 1;
      }
      break;
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x15:
      break;
    case 0x17:
      *(undefined4 *)(DAT_08ac58c4 + 0x2c) = 0x18;
      FUN_088469d4(param_1,1,0);
    }
  }
  else {
LAB_08846e38:
    if ((int)uVar7 < 0xf) {
      FUN_088892c8(iVar5 + 0x434);
    }
  }
  return;
}

