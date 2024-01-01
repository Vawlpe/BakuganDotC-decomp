#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088c0198)
// WARNING: Removing unreachable block (ram,0x088c0144)
// WARNING: Removing unreachable block (ram,0x088bfdd0)
// WARNING: Removing unreachable block (ram,0x088bffa4)
// WARNING: Removing unreachable block (ram,0x088bff50)
// WARNING: Removing unreachable block (ram,0x088c0a98)
// WARNING: Removing unreachable block (ram,0x088bff38)
// WARNING: Removing unreachable block (ram,0x088bff54)
// WARNING: Removing unreachable block (ram,0x088bfd4c)
// WARNING: Removing unreachable block (ram,0x088bfdb8)
// WARNING: Removing unreachable block (ram,0x088bfdd4)
// WARNING: Removing unreachable block (ram,0x088c012c)
// WARNING: Removing unreachable block (ram,0x088c0148)
// WARNING: Removing unreachable block (ram,0x088c0ab0)
// WARNING: Removing unreachable block (ram,0x088c0ab4)
// WARNING: Removing unreachable block (ram,0x088c0b04)
// WARNING: Removing unreachable block (ram,0x088c0b1c)
// WARNING: Removing unreachable block (ram,0x088c0b20)
// WARNING: Removing unreachable block (ram,0x088bfd64)
// WARNING: Removing unreachable block (ram,0x088bffbc)
// WARNING: Removing unreachable block (ram,0x088c01b0)
// WARNING: Switch with 1 destination removed at 0x088bfe74 : 7 cases all go to same destination

