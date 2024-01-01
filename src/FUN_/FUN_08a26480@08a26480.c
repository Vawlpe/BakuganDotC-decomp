#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a26480(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined2 *puVar18;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *local_60;
  undefined4 local_5c [3];
  int local_50;
  short *local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  
  local_44 = param_1;
  local_40 = param_3;
  iVar9 = FUN_08a26418(param_2,4,0);
  iVar10 = FUN_08a26418(param_2,5,0);
  if (iVar9 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = 1;
    iVar11 = FUN_08a12a1c(1,*local_44);
    *(int *)(local_40 + 0xc) = iVar11;
    FUN_08a260dc(local_44,iVar9,iVar11,0x80);
    if (*(ushort *)(iVar11 + 0x26) < 2) {
      local_48 = 0;
    }
  }
  if (iVar10 != 0) {
    iVar9 = thunk_FUN_08a12a1c(1,*local_44);
    *(int *)(local_40 + 0x10) = iVar9;
    FUN_08a260dc(local_44,iVar10,iVar9,0x10);
    if (1 < *(ushort *)(iVar9 + 0x26)) {
      local_48 = 1;
    }
  }
  iVar9 = FUN_08a263a8(param_2,6);
  if ((iVar9 != 0) || (iVar10 = 0, local_48 != 0)) {
    iVar10 = iVar9 + 1;
  }
  iVar10 = FUN_08a129fc(iVar10,*local_44);
  *(char *)(local_40 + 0x18) = (char)iVar9;
  iVar9 = *(int *)(param_2 + 4);
  iVar11 = *(int *)(param_2 + 8);
  *(int *)(local_40 + 0x14) = iVar10;
  local_4c = (short *)(iVar9 + param_2);
  psVar19 = (short *)(param_2 + iVar11);
  if (local_4c <= psVar19) {
LAB_08a26748:
    FUN_08a11d60(local_40);
    if (local_48 == 0) {
      local_60 = (undefined4 *)FUN_08a102d4(*local_44,1,4,0x80);
      *(undefined4 **)(local_40 + 8) = local_60;
      local_5c[0] = 0x80;
      FUN_08a111b4(local_40,&local_60,local_5c,0x80000001);
      uVar16 = *(undefined4 *)(local_40 + 8);
      *local_60 = 0xb000000;
      local_60 = local_60 + 1;
      FUN_08a10a8c(local_40,uVar16);
    }
    return;
  }
  sVar2 = *psVar19;
  do {
    if (sVar2 == 6) {
      iVar9 = *(int *)(psVar19 + 6);
      uVar3 = *(ushort *)((int)psVar19 + iVar9 + 4);
      uVar4 = *(ushort *)((int)psVar19 + iVar9 + 6);
      uVar5 = *(ushort *)((int)psVar19 + iVar9 + 8);
      uVar6 = *(ushort *)((int)psVar19 + iVar9 + 0xc);
      uVar20 = (uint)uVar6;
      uVar7 = *(ushort *)((int)psVar19 + iVar9 + 0xe);
      uVar21 = (uint)uVar7;
      *(char *)(iVar10 + 0xe) = (char)*(undefined2 *)((int)psVar19 + iVar9 + 10);
      local_50 = iVar10 + 0x30;
      *(char *)(iVar10 + 0xc) = (char)uVar6;
      *(char *)(iVar10 + 0xd) = (char)uVar7;
      iVar17 = *(int *)((int)psVar19 + iVar9 + 0x1c);
      iVar11 = *(int *)((int)psVar19 + iVar9 + 0x18);
      uVar16 = *local_44;
      *(float *)(iVar10 + 0x14) = (float)(uint)uVar3;
      iVar17 = iVar17 - iVar11;
      *(float *)(iVar10 + 0x18) = (float)(uint)uVar4;
      *(float *)(iVar10 + 0x1c) = (float)(uint)uVar5;
      puVar12 = (undefined2 *)FUN_08a102d4(uVar16,0,4,uVar20 << 2);
      puVar13 = (undefined2 *)FUN_08a102d4(*local_44,0,4,uVar21 * 8 + iVar17);
      iVar11 = *(int *)((int)psVar19 + iVar9 + 0x18);
      puVar18 = puVar13 + uVar21 * 4;
      *(undefined2 **)(iVar10 + 8) = puVar13;
      *(undefined2 **)(iVar10 + 4) = puVar12;
      memcpy_jak(puVar18,(int)psVar19 + iVar11 + iVar9,iVar17);
      puVar14 = (undefined2 *)((int)psVar19 + *(int *)((int)psVar19 + iVar9 + 0x10) + iVar9);
      if (uVar20 != 0) {
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 1;
          *puVar12 = *puVar14;
          puVar1 = puVar14 + 1;
          puVar14 = puVar14 + 2;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
        } while (uVar20 != uVar15);
      }
      puVar12 = (undefined2 *)((int)psVar19 + *(int *)((int)psVar19 + iVar9 + 0x14) + iVar9);
      if (uVar21 != 0) {
        iVar9 = *(int *)((int)psVar19 + iVar9 + 0x18);
        uVar20 = 0;
        do {
          iVar10 = *(int *)(puVar12 + 2);
          uVar20 = uVar20 + 1;
          *puVar13 = *puVar12;
          uVar8 = puVar12[1];
          *(int *)(puVar13 + 2) = (int)puVar18 + (iVar10 - iVar9);
          puVar12 = puVar12 + 4;
          puVar13[1] = uVar8;
          puVar13 = puVar13 + 4;
        } while (uVar21 != uVar20);
      }
      psVar19 = (short *)(*(int *)(psVar19 + 2) + (int)psVar19);
      iVar10 = local_50;
      if (local_4c <= psVar19) goto LAB_08a26748;
    }
    else {
      psVar19 = (short *)(*(int *)(psVar19 + 2) + (int)psVar19);
      if (local_4c <= psVar19) goto LAB_08a26748;
    }
    sVar2 = *psVar19;
  } while( true );
}

