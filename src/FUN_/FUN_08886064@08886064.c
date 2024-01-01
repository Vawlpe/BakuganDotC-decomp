#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886064(int param_1,uint param_2,undefined (*param_3) [12])

{
  ushort uVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined8 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint extraout_v1;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined (*pauVar13) [12];
  int iVar14;
  int iVar15;
  undefined (*pauVar16) [12];
  undefined (*pauVar17) [12];
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 in_V7D;
  undefined local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_10;
  int local_c;
  
  iVar9 = *(int *)(param_1 + 4);
  iVar7 = 0;
  iVar10 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    do {
      if (*(char *)(iVar9 + 0xd) == 'H') {
        if (*(ushort *)(iVar9 + 0xe) == param_2) {
          iVar10 = iVar10 + 1;
          goto LAB_088860b4;
        }
        uVar1 = *(ushort *)(param_1 + 0xc);
      }
      else {
LAB_088860b4:
        uVar1 = *(ushort *)(param_1 + 0xc);
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar7 < (int)(uint)uVar1);
  }
  if (iVar10 != 0) {
    fVar20 = (float)iVar10;
    iVar9 = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar19 = 0;
      pauVar13 = (undefined (*) [12])&local_30;
      fVar18 = 1.0;
      uVar6 = 0x48;
      pauVar17 = (undefined (*) [12])local_50;
      pauVar16 = (undefined (*) [12])&local_40;
      iVar7 = *(int *)(param_1 + 4);
      puVar11 = *(ushort **)(param_1 + 8);
      fVar21 = fVar20;
      do {
        iVar10 = iVar7 + 0x10;
        puVar12 = puVar11 + 1;
        if (*(byte *)(iVar7 + 0xd) == uVar6) {
          if (*(ushort *)(iVar7 + 0xe) == param_2) {
            local_38 = fVar20 / fVar21;
            local_3c = local_38;
            local_40 = local_38;
            local_34 = uVar19;
            auVar3 = vmul_t(*param_3,*pauVar16);
            *(int *)*pauVar17 = auVar3._0_4_;
            *(int *)(*pauVar17 + 4) = auVar3._4_4_;
            *(int *)(*pauVar17 + 8) = auVar3._8_4_;
            *(undefined4 *)pauVar17[1] = in_V7D;
            uVar22 = *(undefined4 *)(*pauVar17 + 8);
            auVar2 = *pauVar17;
            auVar3 = *pauVar17;
            uVar23 = *(undefined4 *)pauVar17[1];
            fVar20 = fVar20 - fVar18;
            if ((*(ushort *)(iVar7 + 8) & 0x80) == 0) {
              iVar15 = 0;
              iVar14 = *(int *)(iVar7 + 4) + (uint)*puVar11;
              if (*(short *)(iVar7 + 10) != 0) {
                do {
                  uVar22 = *(undefined4 *)(iVar14 + 8);
                  uVar23 = *(undefined4 *)(iVar14 + 0xc);
                  uVar24 = *(undefined4 *)(iVar14 + 0x10);
                  *(undefined4 *)*pauVar13 = *(undefined4 *)(iVar14 + 4);
                  *(undefined4 *)(*pauVar13 + 4) = uVar22;
                  *(undefined4 *)(*pauVar13 + 8) = uVar23;
                  *(undefined4 *)pauVar13[1] = uVar24;
                  uVar22 = *(undefined4 *)pauVar13[1];
                  auVar3 = vadd_t(*pauVar13,auVar2);
                  *(int *)*pauVar13 = auVar3._0_4_;
                  *(int *)(*pauVar13 + 4) = auVar3._4_4_;
                  *(int *)(*pauVar13 + 8) = auVar3._8_4_;
                  *(undefined4 *)pauVar13[1] = uVar22;
                  *(undefined4 *)(iVar14 + 4) = local_30;
                  *(undefined4 *)(iVar14 + 8) = local_2c;
                  *(undefined4 *)(iVar14 + 0xc) = local_28;
                  iVar15 = iVar15 + 1;
                  iVar14 = iVar14 + 0x10;
                } while (iVar15 < (int)(uint)*(ushort *)(iVar7 + 10));
                goto LAB_08886280;
              }
              uVar8 = (uint)*(ushort *)(param_1 + 0xc);
            }
            else {
              iVar14 = 0;
              iVar15 = *(int *)(iVar7 + 4) + (uint)*puVar11;
              local_10 = param_2;
              local_c = param_1;
              if (*(short *)(iVar7 + 10) == 0) {
                uVar8 = (uint)*(ushort *)(param_1 + 0xc);
              }
              else {
                do {
                  uVar4 = vh2f_p(*(undefined8 *)(iVar15 + 2));
                  *(int *)*pauVar13 = (int)uVar4;
                  *(int *)(*pauVar13 + 4) = (int)((ulonglong)uVar4 >> 0x20);
                  *(undefined4 *)(*pauVar13 + 8) = uVar22;
                  *(undefined4 *)pauVar13[1] = uVar23;
                  uVar24 = *(undefined4 *)pauVar13[1];
                  auVar2 = vadd_t(*pauVar13,auVar3);
                  *(int *)*pauVar13 = auVar2._0_4_;
                  *(int *)(*pauVar13 + 4) = auVar2._4_4_;
                  *(int *)(*pauVar13 + 8) = auVar2._8_4_;
                  *(undefined4 *)pauVar13[1] = uVar24;
                  uVar5 = FUN_08885e08(local_30);
                  *(undefined2 *)(iVar15 + 2) = uVar5;
                  uVar5 = FUN_08885e08(local_2c);
                  *(undefined2 *)(iVar15 + 4) = uVar5;
                  uVar5 = FUN_08885e08(local_28);
                  *(undefined2 *)(iVar15 + 6) = uVar5;
                  iVar15 = iVar15 + 8;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)(uint)*(ushort *)(iVar7 + 10));
                uVar8 = (uint)*(ushort *)(local_c + 0xc);
                uVar6 = extraout_v1;
                param_2 = local_10;
                param_1 = local_c;
              }
            }
          }
          else {
            uVar8 = (uint)*(ushort *)(param_1 + 0xc);
          }
        }
        else {
LAB_08886280:
          uVar8 = (uint)*(ushort *)(param_1 + 0xc);
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar10;
        puVar11 = puVar12;
      } while (iVar9 < (int)uVar8);
    }
  }
  return;
}