void FUN_088bf690(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  int iVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined auStack_2e0 [64];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  float local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  int local_240 [4];
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float local_214;
  undefined4 local_210;
  float local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  int local_1d0 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_1a4;
  undefined4 local_1a0;
  float local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  int local_160 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_88;
  int *local_84;
  undefined4 *local_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 *local_48;
  
  local_74 = param_3;
  local_70 = param_2;
  FUN_089b4c84(auStack_2e0,"F%d_b%02d.fol",param_2);
  iVar9 = FUN_089be054(DAT_08ac520c,auStack_2e0);
  if (iVar9 != 0) {
    DAT_08abd908 = 0;
    local_7c = (uint)*(ushort *)(iVar9 + 2);
    local_80 = (undefined4 *)(param_1 + 0x6d0);
    local_88 = 0;
    *local_80 = in_V72;
    *(undefined4 *)(param_1 + 0x6d4) = in_V76;
    *(undefined4 *)(param_1 + 0x6d8) = in_V7A;
    *(undefined4 *)(param_1 + 0x6dc) = in_V7E;
    iVar16 = 0;
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    if (local_7c != 0) {
      local_78 = param_1 + 0x6fc;
      fVar10 = 1.525902e-05;
      iVar13 = 2;
      uVar14 = 3;
      puVar17 = &local_110;
      piVar15 = (int *)(iVar9 + 8);
      do {
        iVar9 = FUN_088bddf8(local_70,local_74,iVar16);
        local_84 = piVar15 + 0xe;
        if (iVar9 != 0) {
          local_290 = (float)*piVar15 * 0.0002441406;
          local_28c = (float)piVar15[1] * 0.0002441406;
          local_288 = (float)piVar15[2] * 0.0002441406;
          local_284 = 0;
          auVar3._4_4_ = local_28c;
          auVar3._0_4_ = local_290;
          auVar3._8_4_ = local_288;
          auVar3 = vscl_t(auVar3,0x41a00000);
          local_2a0 = auVar3._0_4_;
          uStack_29c = auVar3._4_4_;
          uStack_298 = auVar3._8_4_;
          *local_80 = local_2a0;
          local_80[1] = uStack_29c;
          local_80[2] = uStack_298;
          local_80[3] = in_V7D;
        }
        if (*(int *)(DAT_08ac58c4 + 4) == 0x20) {
          if (((*(short *)(piVar15 + 6) != 800) && (*(short *)(piVar15 + 6) != 0x321)) &&
             (*(short *)(piVar15 + 6) != 0x327)) {
            sVar2 = *(short *)(piVar15 + 6);
            goto LAB_088bf898;
          }
        }
        else {
          sVar2 = *(short *)(piVar15 + 6);
LAB_088bf898:
          iVar9 = (int)sVar2;
          if (iVar9 < 0xbbe) {
            switch(iVar9) {
            case 800:
            case 0x321:
            case 0x323:
            case 0x324:
            case 0x327:
switchD_088bf900_caseD_320:
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar9 = FUN_089d7d74(0x270,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              if (iVar9 != 0) {
                FUN_088d9ee4(iVar9,0,piVar15,*(undefined2 *)(piVar15 + 6),0);
              }
              break;
            case 0x322:
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar9 = FUN_089d7d74(0x220,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              if (iVar9 != 0) {
                FUN_088d6088(iVar9,0x10,piVar15,*(undefined2 *)(piVar15 + 6),0);
              }
              break;
            case 0x325:
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar9 = FUN_089d7d74(0x1b0,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              if (iVar9 != 0) {
                FUN_088d78ec(iVar9,0x11,piVar15,*(undefined2 *)(piVar15 + 6),0);
              }
              break;
            default:
              if (iVar9 < 0x75) {
                if (0x72 < iVar9) {
LAB_088c06b4:
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(400,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088da60c(iVar9,0,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                  break;
                }
              }
              else if (iVar9 == 0x77) goto LAB_088c06b4;
            case 0x326:
LAB_088c0bc4:
              DAT_08abd908 = DAT_08abd908 + 1;
            }
          }
          else if (iVar9 < 0x1394) {
            if (iVar9 < 5000) {
              if (iVar9 < 0xbe0) {
                    // WARNING: Could not recover jumptable at 0x088bf934. Too many branches
                    // WARNING: Treating indirect jump as call
                (*(code *)(&PTR_LAB_08a92f40)[iVar9 + -0xbbe])();
                return;
              }
              goto LAB_088c0bc4;
            }
            if (iVar9 < 0x138e) {
              local_240[0] = iVar13;
              local_240[1] = 5;
              local_240[2] = 4;
              local_240[3] = 6;
              local_230 = 0;
              local_22c = 1;
              local_228 = 0;
              local_210 = 0;
              local_214 = (float)(int)*(short *)((int)piVar15 + 0x1a) * 6.283185 * fVar10;
              if (3.141593 < local_214) {
                local_214 = local_214 - 6.283185;
              }
              else if (local_214 <= -3.141593) {
                local_214 = local_214 + 6.283185;
              }
              uStack_208 = 0;
              uStack_204 = 0;
              local_250 = (float)*piVar15 * 0.0002441406;
              local_24c = (float)piVar15[1] * 0.0002441406;
              local_248 = (float)piVar15[2] * 0.0002441406;
              local_244 = 0.0;
              auVar5._4_4_ = local_24c;
              auVar5._0_4_ = local_250;
              auVar5._8_4_ = local_248;
              auVar3 = vscl_t(auVar5,0x41a00000);
              local_260 = auVar3._0_4_;
              local_25c = auVar3._4_4_;
              local_258 = auVar3._8_4_;
              local_58 = local_240[*(short *)(piVar15 + 6) + -5000] * 4 >> 2;
              local_220 = local_260;
              fStack_21c = local_25c;
              fStack_218 = local_258;
              local_20c = local_214;
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar9 = FUN_089d7d74(0xa90,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              if (iVar9 != 0) {
                local_250 = local_220;
                local_24c = fStack_21c;
                local_248 = fStack_218;
                local_244 = local_214;
                FUN_08855a58(iVar9,0x21,2,&local_250,0,local_58);
              }
            }
            else {
              local_1d0[0] = 0;
              local_1d0[1] = 1;
              local_1d0[3] = 1;
              local_1bc = 4;
              local_5c = *(short *)(piVar15 + 6) + -0x138e;
              local_1b8 = 5;
              local_1a4 = (float)(int)*(short *)((int)piVar15 + 0x1a) * 6.283185 * fVar10;
              if (3.141593 < local_1a4) {
                local_1a4 = local_1a4 - 6.283185;
              }
              else if (local_1a4 <= -3.141593) {
                local_1a4 = local_1a4 + 6.283185;
              }
              uStack_198 = 0;
              local_1a0 = 0;
              uStack_194 = 0;
              local_1e0 = (float)*piVar15 * 0.0002441406;
              local_1dc = (float)piVar15[1] * 0.0002441406;
              local_1d8 = (float)piVar15[2] * 0.0002441406;
              local_1d4 = 0.0;
              auVar6._4_4_ = local_1dc;
              auVar6._0_4_ = local_1e0;
              auVar6._8_4_ = local_1d8;
              auVar3 = vscl_t(auVar6,0x41a00000);
              local_1f0 = auVar3._0_4_;
              local_1ec = auVar3._4_4_;
              local_1e8 = auVar3._8_4_;
              local_60 = 0;
              local_1d0[2] = iVar13;
              local_1c0 = uVar14;
              local_1b0 = local_1f0;
              fStack_1ac = local_1ec;
              fStack_1a8 = local_1e8;
              local_19c = local_1a4;
              local_48 = puVar17;
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar13 = FUN_089d7d74(0x3a0,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              puVar17 = local_48;
              iVar9 = local_60;
              if (iVar13 != 0) {
                local_1e0 = local_1b0;
                local_1dc = fStack_1ac;
                local_1d8 = fStack_1a8;
                local_1d4 = local_1a4;
                FUN_088b4088(iVar13,&local_1e0,local_1d0[local_5c],*(undefined2 *)(piVar15 + 6));
                iVar9 = iVar13;
              }
              iVar13 = FUN_088be274();
              FUN_089d8984(iVar9,iVar13 + 0x664);
            }
          }
          else {
            switch(iVar9) {
            case 6000:
            case 0x1773:
            case 0x1774:
              goto switchD_088bf900_caseD_320;
            case 0x1771:
              uVar11 = (int)*(char *)((int)piVar15 + 0x22) & 0xf0;
              iVar9 = param_1 + uVar11 + (uVar11 >> 4) * 4;
              iVar13 = piVar15[1];
              iVar12 = piVar15[2];
              *(int *)(iVar9 + 0x708) = *piVar15;
              *(int *)(iVar9 + 0x70c) = iVar13;
              *(int *)(iVar9 + 0x710) = iVar12;
              uVar11 = (int)*(char *)((int)piVar15 + 0x22) & 0xf0;
              *(undefined2 *)(param_1 + uVar11 + (uVar11 >> 4) * 4 + 0x714) =
                   *(undefined2 *)((int)piVar15 + 0x1a);
              uVar11 = (int)*(char *)((int)piVar15 + 0x22) & 0xf0;
              *(undefined *)(param_1 + uVar11 + (uVar11 >> 4) * 4 + 0x716) =
                   *(undefined *)(piVar15 + 8);
              break;
            case 0x1772:
              local_270 = (float)*piVar15 * 0.0002441406;
              local_26c = (float)piVar15[1] * 0.0002441406;
              local_268 = (float)piVar15[2] * 0.0002441406;
              local_264 = 0;
              auVar4._4_4_ = local_26c;
              auVar4._0_4_ = local_270;
              auVar4._8_4_ = local_268;
              auVar3 = vscl_t(auVar4,0x41a00000);
              local_280 = auVar3._0_4_;
              uStack_27c = auVar3._4_4_;
              uStack_278 = auVar3._8_4_;
              FUN_08823f5c(DAT_08ac5c70,3);
              break;
            case 0x1775:
            case 0x1776:
            case 0x1777:
              goto LAB_088c0bc4;
            case 0x1778:
              bVar1 = *(byte *)(piVar15 + 10);
              if (bVar1 == 0) {
                if ((*(byte *)((int)piVar15 + 0x1e) & 0x10) == 0) {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,10,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
                else {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,0xd,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
              }
              else if (bVar1 < 2) {
                if ((*(byte *)((int)piVar15 + 0x1e) & 0x10) == 0) {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,0xb,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
                else {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,0xe,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
              }
              else if (bVar1 < 3) {
                if ((*(byte *)((int)piVar15 + 0x1e) & 0x10) == 0) {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,0xc,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
                else {
                  FUN_089d8634();
                  uVar14 = FUN_089d81a4();
                  FUN_089d816c(1);
                  iVar9 = FUN_089d7d74(0x2e0,0,0);
                  FUN_089d816c(uVar14);
                  FUN_089d866c();
                  if (iVar9 != 0) {
                    FUN_088a01c0(iVar9,0xf,piVar15,*(undefined2 *)(piVar15 + 6),0);
                  }
                }
              }
              break;
            case 0x1779:
              local_10c = (float)(int)*(short *)((int)piVar15 + 0x1a) * 6.283185 * fVar10;
              if (3.141593 < local_10c) {
                local_10c = local_10c - 6.283185;
              }
              else if (local_10c <= -3.141593) {
                local_10c = local_10c + 6.283185;
              }
              local_110 = 0;
              local_108 = 0;
              local_104 = 0;
              local_e0 = *puVar17;
              local_dc = puVar17[1];
              uStack_d8 = puVar17[2];
              uStack_d4 = puVar17[3];
              uVar11 = local_88 & 1;
              local_88 = local_88 + 1;
              local_100 = (float)*piVar15 * 0.0002441406;
              local_fc = (float)piVar15[1] * 0.0002441406;
              local_f8 = (float)piVar15[2] * 0.0002441406;
              local_f4 = 0;
              auVar8._4_4_ = local_fc;
              auVar8._0_4_ = local_100;
              auVar8._8_4_ = local_f8;
              auVar3 = vscl_t(auVar8,0x41a00000);
              *puVar17 = auVar3._0_4_;
              puVar17[1] = auVar3._4_4_;
              puVar17[2] = auVar3._8_4_;
              puVar17[3] = in_V7D;
              iVar9 = FUN_08823f5c(DAT_08ac5c70,uVar11 + 0xf,puVar17);
              *(undefined4 *)(iVar9 + 0x1d0) = local_dc;
              break;
            default:
              if (0x1399 < iVar9) goto LAB_088c0bc4;
              local_160[0] = 0;
              local_160[1] = 1;
              local_160[3] = 1;
              local_14c = 4;
              local_64 = *(short *)(piVar15 + 6) + -0x1394;
              local_148 = 5;
              local_134 = (float)(int)*(short *)((int)piVar15 + 0x1a) * 6.283185 * fVar10;
              if (3.141593 < local_134) {
                local_134 = local_134 - 6.283185;
              }
              else if (local_134 <= -3.141593) {
                local_134 = local_134 + 6.283185;
              }
              uStack_128 = 0;
              local_130 = 0;
              uStack_124 = 0;
              local_170 = (float)*piVar15 * 0.0002441406;
              local_16c = (float)piVar15[1] * 0.0002441406;
              local_168 = (float)piVar15[2] * 0.0002441406;
              local_164 = 0.0;
              auVar7._4_4_ = local_16c;
              auVar7._0_4_ = local_170;
              auVar7._8_4_ = local_168;
              auVar3 = vscl_t(auVar7,0x41a00000);
              local_180 = auVar3._0_4_;
              local_17c = auVar3._4_4_;
              local_178 = auVar3._8_4_;
              local_68 = 0;
              local_160[2] = iVar13;
              local_150 = uVar14;
              local_140 = local_180;
              fStack_13c = local_17c;
              fStack_138 = local_178;
              local_12c = local_134;
              local_48 = puVar17;
              FUN_089d8634();
              uVar14 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar13 = FUN_089d7d74(0x3a0,0,0);
              FUN_089d816c(uVar14);
              FUN_089d866c();
              puVar17 = local_48;
              iVar9 = local_68;
              if (iVar13 != 0) {
                local_170 = local_140;
                local_16c = fStack_13c;
                local_168 = fStack_138;
                local_164 = local_134;
                FUN_088b4088(iVar13,&local_170,local_160[local_64],*(undefined2 *)(piVar15 + 6));
                iVar9 = iVar13;
              }
              iVar13 = FUN_088be274();
              FUN_089d8984(iVar9,iVar13 + 0x664);
            }
          }
          fVar10 = 1.525902e-05;
          iVar13 = 2;
          uVar14 = 3;
        }
        iVar16 = iVar16 + 1;
        piVar15 = local_84;
      } while (iVar16 < (int)local_7c);
    }
  }
  return;
}

