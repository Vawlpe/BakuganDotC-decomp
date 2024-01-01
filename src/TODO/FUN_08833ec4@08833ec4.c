#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08833ec4(int param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_V74;
  undefined4 in_V7C;
  
  iVar6 = FUN_0882c548();
  iVar9 = *(int *)(param_1 + 0x14);
  iVar13 = *(int *)(iVar9 + 0x314);
  iVar14 = *(int *)(iVar9 + 0x17c);
  iVar9 = *(int *)(iVar9 + 0x2e8);
  if (iVar6 != 0) {
    bVar2 = false;
    if (*(int *)(iVar6 + 0x570) == 0) {
      iVar7 = 0;
      if (*(int *)(iVar6 + 0x578) != 0) {
        iVar7 = *(int *)(iVar6 + 0x578);
      }
    }
    else {
      bVar2 = true;
      iVar7 = *(int *)(iVar6 + 0x570);
    }
    if (iVar7 == 0) {
      *(uint *)(iVar13 + 0xd0) = *(uint *)(iVar13 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x520) = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x520);
      if (iVar6 < 1) {
        if (iVar6 < 0) {
          return;
        }
        iVar12 = 0;
        iVar6 = param_1;
        do {
          *(undefined4 *)(iVar6 + 0x534) = 0;
          iVar12 = iVar12 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar12 < 3);
        *(undefined4 *)(param_1 + 0x52c) = 0;
        *(undefined4 *)(param_1 + 0x530) = 0x3fc90fdb;
        if (bVar2) {
          *(uint *)(iVar13 + 0xd0) = *(uint *)(iVar13 + 0xd0) | 1;
        }
        *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) | 1;
        *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
        *(undefined4 *)(param_1 + 0x524) = 0;
        *(undefined4 *)(param_1 + 0x528) = 0;
        *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x520) + 1;
      }
      else if (1 < iVar6) {
        return;
      }
      fVar15 = *(float *)(param_1 + 0x52c) + 0.1396263;
      *(float *)(param_1 + 0x52c) = fVar15;
      if (6.283185 <= fVar15) {
        *(float *)(param_1 + 0x52c) = *(float *)(param_1 + 0x52c) - 6.283185;
      }
      fVar15 = *(float *)(param_1 + 0x530) + 0.2094395;
      *(float *)(param_1 + 0x530) = fVar15;
      if (6.283185 <= fVar15) {
        *(float *)(param_1 + 0x530) = *(float *)(param_1 + 0x530) - 6.283185;
      }
      uVar5 = DAT_08b0086c;
      uVar4 = DAT_08b00868;
      uVar3 = DAT_08b00864;
      uVar17 = DAT_08b00860;
      uVar16 = vmul_s(*(undefined4 *)(param_1 + 0x52c),in_V7C);
      fVar15 = (float)vsin_s(uVar16);
      uVar10 = 0;
      iVar9 = param_1 + 0x534;
      iVar6 = param_1;
      do {
        auVar1._4_4_ = uVar3;
        auVar1._0_4_ = uVar17;
        auVar1._8_4_ = uVar4;
        auVar1._12_4_ = uVar5;
        auVar1 = vsat0_q(auVar1);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar16 = vi2uc_q(auVar1);
        *(undefined4 *)(iVar6 + 0x534) = uVar16;
        uVar11 = (undefined)(int)((fVar15 * 0.1 + 0.15) * 255.0);
        if ((uVar10 & 1) != 0) {
          uVar11 = 0;
        }
        *(undefined *)(iVar9 + 3) = uVar11;
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 4;
        iVar9 = iVar9 + 4;
      } while ((int)uVar10 < 3);
      uVar17 = vmul_s(*(undefined4 *)(param_1 + 0x530),in_V7C);
      fVar15 = (float)vsin_s(uVar17);
      fVar15 = fVar15 * 0.25 + 0.9;
      iVar6 = (iVar7 / 0x1e + 1) % 10;
      FUN_089f4a90((float)(iVar6 / 5),(float)(iVar6 % 5),iVar13);
      FUN_089f4954(fVar15,fVar15,0,iVar13,0);
      iVar6 = *(int *)(param_1 + 0x524);
      *(int *)(param_1 + 0x524) = iVar6 + 1;
      if (8 < iVar6) {
        puVar8 = (uint *)(param_1 + 0x528);
        *puVar8 = *puVar8 + 1;
        uVar10 = *puVar8;
        if ((int)uVar10 < 0) {
          uVar10 = -(uVar10 & 1);
        }
        else {
          uVar10 = uVar10 & 1;
        }
        *puVar8 = uVar10;
        *(undefined4 *)(param_1 + 0x524) = 0;
      }
      FUN_089f4a90((float)*(int *)(param_1 + 0x528),0,iVar14);
    }
  }
  return;
}

