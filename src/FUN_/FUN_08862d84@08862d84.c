#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08862d84(int param_1,int param_2)

{
  char cVar1;
  undefined auVar2 [16];
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float local_d0 [43];
  
  pfVar4 = local_d0;
  iVar7 = 0;
  fVar6 = 0.0;
  iVar5 = *DAT_08aba808;
  if (iVar5 != 0) {
    do {
      if (iVar5 == param_1) {
        iVar5 = *(int *)(iVar5 + 4);
      }
      else if (*(char *)(iVar5 + 0x4c1) == '\0') {
        if (*(char *)(iVar5 + 0x476) == '\0') {
          if (param_2 == 1) {
            iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x8c))
                              (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x88));
            if (iVar3 != 0) {
              iVar5 = *(int *)(iVar5 + 4);
              goto LAB_08862eec;
            }
            cVar1 = *(char *)(param_1 + 0x158);
          }
          else {
            cVar1 = *(char *)(param_1 + 0x158);
          }
          if (cVar1 == '\0') {
            auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),
                            *(undefined (*) [16])(iVar5 + 0x20));
            fVar8 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
            *(float *)((int)pfVar4 + 4) = -fVar8;
            local_d0[iVar7 * 2] = *(float *)(iVar5 + 0xc);
LAB_08862ee8:
            iVar7 = iVar7 + 1;
            pfVar4 = (float *)((int)pfVar4 + 8);
            iVar5 = *(int *)(iVar5 + 4);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x7c))
                              (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x78));
            if (iVar3 == 0) {
              iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x84))
                                (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x80));
              if (iVar3 == 0) {
                auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),
                                *(undefined (*) [16])(iVar5 + 0x20));
                fVar8 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
                *(float *)((int)pfVar4 + 4) = -fVar8;
                local_d0[iVar7 * 2] = *(float *)(iVar5 + 0xc);
                goto LAB_08862ee8;
              }
              iVar5 = *(int *)(iVar5 + 4);
            }
            else {
              iVar5 = *(int *)(iVar5 + 4);
            }
          }
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
LAB_08862eec:
    } while (iVar5 != 0);
  }
  if (0 < iVar7) {
    if (iVar7 <= *(int *)(param_1 + 0x160)) {
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    if (1 < iVar7) {
      FUN_089bf03c(local_d0,iVar7);
    }
    fVar6 = local_d0[*(int *)(param_1 + 0x160) * 2];
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  }
  return fVar6;
}

