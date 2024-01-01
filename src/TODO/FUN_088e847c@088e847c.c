#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e847c(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = FUN_088e7364(param_1,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3a8);
    if (iVar2 < 2) {
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          FUN_088df134(param_1,0x2c0003f,0,0);
          FUN_088def24(0x3e4ccccd,param_1,0xd,0,0);
          *(undefined4 *)(param_1 + 0x47c) = 0;
          uVar6 = FUN_089df51c(param_1);
          *(undefined4 *)(param_1 + 0x480) = uVar6;
          FUN_088df9f0(param_1,0x27cb);
          *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
        }
        else {
          uVar3 = FUN_089e0014(param_1);
          if (uVar3 == *(ushort *)(*(int *)(param_1 + 0x150) + 0x1a)) {
            fVar7 = *(float *)(param_1 + 0x47c) + 1.0;
            *(float *)(param_1 + 0x47c) = fVar7;
            if (*(float *)(param_1 + 0x480) < fVar7) {
              FUN_088df134(param_1,0x2c00040,0,0);
              *(undefined *)(param_1 + 0x470) = 1;
              FUN_088241ec(DAT_08ac5c70,0x47,param_1 + 0x180);
              FUN_088243d8(DAT_08ac5c70,0x4a,param_1 + 0x440);
              FUN_088243d8(DAT_08ac5c70,0x4a,param_1 + 0x450);
              piVar4 = (int *)FUN_089d79a4(0x38,1);
              *(undefined2 *)((int)piVar4 + 0x1a) = 0;
              auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x1b0),0x3d4ccccd);
              fVar7 = auVar1._0_4_;
              fVar9 = auVar1._4_4_;
              fVar8 = auVar1._8_4_;
              if (0.0 < fVar7) {
                fVar7 = fVar7 * 4096.0 + 0.5;
              }
              else {
                fVar7 = fVar7 * 4096.0 - 0.5;
              }
              if (0.0 < fVar9) {
                fVar9 = fVar9 * 4096.0 + 0.5;
              }
              else {
                fVar9 = fVar9 * 4096.0 - 0.5;
              }
              if (0.0 < fVar8) {
                fVar8 = fVar8 * 4096.0 + 0.5;
              }
              else {
                fVar8 = fVar8 * 4096.0 - 0.5;
              }
              *piVar4 = (int)fVar7;
              piVar4[1] = (int)fVar9;
              piVar4[2] = (int)fVar8;
              *(byte *)((int)piVar4 + 0x1e) = *(byte *)((int)piVar4 + 0x1e) & 0xef;
              uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x350) + 0x45);
              if (2 < uVar3) {
                uVar3 = 0;
              }
              iVar2 = FUN_089bfa40(0xbb9);
              if (iVar2 != 0) {
                FUN_088cf090();
              }
              FUN_089d8634();
              uVar6 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar5 = FUN_089d7d74(0x2e0,0,0);
              FUN_089d816c(uVar6);
              FUN_089d866c();
              iVar2 = 0;
              if (iVar5 != 0) {
                FUN_088a01c0(iVar5,*(undefined4 *)(&DAT_08a98df8 + uVar3 * 4),piVar4,0x1778,0);
                iVar2 = iVar5;
              }
              FUN_0889fdc0(iVar2,piVar4);
              FUN_088def24(0x3e4ccccd,param_1,0xe,1,0);
              *(undefined4 *)(param_1 + 0x474) = 0x3c;
              *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
            }
            else {
              FUN_089df450(*(undefined4 *)(param_1 + 0x47c),param_1);
            }
          }
          else {
            FUN_088def24(0x3e4ccccd,param_1,0xd,0,0);
            FUN_089df450(*(undefined4 *)(param_1 + 0x47c),param_1);
          }
        }
      }
    }
    else if (iVar2 < 3) {
      if (*(float *)(param_1 + 0x24) < 1000.0) {
        uVar6 = *(undefined4 *)(param_1 + 0x8c);
        auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x80),ZEXT812(0x4120000000000000));
        *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
        *(int *)(param_1 + 0x84) = auVar1._4_4_;
        *(int *)(param_1 + 0x88) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x8c) = uVar6;
      }
      iVar2 = *(int *)(param_1 + 0x474);
      *(int *)(param_1 + 0x474) = iVar2 + -1;
      if (iVar2 < 0) {
        FUN_088f47c4(DAT_08abf710,*(undefined *)(*(int *)(param_1 + 0x350) + 0x3c));
        *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
      }
    }
  }
  return;
}

