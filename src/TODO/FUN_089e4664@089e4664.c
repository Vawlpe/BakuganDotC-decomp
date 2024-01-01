#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e4664(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined (*pauVar3) [12];
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float local_50 [3];
  undefined4 *local_44;
  undefined (*local_40) [12];
  int local_3c;
  
  iVar1 = FUN_089e9858(param_2,param_3);
  if (iVar1 != 0) {
    local_50[0] = INFINITY;
    if (*(int *)(param_2 + 0x20) == 0) {
      FUN_089e4664(param_1,*(undefined4 *)(param_2 + 0x28),param_3);
      FUN_089e4664(param_1,*(undefined4 *)(param_2 + 0x2c),param_3);
    }
    else {
      iVar1 = 0;
      local_40 = (undefined (*) [12])(param_3 + 0x10);
      if (0 < *(int *)(param_2 + 0x20)) {
        iVar6 = 0;
        local_44 = &DAT_08af8390;
        local_3c = param_3;
        do {
          puVar4 = (ushort *)
                   (*(int *)(param_1 + 0x14) +
                   (uint)*(ushort *)(*(int *)(param_2 + 0x24) + iVar6) * 10);
          uVar5 = (uint)*(char *)(DAT_08af83b0 + ((int)*(char *)(puVar4 + 4) & 0xfU));
          if ((uVar5 == 0xffffffff) || ((1 << (uVar5 & 0x1f) & DAT_08af8380) != 0)) {
            pauVar3 = (undefined (*) [12])(*(int *)(param_1 + 0xc) + (uint)puVar4[3] * 0x10);
            fVar7 = (float)vdot_t(*pauVar3,*local_40);
            if (0.0 <= fVar7 - *(float *)pauVar3[1]) {
              iVar2 = *(int *)(param_1 + 4);
              iVar2 = FUN_089e45d0(iVar2 + (uint)*puVar4 * 0x10,iVar2 + (uint)puVar4[1] * 0x10,
                                   iVar2 + (uint)puVar4[2] * 0x10,local_3c,local_50);
              if (iVar2 == 0) {
                iVar2 = *(int *)(param_2 + 0x20);
              }
              else if ((DAT_08ac5ce8 == (code *)0x0) ||
                      (iVar2 = (*DAT_08ac5ce8)(param_1,puVar4), iVar2 != 0)) {
                if (local_50[0] < DAT_08b002a0) {
                  DAT_08b002a0 = local_50[0];
                  DAT_08b00280 = *local_44;
                  DAT_08b00284 = local_44[1];
                  DAT_08b00288 = local_44[2];
                  DAT_08b0028c = local_44[3];
                  DAT_08b002a8 = DAT_08af8384;
                  DAT_08b002b8 = DAT_08af8388;
                  DAT_08ac5c98 = 1;
                  iVar2 = *(int *)(param_2 + 0x20);
                  DAT_08b002ac = param_1;
                  DAT_08b002b0 = puVar4;
                  DAT_08b002b4 = uVar5;
                }
                else {
                  iVar2 = *(int *)(param_2 + 0x20);
                }
              }
              else {
                iVar2 = *(int *)(param_2 + 0x20);
              }
            }
            else {
              iVar2 = *(int *)(param_2 + 0x20);
            }
          }
          else {
            iVar2 = *(int *)(param_2 + 0x20);
          }
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 2;
        } while (iVar1 < iVar2);
      }
    }
  }
  return;
}

