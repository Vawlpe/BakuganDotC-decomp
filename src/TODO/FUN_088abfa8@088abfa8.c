#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_088abfa8(undefined4 param_1,float param_2,undefined4 param_3,int param_4,float *param_5,
            char *param_6,char param_7)

{
  char cVar1;
  bool bVar2;
  undefined auVar3 [16];
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  byte local_60 [16];
  undefined auStack_50 [20];
  
  if ((param_4 == 0) || (iVar6 = FUN_088be254(), iVar6 != 0)) {
    return 0;
  }
  *(undefined *)(param_4 + 0xb8) = 1;
  local_60[0] = 0;
  bVar5 = false;
  iVar6 = FUN_0880d354();
  if (iVar6 == 0) {
    FUN_089e34f0(DAT_08ac5c90,auStack_50,(undefined (*) [16])(param_4 + 0x20));
    auVar3 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x50),*(undefined (*) [16])(param_4 + 0x20)
                   );
    uVar9 = vdot_t(auVar3._0_12_,auVar3._0_12_);
    fVar10 = (float)vsqrt_s(uVar9);
    iVar6 = *(int *)(DAT_08ac58c4 + 4);
    if (iVar6 < 0xb) {
      if (9 < iVar6) {
LAB_088ac1c8:
        param_2 = 2700.0;
      }
    }
    else if (iVar6 == 0xc) goto LAB_088ac1c8;
    iVar6 = FUN_089bef68(param_1,auStack_50);
    if (iVar6 != 0) {
      if (param_2 < fVar10) {
        local_60[0] = 3;
      }
      else {
        bVar5 = true;
        local_60[0] = 1000.0 < fVar10;
      }
      goto LAB_088ac258;
    }
    if (param_2 < fVar10) {
      local_60[0] = 2;
      goto LAB_088ac258;
    }
    if (fVar10 <= 1000.0) {
      bVar5 = true;
      goto LAB_088ac258;
    }
    fVar10 = *param_5;
  }
  else {
    bVar4 = false;
    bVar2 = false;
    piVar7 = (int *)FUN_088660c8();
    if (piVar7 == (int *)0x0) {
      iVar6 = *(int *)(param_4 + 0x140);
    }
    else {
      iVar6 = *piVar7;
      if (iVar6 != 0) {
        cVar1 = *(char *)(iVar6 + 0x158);
        while( true ) {
          if (cVar1 == '\0') {
            iVar6 = *(int *)(iVar6 + 4);
          }
          else {
            auVar3 = vsub_q(*(undefined (*) [16])(iVar6 + 0x20),
                            *(undefined (*) [16])(param_4 + 0x20));
            uVar9 = vdot_t(auVar3._0_12_,auVar3._0_12_);
            fVar10 = (float)vsqrt_s(uVar9);
            if (fVar10 <= 2000.0) {
              bVar5 = true;
              bVar4 = true;
              bVar2 = true;
              iVar6 = *(int *)(iVar6 + 4);
            }
            else {
              iVar6 = *(int *)(iVar6 + 4);
            }
          }
          if (iVar6 == 0) break;
          cVar1 = *(char *)(iVar6 + 0x158);
        }
      }
      iVar6 = *(int *)(param_4 + 0x140);
    }
    if (iVar6 != 0) {
      if (bVar2) {
        *(uint *)(*(int *)(param_4 + 0x140) + 0x130) =
             *(uint *)(*(int *)(param_4 + 0x140) + 0x130) & 0xfffffffd;
      }
      else {
        *(uint *)(*(int *)(param_4 + 0x140) + 0x130) =
             *(uint *)(*(int *)(param_4 + 0x140) + 0x130) | 2;
      }
    }
    local_60[0] = 3;
    if (bVar4) {
      local_60[0] = 1;
    }
LAB_088ac258:
    fVar10 = *param_5;
  }
  bVar2 = false;
  if ((*(int *)(param_4 + 0x140) != 0) && (bVar5)) {
    uVar9 = FUN_088660e0();
    iVar6 = FUN_088abbe0(param_4,param_4,uVar9,param_5,local_60);
    bVar2 = iVar6 != 0;
  }
  if (local_60[0] < 2) {
    if (local_60[0] != 0) {
      fVar8 = *param_5;
      bVar2 = true;
      *param_5 = fVar8 + 0.1;
      if (1.0 < fVar8 + 0.1) {
        *param_5 = 1.0;
      }
      goto LAB_088ac334;
    }
LAB_088ac2c8:
    if (!bVar2) {
      *param_5 = 1.0;
      goto LAB_088ac334;
    }
    fVar8 = *param_5;
  }
  else {
    if (local_60[0] < 3) {
      *param_5 = 0.0;
    }
    else {
      if (3 < local_60[0]) goto LAB_088ac2c8;
      fVar8 = *param_5;
      bVar2 = true;
      *param_5 = fVar8 - 0.1;
      if (fVar8 - 0.1 < 0.0) {
        *param_5 = 0.0;
      }
    }
LAB_088ac334:
    fVar8 = *param_5;
  }
  if (fVar8 < 1.0) {
    if (*param_5 <= 0.0) {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  if (param_7 == '\0') {
    fVar10 = *param_5;
  }
  else {
    if (bVar2) {
      iVar6 = (**(code **)(*(int *)(param_4 + 0x14) + 0x6c))
                        (param_4 + *(short *)(*(int *)(param_4 + 0x14) + 0x68));
      if (iVar6 != 0) {
        fVar10 = *param_5;
        goto LAB_088ac3fc;
      }
      if (fVar10 != *param_5) {
        FUN_089e0a70(param_4,&LAB_088a90e0,0);
        *param_6 = '\x01';
      }
    }
    else {
      iVar6 = (**(code **)(*(int *)(param_4 + 0x14) + 0x6c))
                        (param_4 + *(short *)(*(int *)(param_4 + 0x14) + 0x68));
      if (iVar6 != 0) {
        fVar10 = *param_5;
        goto LAB_088ac3fc;
      }
      if (*param_6 != '\0') {
        FUN_089e0a70(param_4,&LAB_088a90f8,0);
        *param_6 = '\0';
      }
    }
    fVar10 = *param_5;
  }
LAB_088ac3fc:
  if (fVar10 <= 0.0) {
    *(undefined *)(param_4 + 0xb8) = 0;
    return 0;
  }
  return 1;
}

