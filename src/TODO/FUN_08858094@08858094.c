#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08858094(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0xa78) == '\0') {
    return;
  }
  switch(*(int *)(param_1 + 0xa74)) {
  case 1:
    break;
  case 2:
    goto switchD_088580fc_caseD_2;
  case 3:
    goto LAB_08858188;
  case 4:
    goto switchD_088580fc_caseD_4;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    goto switchD_088580fc_caseD_5;
  case 10:
    goto LAB_0885826c;
  case 0xb:
    goto LAB_08858370;
  case 0xc:
    goto LAB_08858458;
  case 0x14:
    goto LAB_088584d8;
  case 0x15:
    goto switchD_088580fc_caseD_15;
  case 0x1e:
    goto LAB_088585c0;
  case 0x1f:
    goto LAB_08858704;
  default:
    if (*(int *)(param_1 + 0xa74) != 999) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa7a);
    goto LAB_08858754;
  }
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
switchD_088580fc_caseD_2:
  iVar4 = *(int *)(param_1 + 0xa70) + -1;
  *(int *)(param_1 + 0xa70) = iVar4;
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0xa70) = 0;
    *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
LAB_08858188:
    *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 0x2c);
    iVar4 = FUN_08823f5c(DAT_08abd5b0,0x5c);
    *(float *)(iVar4 + 0x1e0) = *(float *)(param_1 + 0x40) * 0.4;
    iVar4 = _DONE_NotZero_DAT_08AC5874();
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xa74);
    }
    else {
      uVar8 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar8,0x20025d,0,0);
      iVar4 = *(int *)(param_1 + 0xa74);
    }
    *(undefined *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xa70) = 1;
    *(int *)(param_1 + 0xa74) = iVar4 + 1;
switchD_088580fc_caseD_4:
    iVar4 = *(int *)(param_1 + 0xa70) + -1;
    *(int *)(param_1 + 0xa70) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0xa70) = 0;
      *(undefined4 *)(param_1 + 0xa74) = 10;
LAB_0885826c:
      fVar9 = 1.570796;
      iVar4 = *(int *)(param_1 + 0xa70);
      fVar7 = 1.570796 - (float)iVar4 * 0.08726646;
      *(int *)(param_1 + 0xa70) = iVar4 + 1;
      if (fVar7 < 0.0) {
        fVar9 = 0.0;
      }
      else if (fVar7 <= 1.570796) {
        fVar9 = fVar7;
      }
      uVar8 = vmul_s(fVar9,in_V7C);
      fVar9 = (float)vsin_s(uVar8);
      *(float *)(param_1 + 0x6c) = fVar9;
      FUN_089e056c(fVar9,param_1,0);
      FUN_089e0694(fVar9 * 0.5,param_1,"mat_spel");
      *(float *)(param_1 + 0xa84) = fVar9;
      if (*(int *)(param_1 + 0x6bc) != 0) {
        *(float *)(*(int *)(param_1 + 0x6bc) + 0x6c) = fVar9;
      }
      if (fVar9 <= 0.0) {
        *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
LAB_08858370:
        iVar4 = FUN_089c9b48(0x23,DAT_08ac58c8);
        if (iVar4 != 0) {
          *(undefined *)(param_1 + 0x59c) = 1;
          FUN_08860454(param_1);
        }
        uVar8 = FUN_088660e0();
        iVar4 = FUN_08860344(uVar8);
        if (iVar4 == param_1) {
          FUN_08860438(uVar8);
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
        *(undefined4 *)(param_1 + 0xa70) = 10;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - 5000.0;
        iVar4 = *(int *)(param_1 + 0x130);
        uVar8 = *(undefined4 *)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iVar4 + 0xb4) = uVar8;
        *(undefined4 *)(iVar4 + 0xb8) = uVar2;
        *(undefined4 *)(iVar4 + 0xbc) = uVar3;
        iVar4 = *(int *)(param_1 + 0x20c);
        *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 1;
        *(undefined4 *)(iVar4 + 0x148) = 0;
        *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 0x40;
        *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 4;
        iVar4 = *(int *)(param_1 + 0x208);
        *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 1;
        *(undefined4 *)(iVar4 + 0x148) = 0;
        *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 0x40;
        *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x208) + 0x130) | 4;
        *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
