#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ec8a8(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  ushort local_80;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1[1] == 0) {
    local_80 = *(ushort *)(DAT_08ac5928 + 4);
  }
  else {
    local_80 = *(ushort *)param_1[1];
  }
  iVar4 = param_1[3];
  if (1 < iVar4) {
    if (2 < iVar4) {
      if (iVar4 < 4) {
        FUN_089ed6a0(param_1[0x1f],0);
        iVar4 = FUN_089eb23c(param_1[0x1d]);
        *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0xc) * 0.1;
        FUN_089ec550(param_1);
        if (*(int *)(*param_1 + 0xf4) != 0) {
          iVar4 = *param_1;
          goto LAB_089ed028;
        }
        if (*param_1 == 0) {
          iVar4 = param_1[6];
        }
        else {
          if (*param_1 == 0) {
            *param_1 = 0;
          }
          else {
            iVar4 = *(int *)(*param_1 + 0x74);
            (**(code **)(iVar4 + 0xc))(*param_1 + (int)*(short *)(iVar4 + 8),3);
            *param_1 = 0;
          }
          iVar4 = param_1[6];
        }
        if (iVar4 == 0) {
          iVar4 = param_1[3];
        }
        else {
          iVar4 = param_1[6];
          FUN_089d8634();
          FUN_089d7fd8(iVar4,0,0);
          FUN_089d866c();
          param_1[6] = 0;
          iVar4 = param_1[3];
        }
        param_1[3] = iVar4 + 1;
        goto LAB_089ed024;
      }
      iVar4 = param_1[5];
      goto LAB_089ed01c;
    }
    if (param_1[7] == -1) {
      if (param_1[0x17] == 0) {
        if (param_1[0x14] == 0) {
          cVar3 = *(char *)((int)param_1 + 0x59);
        }
        else {
          local_40 = *(undefined4 *)
                      (&DAT_08aa34b0 +
                      ((int)(char)(&DAT_08aa34c0)[(int)(float)param_1[0x15]] & 1U) * 4);
          local_3c = *(undefined4 *)
                      (&DAT_08aa34b8 +
                      ((int)(char)(&DAT_08aa34c0)[(int)(float)param_1[0x15]] >> 1 & 1U) * 4);
          local_38 = 0x41c00000;
          local_34 = 0x42000000;
          FUN_089f4060(param_1[0x14],&local_40);
          fVar7 = (float)param_1[0x15] + (float)(*(int *)(DAT_08ac5934 + 0x1c) + 1) * 0.5;
          param_1[0x15] = (int)fVar7;
          if (0xc < (int)fVar7) {
            param_1[0x15] = 0;
          }
          if ((local_80 & 0xf000) == 0) {
            cVar3 = *(char *)((int)param_1 + 0x59);
          }
          else {
            iVar4 = FUN_089c59d4();
            if (iVar4 != 0) {
              uVar2 = FUN_089c59f0();
              FUN_089c6350(uVar2,0,0,0);
            }
            FUN_089ec3d0(param_1);
            cVar3 = *(char *)((int)param_1 + 0x59);
          }
        }
      }
      else {
        if ((local_80 & 0x4000) == 0) {
          if ((local_80 & 0x2000) == 0) {
            iVar4 = param_1[0x1c];
            iVar5 = param_1[0x18];
            if (iVar4 < 2) {
              if (iVar4 < 1) {
                iVar4 = param_1[0x18];
              }
              else {
                if ((local_80 & 0x10) == 0) {
                  if ((local_80 & 0x40) == 0) {
                    iVar4 = param_1[0x18];
                    goto LAB_089ecca8;
                  }
                  param_1[0x18] = param_1[0x18] + 1;
                }
                else {
                  param_1[0x18] = param_1[0x18] + -1;
                }
LAB_089ecca4:
                iVar4 = param_1[0x18];
              }
            }
            else {
              if (iVar4 < 3) {
                if (((int)(char)local_80 & 0x80U) == 0) {
                  if ((local_80 & 0x20) == 0) {
                    iVar4 = param_1[0x18];
                    goto LAB_089ecca8;
                  }
                  param_1[0x18] = param_1[0x18] + 1;
                }
                else {
                  param_1[0x18] = param_1[0x18] + -1;
                }
                goto LAB_089ecca4;
              }
              iVar4 = param_1[0x18];
            }
LAB_089ecca8:
            if (iVar4 < 0) {
              param_1[0x18] = 0;
LAB_089eccd4:
              iVar4 = param_1[0x18];
            }
            else {
              if (param_1[0x19] <= param_1[0x18]) {
                param_1[0x18] = param_1[0x19] + -1;
                goto LAB_089eccd4;
              }
              iVar4 = param_1[0x18];
            }
            if (iVar5 != iVar4) {
              param_1[0x1a] = 0x3f800000;
              iVar4 = FUN_089ceba4(DAT_08ac5934);
              param_1[0x1b] = (int)-(1.8 / (float)iVar4);
              iVar4 = FUN_089c59d4();
              if (iVar4 == 0) {
                cVar3 = *(char *)((int)param_1 + 0x59);
              }
              else {
                uVar2 = FUN_089c59f0();
                FUN_089c6350(uVar2,1,0,0);
                cVar3 = *(char *)((int)param_1 + 0x59);
              }
              goto LAB_089ece94;
            }
          }
          else {
            iVar4 = FUN_089c59d4();
            if (iVar4 != 0) {
              uVar2 = FUN_089c59f0();
              FUN_089c6350(uVar2,2,0,0);
            }
            iVar4 = FUN_089ceba4(DAT_08ac5934);
            param_1[7] = iVar4 / 2;
          }
        }
        else {
          iVar4 = FUN_089c59d4();
          if (iVar4 != 0) {
            uVar2 = FUN_089c59f0();
            FUN_089c6350(uVar2,2,0,0);
          }
          param_1[0x18] = -1;
          *(undefined *)((int)param_1 + 0x59) = 1;
        }
LAB_089ece90:
        cVar3 = *(char *)((int)param_1 + 0x59);
      }
    }
    else {
      if (param_1[7] != -2) {
        if (param_1[7] < 1) {
          *(undefined *)((int)param_1 + 0x59) = 1;
        }
        else {
          param_1[7] = param_1[7] + -1;
        }
        goto LAB_089ece90;
      }
      cVar3 = *(char *)((int)param_1 + 0x59);
    }
