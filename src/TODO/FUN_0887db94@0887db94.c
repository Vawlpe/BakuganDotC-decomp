#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887db94(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  float fVar7;
  
  if (0x78 < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x200,param_1 + 0x60);
    iVar4 = FUN_08823f5c(DAT_08b00920,param_3,param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0xb0);
    *(int *)(iVar4 + 0x1fc) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(iVar5 + 0xc);
    }
    FUN_08877060(param_1,0x200098,0,0,0);
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x10c) = 0x41000000;
  }
  else {
    FUN_08877af0(*(undefined4 *)(param_1 + 0x20),0x42f00000,param_1,1,0);
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x114) != '\0') || (iVar4 = FUN_088787a0(param_1), iVar4 != 0)) {
      FUN_08824658(DAT_08b00920,0x200,pauVar6);
      iVar4 = FUN_08823f5c(DAT_08b00920,param_3,pauVar6);
      iVar5 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar4 + 0x1fc) = iVar5;
      if (iVar5 != 0) {
        *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(iVar5 + 0xc);
      }
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    if (4 < *(int *)(param_1 + 0xf4)) {
      fVar7 = *(float *)(param_1 + 0xcc);
      bVar1 = *(int *)(param_1 + 0xf4) == 5;
      if (bVar1) {
        fVar7 = fVar7 * 0.5;
      }
      iVar4 = FUN_08878084(fVar7,param_1,pauVar6,(undefined (*) [12])(param_1 + 0x70),param_2,3,
                           bVar1,0x31bf337e);
      if (iVar4 != 0) {
        FUN_08824658(DAT_08b00920,0x200,pauVar6);
        iVar4 = FUN_08823f5c(DAT_08b00920,param_3,pauVar6);
        iVar5 = *(int *)(param_1 + 0xb0);
        *(int *)(iVar4 + 0x1fc) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(iVar5 + 0xc);
        }
        FUN_08877060(param_1,0x200098,0,0,0);
        FUN_08876ee0(param_1);
        return;
      }
    }
    fVar7 = *(float *)(param_1 + 0x20) - 0.3;
    if ((int)fVar7 < 1) {
      fVar7 = 0.0;
    }
    *(float *)(param_1 + 0x20) = fVar7;
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
    auVar2 = vadd_t(*pauVar6,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar6 = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x10c);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) * 0.8;
  }
  return;
}