LAB_08858458:
        iVar4 = FUN_089c9b48(0x23,DAT_08ac58c8);
        if ((iVar4 == 0) &&
           (iVar4 = *(int *)(param_1 + 0xa70) + -1, *(int *)(param_1 + 0xa70) = iVar4, iVar4 < 1)) {
          *(undefined4 *)(param_1 + 0xa74) = 0x14;
LAB_088584d8:
          puVar6 = (undefined4 *)(param_1 + 0xa50);
          puVar5 = (undefined4 *)(param_1 + 0x20);
          FUN_0889d57c(puVar6,puVar6);
          *puVar5 = *puVar6;
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xa54);
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xa58);
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xa5c);
          *(undefined4 *)(param_1 + 0xa60) = *puVar5;
          *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0xa6c) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0xa60);
          *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0xa64);
          *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_1 + 0xa68);
          *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0xa6c);
          *(undefined4 *)(param_1 + 0x8f0) = *puVar5;
          *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(param_1 + 0x2c);
          iVar4 = FUN_088243d8(DAT_08abd5b0,0x5d,(undefined4 *)(param_1 + 0x8f0));
          *(float *)(iVar4 + 0x1e0) = *(float *)(param_1 + 0x40) * 0.4;
          *(undefined4 *)(param_1 + 0xa70) = 1;
          *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
switchD_088580fc_caseD_15:
          iVar4 = *(int *)(param_1 + 0xa70) + -1;
          *(int *)(param_1 + 0xa70) = iVar4;
          if (iVar4 < 1) {
            *(undefined4 *)(param_1 + 0xa70) = 0;
            *(undefined4 *)(param_1 + 0xa74) = 0x1e;
LAB_088585c0:
            iVar4 = *(int *)(param_1 + 0xa70);
            fVar7 = (float)iVar4 * 0.08726646;
            *(int *)(param_1 + 0xa70) = iVar4 + 1;
            fVar9 = 0.0;
            if ((0.0 <= fVar7) && (fVar9 = fVar7, 1.570796 < fVar7)) {
              fVar9 = 1.570796;
            }
            uVar8 = vmul_s(fVar9,in_V7C);
            fVar9 = (float)vsin_s(uVar8);
            *(float *)(param_1 + 0x6c) = fVar9;
            FUN_089e056c(fVar9,param_1,0);
            FUN_089e0694(fVar9 * 0.5,param_1,"mat_spel");
            *(float *)(param_1 + 0xa84) = fVar9;
            *(undefined *)(param_1 + 0x59c) = 0;
            iVar4 = *(int *)(param_1 + 0x20c);
            *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) & 0xfffffffe;
            *(undefined4 *)(iVar4 + 0x148) = 0;
            *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xffffffbf;
            *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffffb;
            *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xffffffbf;
            *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
                 *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffffb;
            if (*(int *)(param_1 + 0x6bc) != 0) {
              *(float *)(*(int *)(param_1 + 0x6bc) + 0x6c) = fVar9;
              FUN_088a3adc(*(undefined4 *)(param_1 + 0x6bc));
            }
            if (1.0 <= fVar9) {
              *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
LAB_08858704:
              *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
              FUN_089e056c(0x3f800000,param_1,0);
              FUN_089e0694(0x3f000000,param_1,"mat_spel");
              *(undefined4 *)(param_1 + 0xa84) = 0x3f800000;
              if (*(int *)(param_1 + 0x6bc) != 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x6bc) + 0x6c) = 0x3f800000;
              }
              *(undefined *)(param_1 + 0xbc) = 0;
              *(int *)(param_1 + 0xa74) = *(int *)(param_1 + 0xa74) + 1;
              cVar1 = *(char *)(param_1 + 0xa7a);
LAB_08858754:
              if (cVar1 == '\0') {
                *(undefined4 *)(param_1 + 0xa74) = 1;
              }
              else {
                *(undefined4 *)(param_1 + 0xa74) = 0;
                *(undefined *)(param_1 + 0xa79) = 1;
                *(undefined *)(param_1 + 0xa7a) = 0;
                *(undefined *)(param_1 + 0xa78) = 0;
              }
            }
          }
        }
      }
    }
  }
switchD_088580fc_caseD_5:
  return;
}

