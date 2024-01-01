#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0881aa28(uint param_1,float *param_2,char param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  uint local_44;
  undefined local_40;
  uint local_3c;
  float local_38;
  float local_34;
  
  fVar9 = DAT_08b00270;
  fVar11 = DAT_08b00260;
  local_40 = 0;
  fVar10 = 0.0;
  local_44 = param_1;
  local_34 = param_4;
  FUN_089e5478(0);
  param_2[4] = 0.0;
  if (param_2[7] != 0.0) {
    fVar10 = *(float *)((int)param_2[7] + 0x13c);
  }
  DAT_08ab02f4 = 0;
  DAT_08ab02fc = 0.0;
  local_3c = 0x13;
  if (param_3 != '\0') {
    local_3c = 2;
  }
  DAT_08b002a0 = 0x7f800000;
  DAT_08b002a4 = 0x7f800000;
  bVar2 = true;
  if (fVar9 == 0.0) {
    DAT_08b002a4 = 0x7f800000;
    DAT_08b002a0 = 0x7f800000;
    DAT_08ab02fc = 0.0;
    DAT_08ab02f4 = 0;
    return local_40;
  }
  fVar7 = param_2[7];
  local_38 = fVar10;
  do {
    fVar10 = fVar11;
    if (fVar9 == fVar7) {
LAB_0881ab78:
      fVar9 = *(float *)((int)fVar9 + 4);
LAB_0881ab7c:
      if (fVar9 == 0.0) {
        bVar2 = false;
        fVar9 = fVar11;
        fVar10 = 0.0;
      }
    }
    else {
      if (fVar9 == local_38) {
        fVar9 = *(float *)((int)fVar9 + 4);
        goto LAB_0881ab7c;
      }
      if ((*(uint *)((int)fVar9 + 0x130) & local_3c) == 0) {
        uVar8 = *(uint *)((int)fVar9 + 0x134);
      }
      else {
        if (param_2[10] != 3.363116e-44) {
          fVar9 = *(float *)((int)fVar9 + 4);
          goto LAB_0881ab7c;
        }
        uVar8 = *(uint *)((int)fVar9 + 0x134);
      }
      if ((1 << (uVar8 & 0x1f) & local_44) == 0) {
        fVar9 = *(float *)((int)fVar9 + 4);
        goto LAB_0881ab7c;
      }
      if ((!bVar2) && (*(char *)((int)fVar9 + 0x180) == '\0')) {
        fVar9 = *(float *)((int)fVar9 + 4);
        goto LAB_0881ab7c;
      }
      if (fVar9 == local_34) {
        fVar9 = *(float *)((int)fVar9 + 4);
        goto LAB_0881ab7c;
      }
      if (((*(uint *)((int)fVar9 + 0x130) & 0x200) != 0) && (param_2[10] == 3.082857e-44))
      goto LAB_0881ab78;
      iVar3 = FUN_089e565c(param_2[5],(int)fVar9 + 0x30,&local_80,local_44);
      if (iVar3 == 0) {
        fVar9 = *(float *)((int)fVar9 + 4);
LAB_0881ae60:
        if (fVar9 == 0.0) {
          bVar2 = false;
          fVar9 = fVar11;
          fVar10 = 0.0;
        }
      }
      else {
        fVar7 = param_2[4];
        param_2[4] = fVar9;
        *param_2 = local_80;
        param_2[1] = fStack_7c;
        param_2[2] = fStack_78;
        param_2[3] = fStack_74;
        if (param_2[10] == 3.363116e-44) {
          return 1;
        }
        if (param_2[10] == 2.620428e-43) {
          if ((*(int *)((int)fVar9 + 0x130) == 0x13) || (*(int *)((int)fVar9 + 0x134) == 0xb)) {
            *(uint *)((int)fVar9 + 0x130) = *(uint *)((int)fVar9 + 0x130) | 0x10;
            fVar11 = param_2[1];
            fVar10 = param_2[2];
            fVar7 = param_2[3];
            *(float *)((int)fVar9 + 0x150) = *param_2;
            *(float *)((int)fVar9 + 0x154) = fVar11;
            *(float *)((int)fVar9 + 0x158) = fVar10;
            *(float *)((int)fVar9 + 0x15c) = fVar7;
            *(float *)((int)fVar9 + 0x170) = param_2[0xb];
            *(float *)((int)fVar9 + 0x16c) = param_2[10];
            *(float *)((int)fVar9 + 0x168) = param_2[9];
            *(float *)((int)fVar9 + 0x160) = param_2[6];
            *(float *)((int)fVar9 + 0x164) = param_2[8];
            *(undefined4 *)((int)fVar9 + 0x174) = DAT_08ab02f0;
            param_2[4] = fVar9;
            *(undefined4 *)((int)fVar9 + 0x134) = 0x13;
            return 1;
          }
          fVar6 = param_2[10];
        }
        else {
          fVar6 = param_2[10];
        }
        if ((int)fVar6 < 0x1a) {
          uVar8 = *(uint *)((int)fVar9 + 0x130);
LAB_0881acfc:
          if ((uVar8 & 0x13) == 0) {
            *(uint *)((int)fVar9 + 0x130) = *(uint *)((int)fVar9 + 0x130) | 0x10;
            fVar7 = param_2[1];
            fVar6 = param_2[2];
            fVar1 = param_2[3];
            *(float *)((int)fVar9 + 0x150) = *param_2;
            *(float *)((int)fVar9 + 0x154) = fVar7;
            *(float *)((int)fVar9 + 0x158) = fVar6;
            *(float *)((int)fVar9 + 0x15c) = fVar1;
            *(float *)((int)fVar9 + 0x170) = param_2[0xb];
            *(float *)((int)fVar9 + 0x16c) = param_2[10];
            *(float *)((int)fVar9 + 0x168) = param_2[9];
            *(float *)((int)fVar9 + 0x160) = param_2[6];
            *(float *)((int)fVar9 + 0x164) = param_2[8];
            *(undefined4 *)((int)fVar9 + 0x174) = DAT_08ab02f0;
            if ((*(uint *)((int)fVar9 + 0x130) & 8) != 0) {
              DAT_08ab02f4 = 1;
              DAT_08ab02f8 = param_2[6];
            }
            if (param_2[10] == 8.82818e-44) {
              fVar7 = param_2[5];
LAB_0881ada0:
              *(undefined4 *)((int)fVar9 + 0x150) =
                   *(undefined4 *)(*(int *)((int)fVar7 + 0xc4) + 0x20);
              *(undefined4 *)((int)fVar9 + 0x158) =
                   *(undefined4 *)(*(int *)((int)param_2[5] + 0xc4) + 0x28);
              goto LAB_0881adc8;
            }
            if (param_2[10] == 4.344025e-44) {
              fVar7 = param_2[5];
              goto LAB_0881ada0;
            }
            fVar7 = param_2[0xc];
          }
          else {
            DAT_08ab02fc = fVar9;
            param_2[4] = fVar7;
LAB_0881adc8:
            fVar7 = param_2[0xc];
          }
          if (((uint)fVar7 & 1) != 0) {
            iVar3 = *(int *)(*(int *)((int)param_2[5] + 0xc4) + 4);
            pfVar5 = (float *)(**(code **)(iVar3 + 0x44))
                                        (*(int *)((int)param_2[5] + 0xc4) +
                                         (int)*(short *)(iVar3 + 0x40));
            local_70 = *param_2;
            fStack_6c = param_2[1];
            local_68 = param_2[2];
            fStack_64 = param_2[3];
            uVar12 = atan2f(local_68 - pfVar5[2],local_70 - *pfVar5);
            *(undefined4 *)((int)fVar9 + 0x168) = uVar12;
          }
          local_40 = 1;
          if (param_2[10] == 3.082857e-44) {
            return 1;
          }
          if (param_2[7] == 0.0) {
            fVar9 = *(float *)((int)fVar9 + 4);
          }
          else if (param_2[10] == 3.503246e-44) {
            fVar9 = *(float *)((int)fVar9 + 4);
          }
          else {
            *(undefined4 *)((int)param_2[7] + 0x140) = DAT_08ab02f0;
            fVar9 = *(float *)((int)fVar9 + 4);
          }
          goto LAB_0881ae60;
        }
        if (0x1f < (int)param_2[10]) {
          uVar8 = *(uint *)((int)fVar9 + 0x130);
          goto LAB_0881acfc;
        }
        if (*(int *)((int)fVar9 + 0x138) == 0) {
          uVar8 = *(uint *)((int)fVar9 + 0x130);
          goto LAB_0881acfc;
        }
        iVar3 = FUN_08860188(*(int *)((int)fVar9 + 0x138));
        if (iVar3 == 0) {
          uVar8 = *(uint *)((int)fVar9 + 0x130);
          goto LAB_0881acfc;
        }
        iVar4 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x5c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x58));
        if (iVar4 == 0) {
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x14) + 0xa4))
                            (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0xa0));
          if (iVar3 != (int)param_2[10] + -0x1a) {
            uVar8 = *(uint *)((int)fVar9 + 0x130);
            goto LAB_0881acfc;
          }
          fVar9 = *(float *)((int)fVar9 + 4);
        }
        else {
          fVar9 = *(float *)((int)fVar9 + 4);
        }
        if (fVar9 == 0.0) {
          bVar2 = false;
          fVar10 = 0.0;
          fVar9 = fVar11;
        }
      }
    }
    if (fVar9 == 0.0) {
      return local_40;
    }
    fVar7 = param_2[7];
    fVar11 = fVar10;
  } while( true );
}

