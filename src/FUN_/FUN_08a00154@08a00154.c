#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00154(undefined4 param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  
  uVar6 = FUN_089c9d1c();
  iVar7 = FUN_089c9da8(param_1);
  iVar8 = FUN_089edb58();
  puVar5 = DAT_08ac5934;
  if (iVar8 == 0) {
    uVar9 = 2;
    FUN_089eda24(0);
  }
  else {
    uVar9 = 0;
    switch(uVar6) {
    case 0:
      uVar6 = FUN_089edb80();
      FUN_089edf24(uVar6,iVar7);
      break;
    case 1:
      uVar6 = FUN_089edb80();
      iVar7 = FUN_089edf70(uVar6);
      if (iVar7 == 0) {
        uVar9 = 2;
      }
      break;
    case 2:
      iVar8 = FUN_089edb80();
      uVar6 = vuc2i_s(iVar7);
      auVar4._12_4_ = in_V0C;
      auVar4._8_4_ = in_V08;
      auVar4._4_4_ = in_V04;
      auVar4._0_4_ = uVar6;
      auVar1 = vi2f_q(auVar4,0x1f);
      *(int *)(iVar8 + 0x20) = auVar1._0_4_;
      *(int *)(iVar8 + 0x24) = auVar1._4_4_;
      *(int *)(iVar8 + 0x28) = auVar1._8_4_;
      *(int *)(iVar8 + 0x2c) = auVar1._12_4_;
      iVar7 = FUN_089edb80();
      iVar8 = FUN_089edb80();
      uVar6 = *(undefined4 *)(iVar8 + 0x24);
      uVar2 = *(undefined4 *)(iVar8 + 0x28);
      uVar3 = *(undefined4 *)(iVar8 + 0x2c);
      *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar8 + 0x20);
      *(undefined4 *)(iVar7 + 0x34) = uVar6;
      *(undefined4 *)(iVar7 + 0x38) = uVar2;
      *(undefined4 *)(iVar7 + 0x3c) = uVar3;
      break;
    case 3:
      iVar8 = FUN_089edb80();
      uVar6 = vuc2i_s(iVar7);
      auVar1._12_4_ = in_V0C;
      auVar1._8_4_ = in_V08;
      auVar1._4_4_ = in_V04;
      auVar1._0_4_ = uVar6;
      auVar1 = vi2f_q(auVar1,0x1f);
      *(int *)(iVar8 + 0x40) = auVar1._0_4_;
      *(int *)(iVar8 + 0x44) = auVar1._4_4_;
      *(int *)(iVar8 + 0x48) = auVar1._8_4_;
      *(int *)(iVar8 + 0x4c) = auVar1._12_4_;
      break;
    case 4:
      uVar6 = FUN_089edb80();
      FUN_089edde8(uVar6,iVar7 != 0);
      break;
    case 5:
      iVar8 = FUN_089edb80();
      fVar10 = (float)iVar7;
      if (iVar7 < 0) {
        fVar10 = fVar10 + 4.294967e+09;
      }
      *(float *)(iVar8 + 0x10) = fVar10;
      break;
    case 6:
      if (iVar7 < 1) {
        if (-1 < iVar7) {
          iVar7 = FUN_089edb80();
          uVar6 = *(undefined4 *)(iVar7 + 0x34);
          uVar2 = *(undefined4 *)(iVar7 + 0x38);
          uVar3 = *(undefined4 *)(iVar7 + 0x3c);
          *puVar5 = *(undefined4 *)(iVar7 + 0x30);
          puVar5[1] = uVar6;
          puVar5[2] = uVar2;
          puVar5[3] = uVar3;
        }
      }
      else if (iVar7 < 2) {
        iVar7 = FUN_089edb80();
        uVar6 = *(undefined4 *)(iVar7 + 0x44);
        uVar2 = *(undefined4 *)(iVar7 + 0x48);
        uVar3 = *(undefined4 *)(iVar7 + 0x4c);
        *puVar5 = *(undefined4 *)(iVar7 + 0x40);
        puVar5[1] = uVar6;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      break;
    case 7:
      FUN_089ed9b0(iVar7);
    }
  }
  return uVar9;
}

