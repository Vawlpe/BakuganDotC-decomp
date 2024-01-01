#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d57dc(int param_1)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  short *psVar8;
  int iVar9;
  byte bVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_V7D;
  undefined4 uVar16;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0 [4];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_48;
  int local_44;
  byte local_40;
  undefined local_3f;
  int local_3c;
  undefined4 *local_38;
  
  local_48 = param_1;
  FUN_088d935c();
  local_44 = FUN_088e1948();
  if ((*(uint *)(*(int *)(param_1 + 0x180) + 0x130) & 0x10) != 0) {
    if (*(char *)(local_48 + 0x1e0) == '\0') {
      if (*(char *)(*(int *)(local_48 + 0x170) + 0x28) != '\0') {
        bVar1 = *(byte *)(*(int *)(local_48 + 0x170) + 0x2c);
        local_3f = 10;
        bVar10 = 1;
        if (bVar1 < 6) {
          if (bVar1 == 1) {
            bVar10 = 1;
            local_3f = 0xb;
          }
          else if (bVar1 == 2) {
            bVar10 = 1;
            local_3f = 0xc;
          }
          else if (bVar1 == 3) {
            bVar10 = 3;
            local_3f = 10;
          }
          else if (bVar1 == 4) {
            bVar10 = 3;
            local_3f = 0xb;
          }
          else if (bVar1 == 5) {
            bVar10 = 3;
            local_3f = 0xc;
          }
          else {
            bVar10 = 1;
            local_3f = 10;
          }
        }
        iVar6 = FUN_089c59d4();
        if (iVar6 != 0) {
          uVar3 = FUN_089c59f0();
          FUN_089c6350(uVar3,0x2c00031,0,0);
        }
        iVar6 = 0;
        local_40 = bVar10;
        if (bVar10 != 0) {
          puVar11 = local_f0;
          iVar9 = local_48;
          do {
            iVar4 = FUN_089bfa40(0xbb9);
            if (iVar4 != 0) {
              FUN_088cf090();
            }
            local_3c = 0;
            local_38 = puVar11;
            FUN_089d8634();
            uVar3 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar5 = FUN_089d7d74(0x2e0,0,0);
            FUN_089d816c(uVar3);
            FUN_089d866c();
            puVar11 = local_38;
            iVar4 = local_3c;
            if (iVar5 != 0) {
              FUN_088a01c0(iVar5,local_3f,*(undefined4 *)(iVar9 + 0x184),0x1778,0);
              iVar4 = iVar5;
            }
            iVar5 = *(int *)(local_48 + 0x180);
            local_e0 = *(undefined4 *)(iVar5 + 0x150);
            uStack_dc = *(undefined4 *)(iVar5 + 0x154);
            uStack_d8 = *(undefined4 *)(iVar5 + 0x158);
            uStack_d4 = *(undefined4 *)(iVar5 + 0x15c);
            local_c0 = *(undefined4 *)(local_48 + 0x20);
            uVar3 = *(undefined4 *)(local_48 + 0x24);
            uVar13 = *(undefined4 *)(local_48 + 0x28);
            uVar14 = *(undefined4 *)(local_48 + 0x2c);
            local_a0 = *(undefined4 *)*(undefined (*) [12])(local_44 + 0x20);
            local_9c = *(undefined4 *)(local_44 + 0x24);
            local_98 = *(undefined4 *)(local_44 + 0x28);
            local_94 = *(undefined4 *)(local_44 + 0x2c);
            iVar5 = *(int *)(local_48 + 0x180);
            local_b0 = *(undefined4 *)*(undefined (*) [12])(iVar5 + 0x150);
            local_ac = *(undefined4 *)(iVar5 + 0x154);
            local_a8 = *(undefined4 *)(iVar5 + 0x158);
            local_a4 = *(undefined4 *)(iVar5 + 0x15c);
            auVar2 = vsub_t(*(undefined (*) [12])(local_44 + 0x20),
                            *(undefined (*) [12])(iVar5 + 0x150));
            local_90 = auVar2._0_4_;
            uStack_8c = auVar2._4_4_;
            uStack_88 = auVar2._8_4_;
            uVar15 = vdot_t(auVar2,auVar2);
            uVar16 = vcmp_s(8,uVar15,local_90);
            vrsq_s(uVar15);
            uVar15 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar2,uVar15);
            local_100 = auVar2._0_4_;
            uStack_fc = auVar2._4_4_;
            uStack_f8 = auVar2._8_4_;
            local_d0 = local_100;
            uStack_cc = uStack_fc;
            uStack_c8 = uStack_f8;
            local_bc = uVar3;
            local_b8 = uVar13;
            local_b4 = uVar14;
            uStack_84 = local_94;
            *puVar11 = local_c0;
            puVar11[1] = uVar3;
            puVar11[2] = uVar13;
            puVar11[3] = uVar14;
            FUN_088a0644(iVar4,iVar6,&local_100,puVar11);
            iVar6 = iVar6 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar6 < (int)(uint)local_40);
        }
      }
      *(undefined *)(local_48 + 0x1e0) = 1;
    }
    iVar6 = *(int *)(local_44 + 0x418);
    uVar3 = *(undefined4 *)(local_48 + 0x24);
    uVar13 = *(undefined4 *)(local_48 + 0x28);
    uVar14 = *(undefined4 *)(local_48 + 0x2c);
    *(undefined4 *)(iVar6 + 0x160) = *(undefined4 *)(local_48 + 0x20);
    *(undefined4 *)(iVar6 + 0x164) = uVar3;
    *(undefined4 *)(iVar6 + 0x168) = uVar13;
    *(undefined4 *)(iVar6 + 0x16c) = uVar14;
    *(uint *)(*(int *)(local_48 + 0x180) + 0x130) =
         *(uint *)(*(int *)(local_48 + 0x180) + 0x130) & 0xffffffef;
    *(undefined4 *)(local_48 + 0x16c) = 1;
  }
  if ((-1 < *(int *)(local_48 + 0x16c)) && (*(uint *)(local_48 + 0x16c) < 2)) {
    iVar9 = *(int *)(local_48 + 0x16c) * 8;
    iVar6 = local_48 + *(short *)(&UNK_08a96a30 + iVar9);
    if (*(short *)(&UNK_08a96a32 + iVar9) == 0) {
      pcVar7 = *(code **)(&UNK_08a96a34 + *(int *)(local_48 + 0x16c) * 8);
    }
    else {
      iVar9 = *(int *)(local_48 + 0x16c) * 8;
      psVar8 = (short *)(*(int *)(iVar6 + *(int *)(&UNK_08a96a34 + iVar9)) +
                        *(short *)(&UNK_08a96a32 + iVar9) * 8);
      pcVar7 = *(code **)(psVar8 + 2);
      iVar6 = iVar6 + *psVar8;
    }
    (*pcVar7)(iVar6);
  }
  iVar6 = local_48;
  FUN_089dfc04(local_48);
  FUN_089dfdb0(iVar6);
  fVar12 = (float)FUN_089df648(iVar6);
  if ((fVar12 <= 1.0) && (fVar12 = (float)FUN_089df794(local_48), iVar6 = local_48, fVar12 == 1.0))
  {
    FUN_089df450(0,local_48);
    iVar9 = *(int *)(iVar6 + 0x14);
    (**(code **)(iVar9 + 0x34))(0,iVar6 + *(short *)(iVar9 + 0x30));
  }
  return;
}

