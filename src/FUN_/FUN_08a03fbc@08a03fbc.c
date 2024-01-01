#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a03fbc(void)

{
  undefined uVar1;
  char cVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int **ppiVar12;
  int **ppiVar13;
  int **local_40;
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  int local_34;
  int **local_30;
  uint local_2c;
  
  if (*(char *)(DAT_08af11d8 + 0xc) == '\0') {
    FUN_08a03bc4();
  }
  piVar3 = DAT_08af11d8;
  *(undefined *)((int)DAT_08af11d8 + 0x31) = 1;
  iVar11 = piVar3[1];
  uVar8 = (uint)*(byte *)(piVar3 + 3);
  iVar10 = piVar3[4];
  iVar9 = piVar3[5];
  uVar1 = *(undefined *)((int)piVar3 + 0x32);
  local_40 = (int **)piVar3[6];
  local_2c = uVar8 & 1;
  local_30 = local_40;
  if ((*(byte *)(piVar3 + 3) & 1) != 0) {
    local_40 = (int **)*local_40;
    local_30 = (int **)(piVar3 + 7);
  }
  ppiVar7 = (int **)*DAT_08af120c;
  ppiVar13 = (int **)0x0;
joined_r0x08a0405c:
  if (ppiVar7 == (int **)0x0) {
LAB_08a041b8:
    for (ppiVar7 = (int **)*DAT_08af120c; ppiVar7 != ppiVar13; ppiVar7 = (int **)*ppiVar7) {
      cVar2 = *(char *)(ppiVar7 + 1);
      if (cVar2 == '\x01') {
        FUN_08a0378c(ppiVar7,DAT_08af1208,0xffff);
        DAT_08af1208 = *(short *)(ppiVar7 + 5);
      }
      else if (cVar2 == '\x04') {
        FUN_08a02d40(ppiVar7);
      }
      else if ((cVar2 == '\0') && (ppiVar7[0x1a] != (int *)0x0)) {
        FUN_08a03b24();
      }
    }
    if (ppiVar13 == (int **)0x0) {
      *(undefined *)((int)DAT_08af11d8 + 0x2f) = 1;
      FUN_08a03bec();
      FUN_08a04520();
    }
    if ((*(char *)(ppiVar13 + 1) == '\0') && (*(short *)(ppiVar13 + 0x1b) != DAT_08af1208)) {
      ppiVar7 = (int **)*ppiVar13;
      cVar2 = *(char *)((int *)ppiVar7 + 1);
      while (cVar2 != '\x01') {
        ppiVar7 = (int **)*ppiVar7;
        cVar2 = *(char *)((int *)ppiVar7 + 1);
      }
      FUN_08a0378c(ppiVar7);
      DAT_08af1208 = *(short *)(ppiVar13 + 0x1b);
    }
    *DAT_08af120c = (int *)ppiVar13;
    piVar3 = DAT_08af11d8;
    *(undefined *)((int)DAT_08af11d8 + 0x2f) = 1;
    if (*(char *)(ppiVar13 + 1) == '\0') {
      DAT_08b03aa0 = local_34;
      if (local_2c == 0) {
        DAT_08b03aa8 = local_40;
      }
      else {
        *local_30 = (int *)local_40;
        DAT_08b03aa8 = local_30;
      }
      ppiVar13[0x1a] = piVar3;
      FUN_08a0f820(ppiVar13 + 2,1);
    }
    else if (*(char *)(ppiVar13 + 1) == '\x02') {
      DAT_08af120c = (int **)*DAT_08af120c;
      FUN_08a043d0();
    }
    return 0;
  }
  cVar2 = *(char *)(ppiVar7 + 1);
  ppiVar12 = ppiVar13;
  if ((cVar2 != '\x01') && (cVar2 != '\x04')) {
    ppiVar4 = ppiVar7;
    if (cVar2 != '\0') {
      if (ppiVar13 == (int **)0x0) {
        if (cVar2 == '\x02') {
          iVar6 = 0;
          if (ppiVar7[2] != (int *)0x0) {
            iVar6 = FUN_08a03920(ppiVar7[2],iVar11,uVar8,iVar10,iVar9,uVar1,0,auStack_38);
          }
          goto joined_r0x08a04154;
        }
        if (cVar2 == '\x03') {
          DAT_08af120c = ppiVar7;
          *(undefined *)((int)DAT_08af11d8 + 0x2f) = 1;
          FUN_08a03bec();
          FUN_08a04520();
        }
        goto LAB_08a041a0;
      }
      ppiVar7 = (int **)*ppiVar7;
      goto joined_r0x08a0405c;
    }
    if (ppiVar7[0x1a] == (int *)0x0) {
      iVar5 = 1;
      if (ppiVar7[0x19] != (int *)0x0) {
        iVar5 = FUN_08a03920(ppiVar7[0x19],iVar11,uVar8,iVar10,iVar9,uVar1,&local_40,auStack_3c);
      }
      if (iVar5 == 0) goto LAB_08a041a0;
      iVar6 = (int)ppiVar7[0x19];
      ppiVar4 = ppiVar13;
      if (ppiVar13 == (int **)0x0) {
        local_34 = iVar5;
        ppiVar12 = ppiVar7;
        ppiVar4 = ppiVar7;
      }
joined_r0x08a04154:
      ppiVar13 = ppiVar4;
      if (iVar6 == 0) goto LAB_08a041b8;
    }
  }
LAB_08a041a0:
  ppiVar7 = (int **)*ppiVar7;
  ppiVar13 = ppiVar12;
  goto joined_r0x08a0405c;
}