LAB_089ece94:
    if (cVar3 != '\0') {
      if (param_1[0x14] == 0) {
        iVar4 = *param_1;
      }
      else {
        FUN_089f5124(*param_1,param_1[0x14]);
        param_1[0x14] = 0;
        iVar4 = *param_1;
      }
      iVar6 = *(int *)(iVar4 + 0x74);
      sVar1 = *(short *)(iVar6 + 0x28);
      iVar5 = FUN_089ceba4(DAT_08ac5934);
      (**(code **)(iVar6 + 0x2c))(iVar4 + sVar1,(iVar5 * 10) / 0x3c,1);
      iVar4 = FUN_089eb23c(param_1[0x1d]);
      *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0xc) * 0.5;
      FUN_089ed6a0(param_1[0x1f],0);
      param_1[3] = param_1[3] + 1;
    }
    FUN_089ec550(param_1);
    FUN_089ec660(param_1);
    iVar4 = *param_1;
    goto LAB_089ed028;
  }
  if (iVar4 < 0) {
    iVar4 = param_1[5];
LAB_089ed01c:
    *(undefined *)((int)param_1 + 0x59) = 0;
    param_1[4] = iVar4;
  }
  else if (iVar4 < 1) {
    if (*param_1 != 0) {
      if (*param_1 == 0) {
        *param_1 = 0;
      }
      else {
        iVar4 = *(int *)(*param_1 + 0x74);
        (**(code **)(iVar4 + 0xc))(*param_1 + (int)*(short *)(iVar4 + 8),3);
        *param_1 = 0;
      }
    }
    if (param_1[7] == -1) {
      if (param_1[0x17] != 0) {
        iVar4 = param_1[2];
        goto LAB_089eca58;
      }
      local_70 = param_1[8];
      local_6c = param_1[9];
      local_68 = param_1[10];
      local_64 = param_1[0xb];
      iVar4 = FUN_089fe840(0,param_1[2],&local_70);
      *param_1 = iVar4;
      local_70 = 0x43e00000;
      local_6c = 0x43680000;
      local_68 = 0;
      local_64 = 0;
      iVar4 = FUN_089f5484(iVar4,"push_button_s",&local_70,0);
      param_1[0x14] = iVar4;
      FUN_089f4924(0x41c00000,0x42000000,iVar4);
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x41c00000;
      local_54 = 0x42000000;
      FUN_089f4060(param_1[0x14],&local_60);
      *(uint *)(param_1[0x14] + 0xd0) = *(uint *)(param_1[0x14] + 0xd0) & 0xfffffffe;
    }
    else {
      iVar4 = param_1[2];
LAB_089eca58:
      local_50 = param_1[8];
      iStack_4c = param_1[9];
      iStack_48 = param_1[10];
      iStack_44 = param_1[0xb];
      iVar4 = FUN_089fe840(0,iVar4);
      *param_1 = iVar4;
    }
    iVar5 = *param_1;
    iVar6 = *(int *)(iVar5 + 0x74);
    sVar1 = *(short *)(iVar6 + 0x20);
    iVar4 = FUN_089ceba4(DAT_08ac5934);
    (**(code **)(iVar6 + 0x24))(iVar5 + sVar1,(iVar4 << 3) / 0x3c,*(undefined *)(param_1 + 0x1e));
    iVar4 = FUN_089c59d4();
    if (iVar4 != 0) {
      uVar2 = FUN_089c59f0();
      FUN_089c6350(uVar2,1,0,0);
    }
    iVar4 = FUN_089eb23c(param_1[0x1d]);
    *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
    param_1[3] = param_1[3] + 1;
  }
  else {
    if (*(int *)(*param_1 + 0xf4) != 0) {
      iVar4 = *param_1;
      goto LAB_089ed028;
    }
    if (param_1[0x14] == 0) {
      iVar4 = param_1[3];
    }
    else {
      *(uint *)(param_1[0x14] + 0xd0) = *(uint *)(param_1[0x14] + 0xd0) | 1;
      iVar4 = param_1[3];
    }
    param_1[3] = iVar4 + 1;
  }
LAB_089ed024:
  iVar4 = *param_1;
LAB_089ed028:
  if (iVar4 != 0) {
    iVar4 = *(int *)(*param_1 + 0x74);
    (**(code **)(iVar4 + 0x14))(*param_1 + (int)*(short *)(iVar4 + 0x10));
  }
  return;
}

