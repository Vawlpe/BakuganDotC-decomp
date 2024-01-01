#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d260(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int local_50;
  int local_4c;
  int local_48;
  
  memset_jak(param_1 + 0x188c,0,0x600);
  iVar1 = FUN_0880dc00("DWWorldName");
  FUN_088cc354(iVar1);
  local_48 = param_1 + 0x1234;
  local_4c = param_1 + 0x1238;
  local_50 = param_1 + 0x123c;
  iVar9 = 0;
  iVar8 = param_1 + 0x1244;
  iVar6 = 0;
  iVar7 = param_1;
  iVar10 = param_1;
  do {
    if ((int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) +
                                                      0x10a0) + 0x11c2) <= iVar9) {
      return;
    }
    strcpy(iVar8,*(undefined4 *)(iVar1 + *(char *)(param_1 + 0x109c) * 0xc + iVar9 * 4));
    iVar4 = *(int *)(iVar7 + 0x1220);
    FUN_089f51b8(iVar4);
    *(undefined4 *)(iVar4 + 0x84) = 0;
    iVar4 = *(int *)(*(int *)(iVar7 + 0x1220) + 0x74);
    (**(code **)(iVar4 + 0x14))
              (*(undefined4 *)(param_1 + 0x11cc),*(float *)(param_1 + 0x11d0) - 19.0,0,
               *(int *)(iVar7 + 0x1220) + (int)*(short *)(iVar4 + 0x10),iVar8,1,0,0);
    FUN_088184e8(0,*(undefined4 *)(iVar7 + 0x1220),iVar8,local_48,local_4c,local_50);
    *(undefined4 *)(iVar7 + 0x1240) = *(undefined4 *)(*(int *)(iVar7 + 0x1220) + 0x84);
    iVar3 = *(int *)(iVar7 + 0x1240);
    iVar5 = 0;
    fVar11 = (float)*(int *)(*(int *)(iVar7 + 0x1220) + 0x88);
    *(float *)(iVar7 + 0x122c) = fVar11;
    iVar4 = iVar10;
    if (0.0 < fVar11) {
      do {
        FUN_089f46dc(iVar3);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 0x20;
        FUN_089a51fc(0x3f4ccccd,0x3f4ccccd,0,iVar3);
        *(undefined4 *)(iVar3 + 0x68) = 0xc2200000;
        iVar5 = iVar5 + 1;
        *(float *)(iVar3 + 100) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 200) + 100) - 19.0;
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        fVar11 = *(float *)(iVar7 + 0x122c);
        *(float *)(iVar4 + 0x188c) =
             *(float *)(*(int *)(iVar2 + 200) + 0x60) - *(float *)(iVar3 + 0x60);
        *(float *)(iVar4 + 0x1890) =
             *(float *)(*(int *)(iVar2 + 200) + 100) - *(float *)(iVar3 + 100);
        iVar3 = *(int *)(iVar3 + 4);
        iVar4 = iVar4 + 8;
      } while ((float)iVar5 < fVar11);
    }
    *(undefined4 *)(iVar7 + 0x1224) = 0;
    *(undefined4 *)(iVar7 + 0x1228) = 0x3f800000;
    local_48 = local_48 + 0x224;
    local_4c = local_4c + 0x224;
    iVar9 = iVar9 + 1;
    local_50 = local_50 + 0x224;
    iVar7 = iVar7 + 0x224;
    iVar8 = iVar8 + 0x224;
    iVar6 = iVar6 + 4;
    iVar10 = iVar10 + 0x200;
  } while (iVar9 < 3);
  return;
}

