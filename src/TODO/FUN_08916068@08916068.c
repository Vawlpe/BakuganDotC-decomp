#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08916068(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  
  if (param_2 == '\0') {
    iVar5 = 0;
    iVar7 = 0;
    iVar8 = 0x4c;
    do {
      piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
      iVar2 = *(int *)(param_1 + 0x1c);
      if (*(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + iVar5 + 0x540) == '\0') {
        iVar6 = FUN_08913084(*(int *)(param_1 + 0x16a8),iVar5);
        iVar2 = *(int *)(iVar2 + iVar8 * 4);
        FUN_089146d8(*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),param_1,
                     (int)*(short *)(&DAT_08a9bbcc + iVar6 * 4),iVar8);
      }
      else {
        iVar2 = *(int *)(iVar2 + iVar7 + 0x108);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 5;
    } while (iVar5 < 6);
    iVar5 = 0;
    iVar7 = 0;
    do {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xf0);
      iVar8 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),iVar5,iVar5,uVar3);
      FUN_089f4a90(0,(float)(uint)(byte)(&DAT_08a9bbca)[iVar8 * 4],uVar3);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < 6);
    iVar5 = 0;
    iVar7 = 0;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xd8);
      uVar3 = *(undefined4 *)(param_1 + 0x16a8);
      iVar8 = FUN_08913084(uVar3,iVar5,iVar5,uVar3,uVar4);
      FUN_08913084((float)((iVar8 + -1) / 10),uVar3,iVar5);
      FUN_089f4a90(uVar4);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < 6);
    iVar5 = 0x2b;
    iVar7 = 0xac;
    iVar8 = param_1 + 0x724;
    do {
      if ((iVar5 != 0x32) && (iVar5 != 0x35)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if (iVar5 < 0x42) {
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        FUN_089a5408(0x3f800000,0,iVar2,iVar8,3);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar5 < 0x66);
    local_58 = param_1 + 0x74c;
    local_5c = param_1 + 0x8dc;
    local_60 = param_1 + 0x9cc;
    local_64 = param_1 + 0xabc;
    local_68 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar5 = param_1;
    do {
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xb0) + 0x68) = (float)(-0x32 - iVar8);
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar5 + 0x12d0) - *(float *)(param_1 + 0x12d0),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xb0),local_58,0xb);
      fVar12 = (float)(-100 - iVar8);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xd8) + 0x68) = fVar12;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar5 + 0x12f8) - *(float *)(param_1 + 0x12f8),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xd8),local_5c,0xb);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xf0) + 0x68) = fVar12;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar5 + 0x1310) - *(float *)(param_1 + 0x1310),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xf0),local_60,0xb);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x108) + 0x68) = fVar12;
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar5 + 0x1328) - *(float *)(param_1 + 0x1328),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x108),local_64,0xb);
      iVar11 = 0;
      iVar6 = local_68 * 4;
      iVar10 = param_1 + local_68 * 0x28 + 0xbac;
      iVar9 = param_1 + iVar6;
      iVar2 = param_1;
      do {
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x120) + 0x68) = fVar12;
        FUN_089a54cc(0x3f800000,0,*(float *)(iVar9 + 0x1340) - *(float *)(iVar2 + 0x1340),0,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x120),iVar10,0xb);
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 4;
        iVar10 = iVar10 + 0x28;
        iVar9 = iVar9 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar11 < 5);
      local_58 = local_58 + 0x28;
      local_5c = local_5c + 0x28;
      local_60 = local_60 + 0x28;
      local_64 = local_64 + 0x28;
      iVar8 = iVar8 + 1;
      local_68 = local_68 + 5;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 4;
    } while (iVar8 < 6);
  }
  else {
    iVar5 = 0x2b;
    iVar7 = 0xac;
    iVar8 = param_1 + 0x724;
    do {
      if ((iVar5 != 0x32) && (iVar5 != 0x35)) {
        FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar8,3);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar5 < 0x66);
    local_70 = param_1 + 0x74c;
    local_6c = 0;
    local_74 = param_1 + 0x8dc;
    local_78 = param_1 + 0x9cc;
    local_7c = param_1 + 0xabc;
    iVar7 = 0;
    iVar8 = 0;
    iVar5 = param_1;
    do {
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x12d0) - *(float *)(iVar5 + 0x12d0),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xb0),local_70,0xb);
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x12f8) - *(float *)(iVar5 + 0x12f8),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xd8),local_74,0xb);
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x1310) - *(float *)(iVar5 + 0x1310),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0xf0),local_78,0xb);
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + 0x1328) - *(float *)(iVar5 + 0x1328),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x108),local_7c,0xb);
      iVar6 = iVar8 * 4;
      iVar11 = 0;
      iVar10 = param_1 + iVar8 * 0x28 + 0xbac;
      iVar9 = param_1 + iVar6;
      iVar2 = param_1;
      do {
        FUN_089a54cc(0x3f800000,0,*(float *)(iVar2 + 0x1340) - *(float *)(iVar9 + 0x1340),param_2,
                     *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x120),iVar10,0xb);
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 4;
        iVar10 = iVar10 + 0x28;
        iVar2 = iVar2 + 4;
        iVar9 = iVar9 + 4;
      } while (iVar11 < 5);
      local_6c = local_6c + 1;
      local_70 = local_70 + 0x28;
      local_74 = local_74 + 0x28;
      local_78 = local_78 + 0x28;
      local_7c = local_7c + 0x28;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 4;
      iVar8 = iVar8 + 5;
    } while (local_6c < 6);
  }
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  return;
}

