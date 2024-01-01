#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f5cb0(int param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 in_V74;
  int local_34;
  
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  if (0.0 < *(float *)(param_1 + 0x70)) {
    uVar3 = FUN_089f1308(param_2);
    puVar4 = (undefined4 *)FUN_089f1418(uVar3);
    *puVar4 = 0x24000001;
    uVar3 = FUN_089f16bc(puVar4 + 1);
    FUN_089e322c(param_1 + 0x30);
    puVar5 = (uint *)FUN_089e3014(DAT_08ac5c8c,uVar3,0xffffffff);
    uVar14 = 0xffffffff;
    local_34 = 0;
    piVar12 = &DAT_08af8770;
    iVar18 = -1;
    iVar6 = FUN_089f4d98(param_1,uVar11,&DAT_08af8770);
    if (*(char *)(param_1 + 4) != '\0') {
      FUN_089bf03c(&DAT_08af8770,iVar6);
    }
    iVar15 = 0;
    if (0 < iVar6) {
      do {
        iVar13 = *piVar12;
        if (local_34 == *(int *)(iVar13 + 0xd4)) {
          if (iVar18 != *(int *)(iVar13 + 0xd8)) {
            iVar18 = *(int *)(iVar13 + 0xd8);
            goto LAB_089f5dd0;
          }
        }
        else {
          iVar18 = *(int *)(iVar13 + 0xd8);
LAB_089f5dd0:
          local_34 = *(int *)(iVar13 + 0xd4);
          puVar5 = (uint *)FUN_089f7110(local_34,puVar5,iVar18);
        }
        puVar4 = (undefined4 *)FUN_089f4cec(puVar5,iVar13 + 0x20,iVar13 + 0x60);
        if (uVar14 != (*(uint *)(iVar13 + 0xdc) & 0xffff)) {
          uVar14 = *(uint *)(iVar13 + 0xdc) & 0xffff;
          if (uVar14 < 2) {
            if (uVar14 == 0) {
              *puVar4 = 0xdf0000aa;
              puVar4[1] = 0xe0ffffff;
              puVar4[2] = 0xe1000000;
              puVar4 = puVar4 + 3;
            }
            else {
              *puVar4 = 0xdf000032;
              puVar4[1] = 0xe0000000;
              puVar4[2] = 0xe1000000;
              puVar4 = puVar4 + 3;
            }
          }
          else if (uVar14 < 3) {
            *puVar4 = 0xdf0000a2;
            puVar4[1] = 0xe0000000;
            puVar4[2] = 0xe1ffffff;
            puVar4 = puVar4 + 3;
          }
          else if (uVar14 < 4) {
            *puVar4 = 0xdf0002a2;
            puVar4[1] = 0xe0000000;
            puVar4[2] = 0xe1ffffff;
            puVar4 = puVar4 + 3;
          }
        }
        uVar11 = 0xc6000000;
        if ((*(uint *)(iVar13 + 0xd0) & 0x20) != 0) {
          uVar11 = 0xc6000101;
        }
        *puVar4 = uVar11;
        if (*(int *)(iVar13 + 0xe8) == 0) {
          puVar4[1] = 0xdbff0006;
          puVar4[2] = 0xe8000000;
        }
        else {
          puVar4[1] = *(int *)(iVar13 + 0xe8) << 8 | 0xdbff0007;
          uVar11 = 0xe8000000;
          if ((*(uint *)(iVar13 + 0xd0) & 0x40) != 0) {
            uVar11 = 0xe8ffffff;
          }
          puVar4[2] = uVar11;
        }
        puVar7 = (uint *)FUN_089f451c(iVar13,puVar4 + 3);
        uVar8 = FUN_08a324e8(*(undefined4 *)(param_1 + 0x70),iVar13 + 0xb0);
        *puVar7 = uVar8 & 0xffffff | 0x55000000;
        puVar7[1] = uVar8 >> 0x18 | 0x58000000;
        auVar1 = vsat0_q(*(undefined (*) [16])(iVar13 + 0xc0));
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar8 = vi2uc_q(auVar1);
        puVar7[2] = uVar8 & 0xffffff | 0x57000000;
        if (*(int *)(iVar13 + 0xe4) < 2) {
          uVar8 = *(uint *)(iVar13 + 0x120);
          puVar7[3] = 0x12000081;
          puVar5 = puVar7 + 4;
          if (uVar8 != 0) {
            *puVar5 = (uVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar7[5] = uVar8 & 0xffffff | 0x1000000;
            puVar5 = puVar7 + 6;
          }
          *puVar5 = 0x4040004;
        }
        else {
          uVar16 = (int)puVar7 + 0x23;
          puVar17 = (undefined4 *)(uVar16 & 0xfffffff0);
          puVar10 = puVar17 + 0xc;
          puVar7[3] = ((uint)puVar10 >> 0x18 & 0xf) << 0x10 | 0x10000000;
          puVar7[4] = (uint)puVar10 & 0xffffff | 0x8000000;
          puVar9 = *(undefined4 **)(iVar13 + 0x120);
          uVar8 = 0;
          puVar4 = puVar17;
          do {
            uVar11 = puVar9[1];
            uVar3 = puVar9[2];
            uVar2 = puVar9[3];
            *puVar4 = *puVar9;
            puVar4[1] = uVar11;
            puVar4[2] = uVar3;
            puVar4[3] = uVar2;
            uVar8 = uVar8 + 1;
            puVar4 = puVar4 + 4;
            puVar9 = puVar9 + 4;
          } while (uVar8 < 3);
          *puVar10 = 0x12000083;
          puVar5 = puVar17 + 0xd;
          if (puVar17 != (undefined4 *)0x0) {
            *puVar5 = (uVar16 >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar17[0xe] = uVar16 & 0xfffff0 | 0x1000000;
            puVar5 = puVar17 + 0xf;
          }
          *puVar5 = 0x4040004;
        }
        puVar5 = puVar5 + 1;
        iVar15 = iVar15 + 1;
        piVar12 = piVar12 + 2;
      } while (iVar15 < iVar6);
    }
    FUN_089f13c8(param_2,puVar5);
  }
  return;
}

