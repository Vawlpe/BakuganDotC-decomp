#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08885ed0(int param_1,uint param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  undefined8 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint extraout_v1;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  undefined4 in_V08;
  
  iVar8 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    uVar4 = 0x48;
    puVar9 = *(ushort **)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 4);
    do {
      iVar11 = iVar7 + 0x10;
      puVar10 = puVar9 + 1;
      if (*(byte *)(iVar7 + 0xd) == uVar4) {
        if (*(ushort *)(iVar7 + 0xe) == param_2) {
          if ((*(ushort *)(iVar7 + 8) & 0x80) == 0) {
            iVar12 = 0;
            iVar6 = *(int *)(iVar7 + 4) + (uint)*puVar9;
            if (*(short *)(iVar7 + 10) != 0) {
              do {
                in_V08 = *(undefined4 *)(iVar6 + 0xc);
                auVar1 = vadd_t(*(undefined (*) [12])(iVar6 + 4),*param_3);
                *(int *)(iVar6 + 4) = auVar1._0_4_;
                *(int *)(iVar6 + 8) = auVar1._4_4_;
                *(int *)(iVar6 + 0xc) = auVar1._8_4_;
                iVar12 = iVar12 + 1;
                iVar6 = iVar6 + 0x10;
              } while (iVar12 < (int)(uint)*(ushort *)(iVar7 + 10));
              goto LAB_08886044;
            }
            uVar5 = (uint)*(ushort *)(param_1 + 0xc);
          }
          else {
            iVar6 = 0;
            iVar12 = *(int *)(iVar7 + 4) + (uint)*puVar9;
            if (*(short *)(iVar7 + 10) == 0) {
              uVar5 = (uint)*(ushort *)(param_1 + 0xc);
            }
            else {
              do {
                uVar2 = vh2f_p(*(undefined8 *)(iVar12 + 2));
                auVar1._8_4_ = in_V08;
                auVar1._0_8_ = uVar2;
                auVar1 = vadd_t(auVar1,*param_3);
                uVar3 = FUN_08885e08(auVar1._0_4_);
                *(undefined2 *)(iVar12 + 2) = uVar3;
                uVar3 = FUN_08885e08(auVar1._4_4_);
                *(undefined2 *)(iVar12 + 4) = uVar3;
                uVar3 = FUN_08885e08(auVar1._8_4_);
                *(undefined2 *)(iVar12 + 6) = uVar3;
                iVar12 = iVar12 + 8;
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)(uint)*(ushort *)(iVar7 + 10));
              uVar5 = (uint)*(ushort *)(param_1 + 0xc);
              uVar4 = extraout_v1;
            }
          }
        }
        else {
          uVar5 = (uint)*(ushort *)(param_1 + 0xc);
        }
      }
      else {
LAB_08886044:
        uVar5 = (uint)*(ushort *)(param_1 + 0xc);
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar10;
      iVar7 = iVar11;
    } while (iVar8 < (int)uVar5);
  }
  return;
}

