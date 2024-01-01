#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883a8e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  iVar5 = 0;
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = FUN_0882c220(4), iVar1 == 0)) {
    return -1;
  }
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    iVar4 = _DONE_NotZero_DAT_08AAC9E0();
    iVar1 = 0;
    if (iVar4 == 0) goto LAB_0883ac1c;
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar5 = FUN_0880e034(uVar2,0xffffffff);
  }
  else {
    cVar6 = '\0';
    bVar7 = 0;
    uVar10 = 0;
    do {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      iVar1 = FUN_0880d0ac(uVar2,uVar10 + 3);
      if (0 < iVar1) {
        bVar7 = bVar7 + 1;
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 4);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar1 = FUN_0880d0ac(uVar2,7);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        iVar1 = FUN_0880d354();
        if (iVar1 == 0) {
          iVar1 = FUN_0884b248();
          if (iVar1 != 0) {
            iVar1 = _DONE_NotZero_DAT_08AAC9E0();
            bVar9 = 0;
            if ((iVar1 != 0) && (bVar7 != 0)) {
              do {
                uVar2 = FUN_0884b268();
                iVar1 = FUN_0884e0f8(uVar2,bVar9);
                if (iVar1 == 1) {
                  uVar2 = _DONE_Get_DAT_08AAC9E0();
                  iVar5 = FUN_0880e034(uVar2,bVar9);
                  cVar6 = cVar6 + '\x01';
                }
                bVar9 = bVar9 + 1;
              } while (bVar9 < bVar7);
            }
          }
        }
        else {
          iVar1 = _DONE_NotZero_DAT_08AAC9E0();
          if (iVar1 != 0) {
            uVar2 = _DONE_Get_DAT_08AAC9E0();
            iVar5 = FUN_0880e034(uVar2,0xffffffff);
            cVar6 = '\x01';
          }
        }
      }
    }
    else if (iVar1 < 3) {
      iVar1 = FUN_0880d354();
      if (iVar1 == 0) {
        iVar1 = FUN_0884b248();
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar1 = 0;
          do {
            uVar2 = _DONE_Get_DAT_08AAC9E0();
            iVar8 = FUN_0880d0ac(uVar2,iVar1 + 3);
            if (0 < iVar8) {
              iVar4 = iVar4 + 1;
            }
            iVar1 = iVar1 + 1;
            iVar8 = 0;
          } while (iVar1 < 4);
          iVar1 = 0;
          do {
            uVar2 = FUN_0884b268();
            iVar3 = FUN_0884d134(uVar2,iVar8);
            if (iVar3 == 0) {
              iVar1 = iVar1 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
          if (iVar4 != iVar1) {
            iVar1 = _DONE_NotZero_DAT_08AAC9E0();
            bVar9 = 0;
            if ((iVar1 != 0) && (bVar7 != 0)) {
              do {
                uVar2 = FUN_0884b268();
                iVar1 = FUN_0884d134(uVar2,bVar9);
                if (iVar1 == 0) {
                  uVar2 = _DONE_Get_DAT_08AAC9E0();
                  iVar5 = FUN_0880e034(uVar2,bVar9);
                  cVar6 = cVar6 + '\x01';
                }
                bVar9 = bVar9 + 1;
              } while (bVar9 < bVar7);
            }
          }
        }
      }
      else {
        iVar1 = _DONE_NotZero_DAT_08AAC9E0();
        if (iVar1 != 0) {
          uVar2 = _DONE_Get_DAT_08AAC9E0();
          iVar5 = FUN_0880e034(uVar2,0xffffffff);
          cVar6 = '\x01';
        }
      }
    }
    if (cVar6 != '\x01') {
      return -1;
    }
  }
  iVar1 = iVar5 * 2;
LAB_0883ac1c:
  do {
    uVar11 = vrndi_s();
    uVar10 = FUN_089be994();
    iVar8 = iVar5 + iVar1 + 0x2a3f + (((uVar11 >> 0x10) * 0xffff >> 0x10) + (uVar10 & 0xffff)) % 3;
    iVar4 = FUN_0883a8ac(param_1,iVar8);
  } while (iVar4 != 0);
  return iVar8;
}

