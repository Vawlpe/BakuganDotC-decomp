#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c4fac(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  local_40 = 0;
  local_3c = 0;
  uVar3 = 1;
  local_38 = 0;
  if (*(int *)(param_1 + 0x24) < 2) {
    piVar1 = (int *)FUN_089c59f0();
    iVar4 = (*piVar1 * 2) / 2;
    iVar5 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
    if (1 < iVar5) {
      iVar5 = iVar5 + -2;
    }
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar2 = FUN_089c59f0();
    iVar7 = *(int *)(param_1 + 0x28);
    iVar6 = iVar6 + *(int *)(iVar2 + 4) * iVar5;
    FUN_089c59f0();
    iVar7 = iVar7 + *(int *)(param_1 + 0x2c) * 4;
    if (iVar4 < 1) {
LAB_089c5218:
      iVar4 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30);
      while( true ) {
        if (iVar4 < iVar5) {
          FUN_089c59f0();
          memcpy_jak(iVar6,iVar7,iVar4 << 2);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar4;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - iVar4;
          iVar4 = 0;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = *(int *)(param_1 + 0x38);
          }
          else {
            FUN_089c59f0();
            memcpy_jak(iVar6,iVar7,*(int *)(param_1 + 0x30) << 2);
            FUN_089c59f0();
            *(undefined4 *)(param_1 + 0x2c) = 0;
            iVar6 = iVar6 + *(int *)(param_1 + 0x30) * 4;
            iVar4 = iVar4 - *(int *)(param_1 + 0x30);
            *(undefined4 *)(param_1 + 0x30) = 0;
            iVar5 = *(int *)(param_1 + 0x38);
          }
          if (iVar5 < 0) {
            local_3c = 1;
            local_40 = 0;
            iVar5 = -0x7f9cffdc;
          }
          else {
            iVar5 = zz_sceAtracDecodeData
                              (iVar5,*(undefined4 *)(param_1 + 0x28),&local_40,&local_3c,&local_38);
            if (local_40 == 0) {
              if (local_3c != 0) {
                uVar3 = 0;
              }
            }
            else {
              *(int *)(param_1 + 0x30) = local_40;
            }
          }
          if (iVar5 != 0) {
            local_3c = 1;
            if (iVar4 < 1) {
              iVar4 = *(int *)(param_1 + 0x24);
              goto LAB_089c521c;
            }
            *(undefined4 *)(param_1 + 0x2c) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0;
            FUN_089c59f0();
            memset_jak(iVar6,0,iVar4 << 2);
            goto LAB_089c5218;
          }
          if (iVar4 < 1) {
            iVar4 = *(int *)(param_1 + 0x24);
            goto LAB_089c521c;
          }
          if (*(int *)(param_1 + 0x30) < iVar4) {
            if (0 < *(int *)(param_1 + 0x30)) {
              uVar8 = *(undefined4 *)(param_1 + 0x28);
              FUN_089c59f0();
              memcpy_jak(iVar6,uVar8,*(int *)(param_1 + 0x30) << 2);
              iVar7 = *(int *)(param_1 + 0x28);
              *(undefined4 *)(param_1 + 0x2c) = 0;
              iVar4 = iVar4 - *(int *)(param_1 + 0x30);
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
          }
          else {
            uVar8 = *(undefined4 *)(param_1 + 0x28);
            FUN_089c59f0();
            memcpy_jak(iVar6,uVar8,iVar4 << 2);
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar4;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - iVar4;
            iVar4 = 0;
          }
        }
        if (iVar4 < 1) break;
        iVar5 = *(int *)(param_1 + 0x30);
      }
      iVar4 = *(int *)(param_1 + 0x24);
    }
LAB_089c521c:
    *(int *)(param_1 + 0x24) = iVar4 + 1;
  }
  return uVar3;
}

