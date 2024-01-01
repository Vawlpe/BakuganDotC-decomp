#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08817de0(float param_1,float param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  float local_8c [3];
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined *local_58;
  float local_54;
  float *local_50;
  float local_4c;
  
  iVar8 = 0x200 / (int)*(float *)(param_3 + 0xa0);
  local_a0 = (float)(int)param_1;
  local_98 = 0;
  local_94 = 0;
  local_9c = (float)(int)param_2;
  local_90 = 0;
  if (*(char *)(param_3 + 0x8c) == '\0') {
    local_58 = &DAT_08a3a1c0;
    fVar7 = 13.0;
    pfVar6 = &local_70;
    while (iVar8 = FUN_08817c28(param_4,&local_90,local_8c), iVar8 != -1) {
      if (iVar8 != -2) {
        if (iVar8 == -3) {
          local_9c = local_9c + fVar7;
          local_a0 = param_1;
        }
        else {
          if (480.0 < local_a0) {
            return;
          }
          if (-16.0 < local_a0) {
            iVar5 = iVar8 / 0x6e4;
            if (iVar5 < 3) {
              iVar3 = *(int *)(param_3 + 0x90);
            }
            else {
              local_60[0] = 0;
              iVar8 = FUN_08817c28(local_58,local_60,local_8c);
              iVar5 = iVar8 / 0x6e4;
              iVar3 = *(int *)(param_3 + 0x90);
            }
            if (iVar3 < 2) {
              uVar4 = *(undefined4 *)(*(int *)(param_3 + 0x80) + iVar5 * 4);
              iVar3 = FUN_089f58b8(param_3,uVar4,&local_a0);
            }
            else {
              uVar4 = **(undefined4 **)(param_3 + 0x80);
              local_50 = pfVar6;
              iVar3 = FUN_089f58b8(param_3,uVar4,&local_a0);
              *(int *)(iVar3 + 0xd8) = iVar5;
              pfVar6 = local_50;
            }
            *(undefined4 *)(iVar3 + 0xd4) = uVar4;
            local_4c = fVar7;
            FUN_089f4534(local_8c[0],0x41400000,iVar3);
            local_68 = local_8c[0];
            local_64 = 0x41400000;
            local_70 = (float)(((iVar8 % 0x6e4) % 0x2a) * 0xc);
            local_6c = (float)(((iVar8 % 0x6e4) / 0x2a) * 0xc);
            FUN_089f4060(iVar3,pfVar6);
            fVar7 = local_4c;
          }
          local_a0 = local_a0 + local_8c[0];
        }
      }
    }
  }
  else if (*param_4 != '\0') {
    local_54 = param_1;
    do {
      if (param_4[local_90] == '\n') {
        local_9c = local_9c + *(float *)(param_3 + 0x98);
        local_a0 = local_54;
      }
      else {
        if (480.0 < local_a0) {
          return;
        }
        iVar5 = param_4[local_90] + -0x20;
        if (-16.0 < local_a0) {
          iVar3 = FUN_089f54d8(param_3,**(undefined4 **)(param_3 + 0x80),&local_a0,0);
          local_80 = (float)(iVar5 % iVar8) * *(float *)(param_3 + 0xa0) + 0.1;
          local_7c = (float)(iVar5 / iVar8) * *(float *)(param_3 + 0xa4);
          if (*(float *)(param_3 + 0xa0) == 12.0) {
LAB_08817fdc:
            local_78 = *(undefined4 *)(param_3 + 0xa0);
          }
          else if (*(float *)(param_3 + 0xa0) == 16.0) {
            local_78 = *(undefined4 *)(param_3 + 0xa0);
          }
          else {
            if (*(float *)(param_3 + 0xa0) == 24.0) {
              local_7c = local_7c + 0.5;
              goto LAB_08817fdc;
            }
            local_78 = *(undefined4 *)(param_3 + 0xa0);
          }
          local_74 = *(undefined4 *)(param_3 + 0xa4);
          FUN_089f4060(iVar3,&local_80);
          FUN_089f4534(*(undefined4 *)(param_3 + 0xa0),*(undefined4 *)(param_3 + 0xa4),iVar3);
          uVar4 = *(undefined4 *)(param_3 + 0xc4);
          uVar1 = *(undefined4 *)(param_3 + 200);
          uVar2 = *(undefined4 *)(param_3 + 0xcc);
          *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(param_3 + 0xc0);
          *(undefined4 *)(iVar3 + 0xb4) = uVar4;
          *(undefined4 *)(iVar3 + 0xb8) = uVar1;
          *(undefined4 *)(iVar3 + 0xbc) = uVar2;
        }
        if (*(int *)(param_3 + 0xd8) == 0) {
          fVar7 = *(float *)(param_3 + 0x94);
        }
        else {
          fVar7 = (float)(int)FLOOR((*(float *)(*(int *)(param_3 + 0xd8) + iVar5 * 4) +
                                    *(float *)(param_3 + 0x9c)) * *(float *)(param_3 + 0xdc) + 0.5);
        }
        local_a0 = local_a0 + fVar7;
      }
      local_90 = local_90 + 1;
    } while (param_4[local_90] != '\0');
  }
  return;
}

