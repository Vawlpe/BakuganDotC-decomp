#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08941f80(int param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  undefined auStack_f0 [32];
  undefined auStack_d0 [72];
  undefined auStack_88 [33];
  byte local_67;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  uint local_54;
  char *local_50;
  undefined *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  undefined local_3c;
  uint local_38;
  undefined local_34;
  
  local_40 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  local_38 = param_4 & 0xff;
  iVar8 = 0;
  local_3c = 0;
  local_34 = param_5;
  if ((*(int *)(param_1 + 0x94) != 0) && (iVar8 = -1, 1 < *(int *)(param_1 + 0x9c))) {
    iVar8 = FUN_0881b22c();
    if (iVar8 == 0) {
      local_44 = 0;
    }
    else {
      uVar3 = DONE_GetPtr_DAT_08AB0300();
      local_44 = FUN_0881b278(uVar3);
    }
    iVar5 = **(int **)(param_1 + 0x90);
    iVar6 = *(int *)(iVar5 + 0xc);
    psVar7 = (short *)(iVar6 + 0x28);
    if (local_44 == 0) {
      iVar8 = -1;
      if (param_3 == 0) {
        (**(code **)(iVar6 + 0x2c))(iVar5 + *psVar7,0);
        iVar5 = *(int *)(*(int *)(param_1 + 0x90) + 4);
        iVar6 = *(int *)(iVar5 + 0xc);
        (**(code **)(iVar6 + 0x2c))(iVar5 + *(short *)(iVar6 + 0x28),1);
      }
      else {
        (**(code **)(iVar6 + 0x2c))(iVar5 + *psVar7,1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x90) + 4);
        iVar6 = *(int *)(iVar5 + 0xc);
        (**(code **)(iVar6 + 0x2c))(iVar5 + *(short *)(iVar6 + 0x28),0);
      }
    }
    else {
      iVar8 = 0x4b;
      iVar9 = 4;
      local_54 = param_3;
      if (param_3 == 0) {
        iVar9 = 2;
        iVar8 = 0x75;
        (**(code **)(iVar6 + 0x2c))(iVar5 + *psVar7,0);
        iVar5 = *(int *)(*(int *)(param_1 + 0x90) + 4);
        iVar6 = *(int *)(iVar5 + 0xc);
        (**(code **)(iVar6 + 0x2c))(iVar5 + *(short *)(iVar6 + 0x28),1);
      }
      else {
        (**(code **)(iVar6 + 0x2c))(iVar5 + *psVar7,1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x90) + 4);
        iVar6 = *(int *)(iVar5 + 0xc);
        (**(code **)(iVar6 + 0x2c))(iVar5 + *(short *)(iVar6 + 0x28),0);
      }
      local_48 = iVar9;
      if (iVar9 != 0) {
        local_4c = &DAT_08a9cfd0;
        local_50 = "%d / %d";
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          if (local_40 == 0) {
LAB_08942324:
            iVar9 = *(int *)(param_1 + 0x80);
          }
          else {
            memset_jak(auStack_f0,0,0x20);
            memset_jak(auStack_d0,0,0x40);
            FUN_089b4c84(auStack_f0,local_4c,iVar6);
            FUN_089ead80(auStack_d0,auStack_f0);
            FUN_089eb14c(*(undefined4 *)(param_1 + 0x94),0x5e,iVar8,auStack_d0,0,0);
            uVar1 = local_54;
            if (iVar5 < local_44) {
              uVar3 = DONE_GetPtr_DAT_08AB0300();
              iVar9 = FUN_0881b280(uVar3,iVar5);
              FUN_089eb14c(*(undefined4 *)(param_1 + 0x94),0x7e,iVar8,iVar9,0,0);
              uVar11 = 0xffffffff;
              if (uVar1 != 0) {
                iVar10 = 1;
                do {
                  iVar4 = FUN_089cf7d0(auStack_88,iVar10);
                  pcVar2 = local_50;
                  if (iVar4 == 0) break;
                  if ((((local_5c == *(char *)(iVar9 + 0x19)) &&
                       (local_5b == *(char *)(iVar9 + 0x1a))) &&
                      (local_5a == *(char *)(iVar9 + 0x1b))) &&
                     (((local_59 == *(char *)(iVar9 + 0x1c) && (local_58 == *(char *)(iVar9 + 0x1d))
                       ) && (local_57 == *(char *)(iVar9 + 0x1e))))) {
                    uVar11 = (uint)local_67;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < 0x10);
                if ((int)uVar11 < 0) {
                  iVar9 = *(int *)(param_1 + 0x80);
                  goto LAB_08942328;
                }
                memset_jak(auStack_f0,0,0x20);
                memset_jak(auStack_d0,0,0x40);
                FUN_089b4c84(auStack_f0,pcVar2,uVar11,2);
                FUN_089ead80(auStack_d0,auStack_f0);
                FUN_089eb14c(*(undefined4 *)(param_1 + 0x94),0x14e,iVar8,auStack_d0,0,0);
              }
              goto LAB_08942324;
            }
            iVar9 = *(int *)(param_1 + 0x80);
          }
LAB_08942328:
          if (iVar9 == iVar5) {
            *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x40) = 0x42b40000;
            *(float *)(*(int *)(param_1 + 0x98) + 0x44) = (float)iVar8;
          }
          iVar5 = iVar8 + 0x18;
          if (local_54 == 0) {
            iVar5 = iVar8 + 0x1d;
          }
          iVar8 = iVar5;
          iVar5 = iVar6;
        } while (iVar6 < local_48);
      }
      if (local_38 == 0) {
        iVar8 = -1;
      }
      else {
        if (*(float *)(param_1 + 0x84) == 0.0) {
          local_34 = 1;
        }
        iVar8 = 1;
      }
    }
  }
  if (iVar8 < 0) {
    fVar12 = *(float *)(param_1 + 0x84);
    if (0.0 < fVar12) {
      fVar12 = fVar12 - 0.04;
      *(float *)(param_1 + 0x84) = fVar12;
    }
    if (fVar12 < 0.0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      fVar12 = 0.0;
    }
    if (fVar12 == 0.0) {
      local_3c = 1;
    }
  }
  else if (0 < iVar8) {
    fVar12 = *(float *)(param_1 + 0x84);
    if (fVar12 < 1.0) {
      fVar12 = fVar12 + 0.04;
      *(float *)(param_1 + 0x84) = fVar12;
    }
    if (1.0 < fVar12) {
      *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
      fVar12 = 1.0;
    }
    if (fVar12 != 0.0) {
      local_3c = 1;
    }
  }
  FUN_08941d30(param_1,local_34);
  return local_3c;
}

