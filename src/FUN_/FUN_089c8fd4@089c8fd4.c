#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8fd4(undefined4 param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_30;
  
  local_30 = 0.0;
  if (DAT_08ac58b0 != 0) {
    FUN_08a30170();
    uVar2 = FUN_08a2ff68(DAT_08ac58b0);
    iVar3 = FUN_08a3044c(uVar2);
    fVar1 = local_30;
    while (iVar3 != 0) {
      iVar4 = FUN_08a30434(iVar3);
      iVar3 = FUN_08a3044c(iVar3);
      if (iVar4 != 0) {
        iVar7 = 0;
        iVar8 = -1;
        FUN_08a2e348(iVar4);
        uVar2 = FUN_08a2df8c(iVar4);
        iVar4 = FUN_08a2e774(uVar2);
        while (iVar4 != 0) {
          iVar5 = FUN_08a2e754(iVar4);
          iVar4 = FUN_08a2e774(iVar4);
          if (iVar5 == 0) break;
          local_30 = (float)FUN_089bfc18(param_1,iVar5 + 0x10,iVar5 + 0x1c,0);
          if ((iVar7 == 0) || (local_30 < fVar1)) {
            iVar6 = *(int *)(iVar5 + 4);
            iVar7 = iVar5;
          }
          else {
            iVar6 = *(int *)(iVar5 + 4);
            local_30 = fVar1;
          }
          if (-1 < iVar6) {
            *(undefined4 *)(iVar5 + 4) = 0xffffffff;
            iVar8 = iVar6;
          }
          *(undefined *)(iVar5 + 0x30) = 1;
          fVar1 = local_30;
        }
        if (iVar7 != 0) {
          *(undefined *)(iVar7 + 0x30) = 0;
          *(int *)(iVar7 + 4) = iVar8;
        }
      }
    }
  }
  return;
}

