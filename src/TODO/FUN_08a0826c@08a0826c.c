#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a0826c(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar7 = &local_b0;
  uVar9 = param_2 & 0x7fffffff;
  if (uVar9 < 0x3fe921fc) {
    *(uint *)((int)param_3 + 4) = param_2;
    *(undefined4 *)param_3 = param_1;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    return 0;
  }
  local_98 = param_1;
  local_94 = param_2;
  local_48 = param_2;
  if (uVar9 < 0x4002d97c) {
    if (0 < (int)param_2) {
      uVar15 = __subdf3(param_1,param_2,0x54400000,0x3ff921fb);
      uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar2 = (undefined4)uVar15;
      if (uVar9 == 0x3ff921fb) {
        uVar15 = __subdf3(uVar2,uVar10,0x1a600000,0x3dd0b461);
        uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar12 = __subdf3((int)uVar15,uVar2,0x2e037073,0x3ba3198a);
        *param_3 = uVar12;
        uVar15 = __subdf3((int)uVar15,uVar2,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4)
                         );
        uVar15 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x2e037073,0x3ba3198a);
        param_3[1] = uVar15;
      }
      else {
        uVar15 = __subdf3(uVar2,uVar10,0x1a626331,0x3dd0b461);
        *param_3 = uVar15;
        uVar15 = __subdf3(uVar2,uVar10,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
        uVar15 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x1a626331,0x3dd0b461);
        param_3[1] = uVar15;
      }
      return 1;
    }
    uVar15 = __adddf3(param_1,param_2,0x54400000,0x3ff921fb);
    uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar2 = (undefined4)uVar15;
    if (uVar9 == 0x3ff921fb) {
      uVar15 = __adddf3(uVar2,uVar10,0x1a600000,0x3dd0b461);
      uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar12 = __adddf3((int)uVar15,uVar2,0x2e037073,0x3ba3198a);
      *param_3 = uVar12;
      uVar15 = __subdf3((int)uVar15,uVar2,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
      uVar15 = __adddf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x2e037073,0x3ba3198a);
      param_3[1] = uVar15;
    }
    else {
      uVar15 = __adddf3(uVar2,uVar10,0x1a626331,0x3dd0b461);
      *param_3 = uVar15;
      uVar15 = __subdf3(uVar2,uVar10,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
      uVar15 = __adddf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x1a626331,0x3dd0b461);
      param_3[1] = uVar15;
    }
    return -1;
  }
  local_50 = uVar9;
  if (0x413921fb < uVar9) {
    if (0x7fefffff < uVar9) {
      *(undefined4 *)((int)param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 1) = 0;
      *(undefined4 *)((int)param_3 + 4) = 0;
      *(undefined4 *)param_3 = 0;
      return 0;
    }
    local_4c = ((int)uVar9 >> 0x14) + -0x416;
    iVar6 = uVar9 + local_4c * -0x100000;
    iVar8 = 0;
    local_80 = param_1;
    local_7c = param_2;
    local_78 = param_1;
    local_70 = param_1;
    local_6c = iVar6;
    do {
      uVar2 = FUN_08a0ee6c(param_1,iVar6);
      uVar15 = FUN_08a0ed90(uVar2);
      *puVar7 = uVar15;
      uVar15 = __subdf3(param_1,iVar6,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      local_a0 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,0x41700000);
      iVar6 = (int)((ulonglong)local_a0 >> 0x20);
      param_1 = (undefined4)local_a0;
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 2);
    iVar8 = 3;
    iVar6 = FUN_08a0ed34(param_1,iVar6,0,0);
    if (iVar6 == 0) {
      puVar7 = &local_a0;
      do {
        iVar8 = iVar8 + -1;
        iVar6 = FUN_08a0ed34(*(undefined4 *)(puVar7 + -1),*(undefined4 *)((int)puVar7 + -4),0,0);
        puVar7 = puVar7 + -1;
      } while (iVar6 == 0);
    }
    iVar6 = FUN_08a0abb8(&local_b0,param_3,local_4c,iVar8,2,&DAT_08aa4708);
    if (-1 < (int)local_48) {
      return iVar6;
    }
    uVar15 = __negdf2(*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
    *param_3 = uVar15;
    uVar15 = __negdf2(*(undefined4 *)(param_3 + 1),*(undefined4 *)((int)param_3 + 0xc));
    param_3[1] = uVar15;
    return -iVar6;
  }
  uVar15 = fabs(param_1,param_2);
  uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar12 = __muldf3((int)uVar15,uVar10,0x6dc9c883,0x3fe45f30);
  uVar12 = __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x3fe00000);
  iVar6 = FUN_08a0ee6c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  uVar12 = FUN_08a0ed90(iVar6);
  uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar2 = (undefined4)uVar12;
  uVar13 = __muldf3(uVar2,uVar3,0x54400000,0x3ff921fb);
  uVar15 = __subdf3((int)uVar15,uVar10,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  local_58 = uVar15;
  local_60 = __muldf3(uVar2,uVar3,0x1a626331,0x3dd0b461);
  uVar13 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)local_60,
                    (int)((ulonglong)local_60 >> 0x20));
  uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (iVar6 < 0x20) {
    if (uVar9 != *(uint *)(&DAT_08aa480c + iVar6 * 4)) {
      *param_3 = uVar13;
      uVar11 = *(uint *)((int)param_3 + 4);
      uVar10 = *(undefined4 *)param_3;
      local_50 = uVar9;
      goto LAB_08a088ec;
    }
    *(undefined4 *)((int)param_3 + 4) = uVar10;
    local_50 = uVar9;
  }
  else {
    *(undefined4 *)((int)param_3 + 4) = uVar10;
  }
  *(int *)param_3 = (int)uVar13;
  uVar11 = *(uint *)((int)param_3 + 4);
  uVar10 = *(undefined4 *)param_3;
  iVar8 = (int)local_50 >> 0x14;
  local_90 = uVar10;
  local_8c = uVar11;
  local_40 = CONCAT44(local_40._4_4_,(undefined4)local_40);
  local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  local_30 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  if (0x10 < (int)(iVar8 - (uVar11 >> 0x14 & 0x7ff))) {
    local_40 = __muldf3(uVar2,uVar3,0x1a600000,0x3dd0b461);
    uVar4 = (undefined4)((ulonglong)local_40 >> 0x20);
    uVar10 = (undefined4)local_40;
    uVar15 = __subdf3((undefined4)local_58,local_58._4_4_,uVar10,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar1 = (undefined4)uVar15;
    local_38 = uVar12;
    uVar12 = __muldf3(uVar2,uVar3,0x2e037073,0x3ba3198a);
    uVar13 = __subdf3((undefined4)local_58,local_58._4_4_,uVar1,uVar5);
    uVar13 = __subdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar10,uVar4);
    uVar12 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                      (int)((ulonglong)uVar13 >> 0x20));
    local_60 = uVar12;
    uVar12 = __subdf3(uVar1,uVar5,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    uVar3 = local_38._4_4_;
    uVar2 = (undefined4)local_38;
    *param_3 = uVar12;
    uVar11 = *(uint *)((int)param_3 + 4);
    uVar10 = *(undefined4 *)param_3;
    local_88 = uVar10;
    local_84 = uVar11;
    if (0x31 < (int)(iVar8 - (uVar11 >> 0x14 & 0x7ff))) {
      local_30 = uVar15;
      uVar12 = __muldf3((undefined4)local_38,local_38._4_4_,0x2e000000,0x3ba3198a);
      uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar15 = __subdf3(uVar1,uVar5,(int)uVar12,uVar10);
      uVar1 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar13 = __muldf3(uVar2,uVar3,0x252049c1,0x397b839a);
      uVar14 = __subdf3((undefined4)local_30,local_30._4_4_,(int)uVar15,uVar1);
      uVar12 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar12,uVar10);
      uVar12 = __subdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                        (int)((ulonglong)uVar12 >> 0x20));
      local_60 = uVar12;
      uVar12 = __subdf3((int)uVar15,uVar1,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *param_3 = uVar12;
      uVar11 = *(uint *)((int)param_3 + 4);
      uVar10 = *(undefined4 *)param_3;
    }
  }
LAB_08a088ec:
  uVar15 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar10,uVar11);
  uVar15 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(undefined4)local_60,local_60._4_4_
                   );
  param_3[1] = uVar15;
  if (-1 < (int)local_48) {
    return iVar6;
  }
  uVar15 = __negdf2(uVar10,uVar11);
  *param_3 = uVar15;
  uVar15 = __negdf2(*(undefined4 *)(param_3 + 1),*(undefined4 *)((int)param_3 + 0xc));
  param_3[1] = uVar15;
  return -iVar6;
}

