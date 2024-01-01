#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088184e8(float param_1,int param_2,undefined4 param_3,float *param_4,float *param_5,
                int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  float local_5c;
  float *local_58;
  float *local_54;
  int *local_50;
  
  local_5c = param_1;
  iVar1 = strcmp(param_3,&DAT_08a3a1c4);
  if (iVar1 == 0) {
    return 0;
  }
  fVar10 = 0.0;
  DAT_08ab016c = 0.0;
  local_60 = 0;
  local_80 = 0;
  fVar8 = 0.0;
  fVar6 = 0.0;
  local_58 = param_4;
  local_54 = param_5;
  local_50 = param_6;
LAB_088185f0:
  fVar9 = fVar6;
  iVar1 = FUN_08818370(param_3,&local_80);
  if (iVar1 == -1) {
    if (local_58 != (float *)0x0) {
      *local_58 = fVar10;
    }
    if (local_54 != (float *)0x0) {
      *local_54 = fVar9;
    }
    if (local_50 != (int *)0x0) {
      *local_50 = local_80 + 1;
    }
    return local_60;
  }
  local_7c = local_80;
  uVar2 = FUN_08818370(param_3,&local_7c);
  iVar3 = FUN_088183ec(iVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = 0;
    local_78 = local_80;
    fVar6 = (float)FUN_088184ac(param_2,0);
    fVar6 = fVar8 + fVar6;
    do {
      iVar4 = FUN_08818370(param_3,&local_78);
      if (iVar4 < 1) {
        iVar5 = FUN_0880dbb4();
        if ((iVar5 == 0) || (iVar4 != -5)) goto LAB_088186f4;
        local_74 = local_78;
        uVar2 = FUN_08818370(param_3,&local_74);
        iVar5 = FUN_088183ec(0xfffffffb,uVar2);
        if (iVar5 != 0) goto LAB_088186f4;
      }
      iVar3 = iVar3 + 1;
      if (iVar4 == -5) {
        fVar7 = (float)FUN_088184ac(param_2,0);
      }
      else {
        uVar2 = FUN_088184ac(param_2,iVar4);
        uVar2 = vf2id_s(uVar2,0);
        fVar7 = (float)vi2f_s(uVar2,0);
        local_70 = fVar7;
      }
      fVar6 = fVar6 + fVar7;
    } while( true );
  }
  goto LAB_08818778;
LAB_088186f4:
  if ((0 < iVar3) && ((int)(*(float *)(param_2 + 0xe0) - local_5c) < (int)fVar6)) {
    iVar1 = -3;
  }
  if (fVar9 < fVar8) {
    fVar9 = fVar8;
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    uVar2 = FUN_088184ac(param_2,iVar1);
    uVar2 = vf2id_s(uVar2,0);
    local_6c = (float)vi2f_s(uVar2,0);
    DAT_08ab016c = DAT_08ab016c + local_6c;
  }
LAB_08818778:
  fVar6 = fVar9;
  if (iVar1 != -2) {
    if ((iVar1 == -3) || (iVar1 == -4)) {
      fVar10 = fVar10 + *(float *)(param_2 + 0x98);
      fVar8 = 0.0;
    }
    else if (iVar1 == -0x11) {
      fVar8 = fVar8 + *(float *)(param_2 + 0x94);
      fVar6 = fVar8;
      if (fVar8 <= fVar9) {
        fVar6 = fVar9;
      }
    }
    else if (iVar1 == -5) {
      if (*(int *)(param_2 + 0xd8) == 0) {
        fVar6 = *(float *)(param_2 + 0x94) * 0.5;
      }
      else {
        fVar6 = (float)FUN_088184ac(param_2,0);
      }
      fVar8 = fVar8 + fVar6;
      fVar6 = fVar8;
      if (fVar8 <= fVar9) {
        fVar6 = fVar9;
      }
    }
    else if ((((-6 < iVar1) || (iVar1 < -0xb)) && ((-0xd < iVar1 || (iVar1 < -0xf)))) &&
            (((iVar1 != -0x13 && (iVar1 != -0x10)) && (-1 < iVar1)))) {
      local_60 = local_60 + 1;
      if (fVar10 == 0.0) {
        fVar10 = fVar10 + *(float *)(param_2 + 0x98);
      }
      if (*(float *)(param_2 + 0xa8) == 1.0) {
        uVar2 = vf2id_s(fVar8,0);
        fVar8 = (float)vi2f_s(uVar2,0);
        local_68 = fVar8;
        uVar2 = FUN_088184ac(param_2,iVar1);
        uVar2 = vf2id_s(uVar2,0);
        local_64 = (float)vi2f_s(uVar2,0);
        fVar8 = fVar8 + local_64;
      }
      else {
        fVar7 = (float)FUN_088184ac(param_2,iVar1);
        fVar8 = fVar8 + fVar7;
      }
      if (fVar9 < fVar8) {
        fVar6 = fVar8;
      }
    }
  }
  goto LAB_088185f0;
}

