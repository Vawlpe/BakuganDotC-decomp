#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d1954(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined *puVar15;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined local_98 [25];
  undefined auStack_7f [6];
  undefined local_79 [25];
  undefined auStack_60 [6];
  undefined local_5a [25];
  undefined auStack_41 [6];
  undefined local_3b [25];
  undefined auStack_22 [6];
  
  puVar13 = &local_b0;
  puVar9 = &local_b0;
  puVar10 = &local_b0;
  puVar11 = &local_b0;
  uVar2 = *(undefined *)(param_1 + 0x10);
  bVar16 = *(byte *)(param_1 + 0x11);
  uVar17 = (uint)bVar16;
  local_b0 = 0xffffffff;
  local_ac = -1;
  uVar18 = *(undefined4 *)(param_1 + 0xc);
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_a0 = 0xffffffff;
  local_9c = 0;
  bVar3 = false;
  FUN_089d10e4(param_1,&local_b0,&local_ac,&local_a8,&local_a4,&local_a0,&local_9c);
  *(char *)(param_1 + 0x44) = (char)local_b0;
  *(char *)(param_1 + 0x45) = (char)local_ac;
  *(char *)(param_1 + 0x46) = (char)local_a8;
  *(char *)(param_1 + 0x47) = (char)local_a4;
  *(undefined4 *)(param_1 + 0x68) = local_9c;
  iVar5 = FUN_089d3ab4();
  if (iVar5 != 0) {
    uVar6 = FUN_089d3adc();
    iVar5 = FUN_089d41cc(uVar6);
    if (iVar5 != 0) {
      bVar3 = true;
    }
  }
  if (!bVar3) {
    if (7 < uVar17) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    bVar16 = (byte)((int)(uVar17 * 4) >> 2);
    bVar4 = bVar16;
    switch(uVar17) {
    case 0:
      iVar5 = FUN_0881b22c();
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar5 = FUN_0881b35c(uVar6);
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      iVar5 = FUN_089cf9a4(iVar5 + 0x19);
      if (iVar5 != param_1) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      bVar4 = 1;
      break;
    case 1:
      if (local_ac < 3) {
        if (local_ac < 2) {
          *(undefined *)(param_1 + 0x10) = uVar2;
          goto LAB_089d1f6c;
        }
        bVar16 = 5;
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar5 = FUN_0881b35c(uVar6);
        iVar14 = FUN_089cf8ec(0);
        bVar4 = 5;
        if (iVar5 != 0) {
          if (iVar14 == 0) {
            *(undefined *)(param_1 + 0x10) = uVar2;
            goto LAB_089d1f6c;
          }
          bVar16 = 4;
          memcpy_jak(iVar14 + 0x2d,iVar5 + 0x19,6);
          uVar6 = DONE_GetPtr_DAT_08AB0300();
          FUN_0881b26c(uVar6,5);
          goto switchD_089d1d7c_caseD_2;
        }
      }
      else {
        if (3 < local_ac) {
          *(undefined *)(param_1 + 0x10) = uVar2;
          goto LAB_089d1f6c;
        }
        bVar4 = 5;
      }
      break;
    default:
switchD_089d1d7c_caseD_2:
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    case 4:
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar5 = FUN_0881b35c(uVar6);
      if (iVar5 == 0) {
        iVar5 = FUN_089cf8ec(0);
        if (iVar5 != 0) {
          memset_jak((undefined *)(iVar5 + 0x2d),0,6);
          bVar4 = 5;
        }
      }
      else {
        iVar5 = FUN_089cf9a4(iVar5 + 0x19);
        if (iVar5 != 0) {
          iVar5 = FUN_0881b22c();
          if (iVar5 != 0) {
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            iVar5 = FUN_0881b264(uVar6);
            if (iVar5 == 5) {
              uVar6 = DONE_GetPtr_DAT_08AB0300();
              FUN_0881b4f0(uVar6,param_1 + 0x74,*(undefined *)(param_1 + 0x61));
            }
          }
          if (local_ac == 6) {
            bVar16 = 6;
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881b26c(uVar6,6);
            *(undefined *)(param_1 + 0x10) = uVar2;
          }
          else {
            *(undefined *)(param_1 + 0x10) = uVar2;
          }
          goto LAB_089d1f6c;
        }
        iVar5 = FUN_089cf8ec(0);
        if (iVar5 != 0) {
          memset_jak((undefined *)(iVar5 + 0x2d),0,6);
          uVar6 = DONE_GetPtr_DAT_08AB0300();
          FUN_0881b26c(uVar6,4);
          bVar4 = 0;
        }
      }
      break;
    case 5:
      if (local_ac != 0) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      bVar4 = 0;
      break;
    case 6:
    case 7:
      break;
    }
    goto switchD_089d1d7c_caseD_6;
  }
  if (7 < uVar17) {
    *(undefined *)(param_1 + 0x10) = uVar2;
    goto LAB_089d1f6c;
  }
  bVar16 = (byte)((int)(uVar17 * 4) >> 2);
  switch(uVar17) {
  case 0:
    if (local_ac != 1) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    bVar16 = 3;
    iVar5 = FUN_0881b22c();
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    uVar6 = DONE_GetPtr_DAT_08AB0300();
    iVar5 = FUN_0881b278(uVar6);
    bVar4 = 3;
    if (1 < iVar5) break;
    memset_jak(local_98,0,0x1f);
    puVar12 = (undefined *)(param_1 + 0x48);
    iVar14 = 0xc;
    uVar7 = *puVar12;
    iVar5 = 0;
    puVar15 = puVar12;
    do {
      iVar8 = iVar5;
      uVar1 = puVar15[1];
      *(undefined *)((int)puVar13 + 0x18) = uVar7;
      *(undefined *)((int)puVar13 + 0x19) = uVar1;
      puVar15 = puVar12 + iVar8 + 2;
      iVar14 = iVar14 + -1;
      uVar7 = *puVar15;
      puVar13 = (undefined4 *)((int)&local_b0 + iVar8 + 2);
      iVar5 = iVar8 + 2;
    } while (iVar14 != 0);
    local_98[iVar8 + 2] = uVar7;
    memcpy_jak(auStack_7f,param_1 + 0x6c,6);
    uVar6 = DONE_GetPtr_DAT_08AB0300();
    iVar5 = FUN_0881b37c(uVar6,local_98);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    bVar16 = 2;
  case 1:
    *(undefined *)(param_1 + 0x10) = uVar2;
    goto LAB_089d1f6c;
  case 2:
    if (local_ac < 5) {
      if (local_ac < 4) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      bVar4 = 4;
    }
    else {
      if (5 < local_ac) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      memset_jak(local_79,0,0x1f);
      puVar12 = (undefined *)(param_1 + 0x48);
      iVar14 = 0xc;
      uVar7 = *puVar12;
      iVar5 = 0;
      puVar15 = puVar12;
      do {
        iVar8 = iVar5;
        uVar1 = puVar15[1];
        *(undefined *)((int)puVar9 + 0x37) = uVar7;
        *(undefined *)((int)puVar9 + 0x38) = uVar1;
        puVar15 = puVar12 + iVar8 + 2;
        iVar14 = iVar14 + -1;
        uVar7 = *puVar15;
        puVar9 = (undefined4 *)((int)&local_b0 + iVar8 + 2);
        iVar5 = iVar8 + 2;
      } while (iVar14 != 0);
      local_79[iVar8 + 2] = uVar7;
      memcpy_jak(auStack_60,param_1 + 0x6c,6);
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      FUN_0881b3fc(uVar6,local_79);
      bVar4 = 0;
    }
    break;
  case 3:
    if (local_ac != 5) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    bVar4 = 0;
    break;
  case 4:
    if (local_ac == 5) {
      memset_jak(local_5a,0,0x1f);
      puVar12 = (undefined *)(param_1 + 0x48);
      iVar14 = 0xc;
      uVar7 = *puVar12;
      iVar5 = 0;
      puVar15 = puVar12;
      do {
        iVar8 = iVar5;
        uVar1 = puVar15[1];
        *(undefined *)((int)puVar10 + 0x56) = uVar7;
        *(undefined *)((int)puVar10 + 0x57) = uVar1;
        puVar15 = puVar12 + iVar8 + 2;
        iVar14 = iVar14 + -1;
        uVar7 = *puVar15;
        puVar10 = (undefined4 *)((int)&local_b0 + iVar8 + 2);
        iVar5 = iVar8 + 2;
      } while (iVar14 != 0);
      local_5a[iVar8 + 2] = uVar7;
      memcpy_jak(auStack_41,param_1 + 0x6c,6);
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      FUN_0881b3fc(uVar6,local_5a);
      bVar4 = 0;
    }
    else {
      iVar5 = FUN_0881b22c();
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar5 = FUN_0881b264(uVar6);
      if (iVar5 < 4) {
        if (iVar5 < 3) {
          *(undefined *)(param_1 + 0x10) = uVar2;
          goto LAB_089d1f6c;
        }
      }
      else if (iVar5 != 6) {
        *(undefined *)(param_1 + 0x10) = uVar2;
        goto LAB_089d1f6c;
      }
      bVar4 = 6;
    }
    break;
  case 5:
    if (local_ac != 0) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    bVar4 = 0;
    break;
  case 6:
    if (local_ac != 5) {
      *(undefined *)(param_1 + 0x10) = uVar2;
      goto LAB_089d1f6c;
    }
    memset_jak(local_3b,0,0x1f);
    puVar12 = (undefined *)(param_1 + 0x48);
    iVar14 = 0xc;
    uVar7 = *puVar12;
    iVar5 = 0;
    puVar15 = puVar12;
    do {
      iVar8 = iVar5;
      uVar1 = puVar15[1];
      *(undefined *)((int)puVar11 + 0x75) = uVar7;
      *(undefined *)((int)puVar11 + 0x76) = uVar1;
      puVar15 = puVar12 + iVar8 + 2;
      iVar14 = iVar14 + -1;
      uVar7 = *puVar15;
      puVar11 = (undefined4 *)((int)&local_b0 + iVar8 + 2);
      iVar5 = iVar8 + 2;
    } while (iVar14 != 0);
    local_3b[iVar8 + 2] = uVar7;
    memcpy_jak(auStack_22,param_1 + 0x6c,6);
    uVar6 = DONE_GetPtr_DAT_08AB0300();
    FUN_0881b3fc(uVar6,local_3b);
    bVar16 = 0;
  case 7:
    *(undefined *)(param_1 + 0x10) = uVar2;
    goto LAB_089d1f6c;
  }
switchD_089d1d7c_caseD_6:
  bVar16 = bVar4;
  *(undefined *)(param_1 + 0x10) = uVar2;
LAB_089d1f6c:
  *(byte *)(param_1 + 0x11) = bVar16;
  *(undefined4 *)(param_1 + 0xc) = uVar18;
  return;
}

