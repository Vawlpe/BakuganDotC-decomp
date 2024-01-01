#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889eed0(void)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined auVar5 [12];
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V7C;
  undefined4 in_V7F;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_44;
  float local_40;
  float local_3c;
  
  bVar4 = false;
  if (DAT_08abd4d4 != 0) {
    iVar7 = FUN_089bf93c(0x1e1,1);
    if (iVar7 == 0) {
      *(uint *)(DAT_08abd4d4 + 0xd0) = *(uint *)(DAT_08abd4d4 + 0xd0) | 1;
      *(uint *)(DAT_08abd4d8 + 0xd0) = *(uint *)(DAT_08abd4d8 + 0xd0) | 1;
    }
    else {
      *(uint *)(DAT_08abd4d4 + 0xd0) = *(uint *)(DAT_08abd4d4 + 0xd0) & 0xfffffffe;
      *(uint *)(DAT_08abd4d8 + 0xd0) = *(uint *)(DAT_08abd4d8 + 0xd0) & 0xfffffffe;
    }
  }
  if (DAT_08abd4c8 != 0) {
    if (DAT_08abd4c8 < 2) {
      if (0 < DAT_08abd4c8) {
        DAT_08abd4d0 = DAT_08abd4d0 + 0.06666667;
        if (1.0 <= DAT_08abd4d0) {
          DAT_08abd4d0 = 1.0;
          DAT_08abd4c8 = 2;
          iVar7 = FUN_08824104(DAT_08ac5c70,*(undefined4 *)(&DAT_08a83a28 + DAT_08abd4c4 * 4),
                               &DAT_08b007d0,DAT_08abd4a0);
          uVar3 = DAT_08b0097c;
          uVar2 = DAT_08b00978;
          uVar15 = DAT_08b00974;
          *(undefined4 *)(iVar7 + 0x70) = DAT_08b00970;
          *(undefined4 *)(iVar7 + 0x74) = uVar15;
          *(undefined4 *)(iVar7 + 0x78) = uVar2;
          *(undefined4 *)(iVar7 + 0x7c) = uVar3;
        }
        if (DAT_08abd4d4 != 0) {
          fVar14 = *(float *)(DAT_08abd4d4 + 0xbc) - 0.1;
          if ((int)fVar14 < 1) {
            fVar14 = 0.0;
          }
          *(float *)(DAT_08abd4d4 + 0xbc) = fVar14;
          *(undefined4 *)(DAT_08abd4d8 + 0xbc) = *(undefined4 *)(DAT_08abd4d4 + 0xbc);
        }
        bVar4 = true;
      }
    }
    else if (DAT_08abd4c8 < 3) {
      if ((0x262 < DAT_08abd4cc) ||
         (DAT_08abd4cc = DAT_08abd4cc + 1, iVar7 = FUN_089bf93c(0x14a,1), iVar7 != 0)) {
        DAT_08abd4c8 = 3;
        DAT_08abd4cc = 0x263;
      }
      if (((DAT_08aba77e == '\0') && (iVar7 = FUN_0884c8f4(), iVar7 == 0)) && (DAT_08abd4cc < 0x1c3)
         ) {
        iVar7 = 0x32;
        if (DAT_08abd4c4 == 2) {
          iVar7 = 0x1e;
        }
        iVar8 = FUN_0881b22c();
        if ((iVar8 != 0) && (iVar8 = FUN_0880d354(), iVar8 != 0)) {
          iVar7 = 0x96;
        }
        if (DAT_08abd4cc % iVar7 == 0) {
          iVar7 = FUN_0882c15c();
          iVar7 = FUN_08866190(*(undefined4 *)(iVar7 + 100));
          if (iVar7 != 0) {
            local_90 = *(float *)(iVar7 + 0x20);
            local_88 = *(float *)(iVar7 + 0x28);
            uStack_84 = *(undefined4 *)(iVar7 + 0x2c);
            local_8c = *(float *)(iVar7 + 0x24) + 500.0;
            iVar7 = FUN_0889d57c(&local_90,&local_90);
            fVar14 = local_90;
            if (iVar7 != 0) {
              fVar13 = (float)FUN_089bedc4(0x44160000);
              fVar6 = local_88;
              local_90 = fVar14 + (fVar13 - 300.0);
              fVar14 = (float)FUN_089bedc4(0x44160000);
              local_88 = fVar6 + (fVar14 - 300.0);
              FUN_08823f5c(DAT_08ac5c70,*(undefined4 *)(&DAT_08a83a40 + DAT_08abd4c4 * 4),&local_90)
              ;
            }
          }
        }
      }
      if (((DAT_08abd4cc < 0x227) && (DAT_08abd4c4 == 1)) && (iVar7 = FUN_088660e0(), iVar7 != 0)) {
        puVar11 = (undefined4 *)(iVar7 + 0x20);
        FUN_08823f5c(DAT_08ac5c70,0x60,puVar11);
        FUN_08823f5c(DAT_08ac5c70,0x60,puVar11);
        uStack_64 = *(undefined4 *)(iVar7 + 0x2c);
        auVar1 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),0x43480000);
        local_80 = auVar1._0_4_;
        uStack_7c = auVar1._4_4_;
        uStack_78 = auVar1._8_4_;
        auVar5._4_4_ = *(float *)(iVar7 + 0x24) + 800.0;
        auVar5._0_4_ = *puVar11;
        auVar5._8_4_ = *(undefined4 *)(iVar7 + 0x28);
        auVar1 = vadd_t(auVar5,auVar1);
        local_6c = auVar1._4_4_;
        uVar15 = vrndf1_s();
        local_44 = (float)vsub_s(uVar15,in_V7F);
        local_70 = auVar1._0_4_ + (local_44 * 400.0 - 200.0);
        uVar15 = vrndf1_s();
        local_40 = (float)vsub_s(uVar15,in_V7F);
        local_68 = auVar1._8_4_ + (local_40 * 400.0 - 200.0);
        iVar7 = FUN_0889d57c(&local_70,&local_70);
        if (iVar7 != 0) {
          FUN_08823f5c(DAT_08ac5c70,0x61,&local_70);
        }
      }
    }
    else if (DAT_08abd4c8 < 4) {
      DAT_08abd4d0 = DAT_08abd4d0 - 0.06666667;
      if (DAT_08abd4d0 <= 0.0) {
        DAT_08abd4c8 = 0;
        DAT_08abd4d0 = 0.0;
        iVar7 = 0;
        piVar12 = &DAT_08abd4a0;
        do {
          if (*piVar12 != 0) {
            FUN_0889cd84(*piVar12,0,0);
          }
          iVar7 = iVar7 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar7 < 3);
        DAT_08ac5c74 = (undefined *)FUN_0889d4c0();
      }
      else {
        bVar4 = true;
      }
      if (DAT_08abd4d4 != 0) {
        fVar14 = *(float *)(DAT_08abd4d4 + 0xbc) + 0.1;
        if (1.0 < fVar14) {
          fVar14 = 1.0;
        }
        *(float *)(DAT_08abd4d4 + 0xbc) = fVar14;
        *(undefined4 *)(DAT_08abd4d8 + 0xbc) = *(undefined4 *)(DAT_08abd4d4 + 0xbc);
      }
    }
    if (bVar4) {
      uVar15 = vmul_s(DAT_08abd4d0 * 3.141593,in_V7C);
      local_3c = (float)vcos_s(uVar15);
      puVar10 = &DAT_08af7f70;
      FUN_0889cde8((1.0 - local_3c) * 0.5,&DAT_08af7f70,&DAT_08b00960,
                   &DAT_08a81c38 + DAT_08abd488 * 0xc,&UNK_08a81e18 + DAT_08abd4c4 * 0xc);
      puVar11 = DAT_08ac5934;
      puVar9 = (undefined4 *)FUN_0889e948();
      uVar15 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *puVar11 = *puVar9;
      puVar11[1] = uVar15;
      puVar11[2] = uVar2;
      puVar11[3] = uVar3;
      DAT_08ac5c74 = puVar10;
    }
  }
  return;
}

