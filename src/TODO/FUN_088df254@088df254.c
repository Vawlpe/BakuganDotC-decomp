#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df254(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_1 + 8) + -0x23;
  if (((iVar3 < 0) || (0x34 < iVar3)) || (*(int *)(param_1 + 0x350) == 0)) {
    FUN_088def24(0x3e4ccccd,param_1,0,1,0);
  }
  else {
    puVar4 = (undefined4 *)(&PTR_PTR_s_00_dan_stay_08abf53c)[iVar3];
    uVar2 = *puVar4;
    puVar7 = puVar4;
    for (uVar5 = 0;
        (iVar3 = strcmp(uVar2,&DAT_08a97738), uVar6 = 0xffffffff, iVar3 != 0 &&
        (puVar7 = puVar7 + 1, uVar6 = uVar5, *(byte *)(*(int *)(param_1 + 0x350) + 0x40) != uVar5));
        uVar5 = uVar5 + 1) {
      uVar2 = *puVar7;
    }
    if (uVar6 != 0xffffffff) {
      uVar2 = FUN_089d9674();
      iVar3 = FUN_089d9c84(uVar2,puVar4[uVar6]);
      if (iVar3 == -1) {
        FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      }
      else {
        iVar1 = FUN_089e0004(param_1,iVar3);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x350);
        }
        else {
          if (param_2 == '\0') {
            return;
          }
          iVar1 = *(int *)(param_1 + 0x350);
        }
        fVar8 = (float)(uint)*(byte *)(iVar1 + 0x44) * 0.01666667;
        if (fVar8 < 0.2) {
          fVar8 = 0.2;
        }
        FUN_089df400(fVar8,param_1,iVar3,(*(byte *)(iVar1 + 0x47) & 4) != 0);
        *(undefined4 *)(param_1 + 0x348) = 0x32;
      }
    }
  }
  return;
}

