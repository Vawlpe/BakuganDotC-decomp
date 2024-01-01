#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08992a1c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined local_70;
  undefined local_6f;
  undefined2 local_6e;
  float local_6c;
  float local_68 [3];
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  
  local_54 = *(int *)(param_1 + 0x84);
  if (*(char *)(param_1 + 0x89) != '\0') {
    local_54 = 0xa0;
  }
  iVar5 = *(int *)(param_1 + 0x90);
  FUN_089f51b8(iVar5);
  *(undefined4 *)(iVar5 + 0x84) = 0;
  local_5c = 0;
  local_58 = 0;
  fVar8 = 72.0;
  do {
    fVar9 = (float)local_5c;
    iVar5 = 0;
    iVar6 = local_54 + local_58;
    do {
      local_70 = 0;
      local_6f = 0;
      local_6e = 0;
      FUN_089eb2e0(&local_70,*(undefined4 *)(DAT_08ac3bf0 + iVar6 * 4));
      if (*(char *)(param_1 + 0x89) == '\0') {
        if (*(int *)(param_1 + 0x84) == 0x50) {
          fVar7 = fVar8 + 1.0;
        }
        else {
          fVar7 = fVar8;
          if (*(int *)(param_1 + 0x84) == 0x78) {
            fVar7 = fVar8 + 1.0;
          }
        }
      }
      else {
        fVar7 = fVar8 - 1.0;
      }
      local_6c = 0.0;
      local_68[0] = 0.0;
      local_50 = fVar8;
      FUN_089920b8(iVar6,&local_6c,local_68);
      uVar3 = DAT_08b001bc;
      uVar2 = DAT_08b001b8;
      uVar1 = DAT_08b001b4;
      iVar4 = *(int *)(param_1 + 0x90);
      *(undefined4 *)(iVar4 + 0xc0) = DAT_08b001b0;
      *(undefined4 *)(iVar4 + 0xc4) = uVar1;
      *(undefined4 *)(iVar4 + 200) = uVar2;
      *(undefined4 *)(iVar4 + 0xcc) = uVar3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x90) + 0x74);
      fVar8 = (float)iVar5 * 28.0 + 100.0 + 14.0;
      fVar7 = fVar7 + fVar9 * 26.0;
      (**(code **)(iVar4 + 0x14))
                (fVar8 + local_6c,fVar7 + 3.0 + local_68[0],0,
                 *(int *)(param_1 + 0x90) + (int)*(short *)(iVar4 + 0x10),&local_70,1,0,0);
      uVar3 = DAT_08b0019c;
      uVar2 = DAT_08b00198;
      uVar1 = DAT_08b00194;
      iVar4 = *(int *)(param_1 + 0x90);
      *(undefined4 *)(iVar4 + 0xc0) = DAT_08b00190;
      *(undefined4 *)(iVar4 + 0xc4) = uVar1;
      *(undefined4 *)(iVar4 + 200) = uVar2;
      *(undefined4 *)(iVar4 + 0xcc) = uVar3;
      iVar4 = *(int *)(*(int *)(param_1 + 0x90) + 0x74);
      (**(code **)(iVar4 + 0x14))
                ((fVar8 - 1.0) + local_6c,fVar7 + 2.0 + local_68[0],0,
                 *(int *)(param_1 + 0x90) + (int)*(short *)(iVar4 + 0x10),&local_70,1,0,0);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      fVar8 = local_50;
    } while (iVar5 < 10);
    local_5c = local_5c + 1;
    local_58 = local_58 + 10;
  } while (local_5c < 4);
  return;
}

