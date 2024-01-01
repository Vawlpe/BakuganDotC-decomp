#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a0abb8(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint auStack_2b4 [3];
  undefined auStack_2a8 [232];
  undefined4 local_1c0 [40];
  undefined4 local_120 [40];
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  
  puVar10 = auStack_2b4 + 1;
  puVar19 = auStack_2b4 + 1;
  puVar20 = auStack_2b4 + 1;
  local_3c = (param_3 + -3) / 0x18;
  iVar9 = *(int *)(&DAT_08aa4dd0 + param_5 * 4);
  param_4 = param_4 + -1;
  local_54 = iVar9;
  local_74 = iVar9;
  local_50 = (uint)(param_4 < 0);
  local_64 = param_1;
  local_68 = param_2;
  local_70 = param_6;
  local_6c = param_5;
  if (local_3c < 0) {
    local_3c = 0;
  }
  local_5c = param_4;
  iVar16 = local_3c - param_4;
  local_4c = param_3 + local_3c * -0x18 + -0x18;
  iVar17 = 0;
  if (-1 < iVar9 + param_4) {
    puVar13 = (undefined4 *)(param_6 + iVar16 * 4);
    do {
      uVar22 = 0;
      if (-1 < iVar16) {
        uVar22 = FUN_08a0ed90(*puVar13);
      }
      *(undefined8 *)((int)puVar10 + 0x50) = uVar22;
      iVar17 = iVar17 + 1;
      puVar10 = (uint *)((int)puVar10 + 8);
      iVar16 = iVar16 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar17 <= iVar9 + param_4);
  }
  iVar9 = local_5c;
  iVar16 = 0;
  if (-1 < local_54) {
    do {
      uVar22 = 0;
      iVar17 = 0;
      uVar21 = 0;
      if (local_50 == 0) {
        puVar10 = auStack_2b4 + (iVar16 + iVar9) * 2 + 1;
        puVar13 = param_1;
        do {
          uVar21 = __muldf3(*puVar13,puVar13[1],puVar10[0x14],puVar10[0x15]);
          uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                            (int)((ulonglong)uVar21 >> 0x20));
          iVar17 = iVar17 + 1;
          puVar13 = puVar13 + 2;
          puVar10 = puVar10 + -2;
          uVar21 = uVar22;
        } while (iVar17 <= iVar9);
      }
      *(undefined8 *)((int)puVar19 + 400) = uVar21;
      iVar16 = iVar16 + 1;
      puVar19 = (uint *)((int)puVar19 + 8);
    } while (iVar16 <= local_54);
  }
  local_78 = 0x18 - local_4c;
  local_7c = 0x17 - local_4c;
  local_80 = local_54 + -1;
  uVar6 = local_120[local_54 * 2 + 1];
  uVar4 = local_120[local_54 * 2];
  iVar9 = local_54;
  while( true ) {
    uVar22 = CONCAT44(uVar6,uVar4);
    if (0 < iVar9) {
      puVar19 = auStack_2b4 + iVar9 * 2 + 1;
      puVar10 = auStack_2b4 + 1;
      iVar16 = iVar9;
      do {
        local_38 = uVar22;
        uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,0x3e700000);
        uVar4 = FUN_08a0ee6c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        uVar22 = FUN_08a0ed90(uVar4);
        uVar6 = (undefined4)((ulonglong)uVar22 >> 0x20);
        uVar21 = __muldf3((int)uVar22,uVar6,0,0x41700000);
        uVar21 = __subdf3((undefined4)local_38,local_38._4_4_,(int)uVar21,
                          (int)((ulonglong)uVar21 >> 0x20));
        uVar4 = FUN_08a0ee6c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        uVar7 = puVar19[99];
        uVar5 = puVar19[0x62];
        *puVar10 = uVar4;
        uVar22 = __adddf3(uVar5,uVar7,(int)uVar22,uVar6);
        puVar10 = puVar10 + 1;
        iVar16 = iVar16 + -1;
        puVar19 = puVar19 + -2;
      } while (0 < iVar16);
    }
    iVar16 = local_4c;
    uVar22 = scalbn((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),local_4c);
    uVar4 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar21 = __muldf3((int)uVar22,uVar4,0,0x3fc00000);
    uVar21 = floor((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar21 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0,0x40200000);
    uVar22 = __subdf3((int)uVar22,uVar4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar7 = FUN_08a0ee6c((int)uVar22,uVar4);
    uVar21 = FUN_08a0ed90(uVar7);
    uVar22 = __subdf3((int)uVar22,uVar4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
    uVar5 = local_7c;
    uVar4 = (undefined4)((ulonglong)uVar22 >> 0x20);
    iVar17 = 0;
    if (iVar16 < 1) {
      if (iVar16 == 0) {
        iVar17 = (int)auStack_2b4[iVar9] >> 0x17;
      }
      else {
        iVar16 = FUN_08a0ed34((int)uVar22,uVar4,0,0x3fe00000);
        if (-1 < iVar16) {
          iVar17 = 2;
        }
      }
    }
    else {
      iVar16 = (int)auStack_2b4[iVar9] >> (local_78 & 0x1f);
      uVar8 = auStack_2b4[iVar9] - (iVar16 << (local_78 & 0x1f));
      uVar7 = iVar16 + uVar7;
      auStack_2b4[iVar9] = uVar8;
      iVar17 = (int)uVar8 >> (uVar5 & 0x1f);
    }
    local_44 = iVar17;
    local_40 = uVar7;
    if (0 < iVar17) {
      iVar16 = 0;
      local_40 = uVar7 + 1;
      bVar1 = false;
      puVar10 = auStack_2b4 + 1;
      if (0 < iVar9) {
        do {
          iVar17 = *puVar10;
          if (bVar1) {
            *puVar10 = 0xffffff - iVar17;
          }
          else if (iVar17 != 0) {
            bVar1 = true;
            *puVar10 = 0x1000000 - iVar17;
          }
          iVar16 = iVar16 + 1;
          puVar10 = (uint *)((int *)puVar10 + 1);
        } while (iVar16 < iVar9);
      }
      iVar16 = local_4c;
      if (0 < local_4c) {
        if (local_4c < 2) {
          if (0 < local_4c) {
            auStack_2b4[iVar9] = auStack_2b4[iVar9] & 0x7fffff;
          }
        }
        else if (local_4c < 3) {
          auStack_2b4[iVar9] = auStack_2b4[iVar9] & 0x3fffff;
        }
      }
      if (local_44 == 2) {
        uVar22 = __subdf3(0,0x3ff00000,(int)uVar22,uVar4);
        if (bVar1) {
          uVar21 = scalbn(0,0x3ff00000,iVar16);
          uVar22 = __subdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                            (int)((ulonglong)uVar21 >> 0x20));
        }
      }
    }
    uVar6 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar4 = (undefined4)uVar22;
    iVar16 = FUN_08a0ed34(uVar4,uVar6,0,0);
    if (iVar16 != 0) break;
    iVar16 = iVar9 + -1;
    uVar5 = 0;
    if (local_54 <= iVar16) {
      puVar10 = auStack_2b4 + iVar9;
      do {
        iVar16 = iVar16 + -1;
        uVar5 = uVar5 | *puVar10;
        puVar10 = puVar10 + -1;
      } while (local_54 <= iVar16);
    }
    if (uVar5 != 0) break;
    puVar10 = auStack_2b4 + local_80 + 1;
    iVar16 = 1;
    uVar5 = *puVar10;
    while (uVar5 == 0) {
      puVar10 = puVar10 + -1;
      iVar16 = iVar16 + 1;
      uVar5 = *puVar10;
    }
    local_60 = iVar9 + 1;
    local_58 = iVar9 + iVar16;
    if (local_60 <= iVar9 + iVar16) {
      iVar9 = local_60 + local_5c;
      puVar19 = auStack_2b4 + local_60 * 2 + 1;
      puVar13 = (undefined4 *)(local_70 + (local_60 + local_3c) * 4);
      puVar10 = auStack_2b4 + iVar9 * 2 + 1;
      do {
        uVar21 = FUN_08a0ed90(*puVar13);
        uVar22 = 0;
        *(undefined8 *)(puVar10 + 0x14) = uVar21;
        iVar16 = 0;
        uVar21 = 0;
        if (local_50 == 0) {
          puVar11 = auStack_2b4 + iVar9 * 2 + 1;
          puVar14 = local_64;
          do {
            uVar21 = __muldf3(*puVar14,puVar14[1],puVar11[0x14],puVar11[0x15]);
            uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                              (int)((ulonglong)uVar21 >> 0x20));
            iVar16 = iVar16 + 1;
            puVar14 = puVar14 + 2;
            puVar11 = puVar11 + -2;
            uVar21 = uVar22;
          } while (iVar16 <= local_5c);
        }
        *(undefined8 *)(puVar19 + 100) = uVar21;
        local_60 = local_60 + 1;
        puVar19 = puVar19 + 2;
        iVar9 = iVar9 + 1;
        puVar13 = puVar13 + 1;
        puVar10 = puVar10 + 2;
      } while (local_60 <= local_58);
    }
    uVar6 = local_120[local_58 * 2 + 1];
    uVar4 = local_120[local_58 * 2];
    iVar9 = local_58;
  }
  iVar16 = FUN_08a0ed34(uVar4,uVar6,0,0);
  if (iVar16 == 0) {
    puVar10 = auStack_2b4 + iVar9;
    local_4c = local_4c + -0x18;
    uVar5 = *puVar10;
    while (iVar9 = iVar9 + -1, uVar5 == 0) {
      puVar10 = puVar10 + -1;
      local_4c = local_4c + -0x18;
      uVar5 = *puVar10;
    }
  }
  else {
    uVar22 = scalbn(uVar4,uVar6,-local_4c);
    uVar6 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar4 = (undefined4)uVar22;
    iVar16 = FUN_08a0ed34(uVar4,uVar6,0,0x41700000);
    if (iVar16 < 0) {
      uVar5 = FUN_08a0ee6c(uVar4,uVar6);
      auStack_2b4[iVar9 + 1] = uVar5;
    }
    else {
      uVar22 = __muldf3(uVar4,uVar6,0,0x3e700000);
      uVar3 = FUN_08a0ee6c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
      uVar22 = FUN_08a0ed90(uVar3);
      uVar3 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar21 = __muldf3((int)uVar22,uVar3,0,0x41700000);
      uVar21 = __subdf3(uVar4,uVar6,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      uVar5 = FUN_08a0ee6c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      auStack_2b4[iVar9 + 1] = uVar5;
      local_4c = local_4c + 0x18;
      uVar5 = FUN_08a0ee6c((int)uVar22,uVar3);
      auStack_2b4[iVar9 + 2] = uVar5;
      iVar9 = iVar9 + 1;
    }
  }
  uVar22 = scalbn(0,0x3ff00000,local_4c);
  if (-1 < iVar9) {
    puVar19 = auStack_2b4 + iVar9 * 2 + 1;
    puVar10 = auStack_2b4 + iVar9 + 1;
    iVar16 = iVar9;
    do {
      uVar4 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar21 = FUN_08a0ed90(*puVar10);
      uVar21 = __muldf3((int)uVar22,uVar4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      *(undefined8 *)(puVar19 + 100) = uVar21;
      uVar22 = __muldf3((int)uVar22,uVar4,0,0x3e700000);
      iVar16 = iVar16 + -1;
      puVar19 = puVar19 + -2;
      puVar10 = puVar10 + -1;
    } while (-1 < iVar16);
  }
  iVar16 = 0;
  if (-1 < iVar9) {
    local_48 = &DAT_08aa4de0;
    iVar17 = iVar9;
    do {
      uVar22 = 0;
      iVar12 = 0;
      bVar1 = local_74 < 0;
      puVar10 = auStack_2b4 + iVar17 * 2 + 1;
      puVar13 = local_48;
      while( true ) {
        uVar4 = (undefined4)((ulonglong)uVar22 >> 0x20);
        if (bVar1) break;
        if (iVar16 < iVar12) {
          *(undefined4 *)((int)puVar20 + 0xf4) = uVar4;
          goto LAB_08a0b4c4;
        }
        uVar21 = __muldf3(*puVar13,puVar13[1],puVar10[100],puVar10[0x65]);
        uVar22 = __adddf3((int)uVar22,uVar4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        iVar12 = iVar12 + 1;
        puVar13 = puVar13 + 2;
        puVar10 = puVar10 + 2;
        bVar1 = local_74 < iVar12;
      }
      *(undefined4 *)((int)puVar20 + 0xf4) = uVar4;
LAB_08a0b4c4:
      *(int *)((int)puVar20 + 0xf0) = (int)uVar22;
      iVar17 = iVar17 + -1;
      iVar16 = iVar16 + 1;
      puVar20 = (uint *)((int)puVar20 + 8);
    } while (-1 < iVar17);
  }
  if (local_6c < 1) {
    if (-1 < local_6c) {
      uVar22 = 0;
      uVar21 = 0;
      if (-1 < iVar9) {
        puVar10 = auStack_2b4 + iVar9 * 2 + 1;
        do {
          uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),puVar10[0x3c],puVar10[0x3d]
                           );
          iVar9 = iVar9 + -1;
          puVar10 = puVar10 + -2;
          uVar21 = uVar22;
        } while (-1 < iVar9);
      }
      if (local_44 != 0) {
        uVar21 = __negdf2();
      }
      *local_68 = uVar21;
    }
  }
  else if (local_6c < 3) {
    uVar22 = 0;
    uVar21 = 0;
    if (-1 < iVar9) {
      puVar10 = auStack_2b4 + iVar9 * 2 + 1;
      iVar16 = iVar9;
      do {
        uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),puVar10[0x3c],puVar10[0x3d]);
        iVar16 = iVar16 + -1;
        puVar10 = puVar10 + -2;
        uVar21 = uVar22;
      } while (-1 < iVar16);
    }
    iVar16 = local_44;
    uVar6 = (undefined4)((ulonglong)uVar21 >> 0x20);
    uVar4 = (undefined4)uVar21;
    if (local_44 != 0) {
      uVar21 = __negdf2(uVar4,uVar6);
    }
    puVar2 = local_68;
    *local_68 = uVar21;
    uVar22 = __subdf3(local_1c0[0],local_1c0[1],uVar4,uVar6);
    iVar17 = 1;
    if (0 < iVar9) {
      puVar15 = auStack_2a8;
      do {
        uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),
                          *(undefined4 *)(puVar15 + 0xf0),*(undefined4 *)(puVar15 + 0xf4));
        iVar17 = iVar17 + 1;
        puVar15 = puVar15 + 8;
      } while (iVar17 <= iVar9);
    }
    if (iVar16 != 0) {
      uVar22 = __negdf2((int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    }
    puVar2[1] = uVar22;
  }
  else if (local_6c < 4) {
    if (0 < iVar9) {
      puVar10 = auStack_2b4 + iVar9 * 2 + 1;
      iVar16 = iVar9;
      do {
        uVar7 = puVar10[0x3b];
        uVar5 = puVar10[0x3a];
        uVar18 = puVar10[0x3d];
        uVar8 = puVar10[0x3c];
        uVar22 = __adddf3(uVar5,uVar7,uVar8,uVar18);
        uVar21 = __subdf3(uVar5,uVar7,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        uVar21 = __adddf3(uVar8,uVar18,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        *(undefined8 *)(puVar10 + 0x3c) = uVar21;
        *(undefined8 *)(puVar10 + 0x3a) = uVar22;
        iVar16 = iVar16 + -1;
        puVar10 = puVar10 + -2;
      } while (0 < iVar16);
    }
    if (1 < iVar9) {
      puVar10 = auStack_2b4 + iVar9 * 2 + 1;
      iVar16 = iVar9;
      do {
        uVar7 = puVar10[0x3b];
        uVar5 = puVar10[0x3a];
        uVar18 = puVar10[0x3d];
        uVar8 = puVar10[0x3c];
        uVar22 = __adddf3(uVar5,uVar7,uVar8,uVar18);
        uVar21 = __subdf3(uVar5,uVar7,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        uVar21 = __adddf3(uVar8,uVar18,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        *(undefined8 *)(puVar10 + 0x3c) = uVar21;
        *(undefined8 *)(puVar10 + 0x3a) = uVar22;
        iVar16 = iVar16 + -1;
        puVar10 = puVar10 + -2;
      } while (1 < iVar16);
    }
    uVar22 = 0;
    uVar21 = 0;
    if (1 < iVar9) {
      puVar10 = auStack_2b4 + iVar9 * 2 + 1;
      do {
        uVar22 = __adddf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),puVar10[0x3c],puVar10[0x3d]);
        iVar9 = iVar9 + -1;
        puVar10 = puVar10 + -2;
        uVar21 = uVar22;
      } while (1 < iVar9);
    }
    if (local_44 == 0) {
      *(undefined4 *)((int)local_68 + 4) = local_1c0[1];
      *(undefined4 *)local_68 = local_1c0[0];
      *(undefined4 *)((int)local_68 + 0xc) = local_1c0[3];
      *(undefined4 *)(local_68 + 1) = local_1c0[2];
      local_68[2] = uVar21;
    }
    else {
      uVar22 = __negdf2(local_1c0[0],local_1c0[1]);
      puVar2 = local_68;
      *local_68 = uVar22;
      uVar22 = __negdf2(local_1c0[2],local_1c0[3]);
      puVar2[1] = uVar22;
      uVar22 = __negdf2((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      puVar2[2] = uVar22;
    }
  }
  return local_40 & 7;
}

