#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c3bb0(int *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  
  bVar2 = true;
  bVar4 = false;
  bVar3 = false;
  FUN_089bb728(param_1[1]);
  iVar13 = *param_1;
  FUN_089bb790(param_1[1]);
  FUN_089bb728(param_1[1]);
  if (*(char *)(param_1 + 0x31) == '\0') goto LAB_089c3d28;
  bVar2 = false;
  if (*(char *)((int)param_1 + 0xc5) == '\0') {
    if (*(char *)((int)param_1 + 0xc6) != '\0') {
      if (*(char *)(param_1 + 7) == '\0') {
        *(undefined *)((int)param_1 + 0xc5) = 1;
        bVar3 = true;
      }
      else {
        if (*(char *)((int)param_1 + 0x1d) != '\0') {
          cVar8 = *(char *)((int)param_1 + 199);
          goto LAB_089c3c78;
        }
        uVar6 = DONE_GetPtr_DAT_08AC51F8();
        FUN_089bcc3c(uVar6,param_1[3]);
        *(undefined *)((int)param_1 + 0x1d) = 1;
        *(undefined *)((int)param_1 + 0xc5) = 1;
        bVar3 = true;
      }
      goto LAB_089c3c74;
    }
    cVar8 = *(char *)((int)param_1 + 199);
  }
  else {
LAB_089c3c74:
    cVar8 = *(char *)((int)param_1 + 199);
  }
LAB_089c3c78:
  if (cVar8 != '\0') {
    *(undefined *)(param_1 + 0x31) = 0;
    *(undefined *)((int)param_1 + 199) = 0;
    if (param_1[9] == 0) {
      if (param_1[8] == 2) {
        param_1[9] = 1;
        param_1[10] = 0;
      }
    }
    else {
      param_1[9] = 1;
      param_1[10] = 0;
    }
    bVar4 = true;
    if (param_1[2] != 0) {
      iVar5 = FUN_089fbbe0();
      if (iVar5 == 0) {
        FUN_089fbac8(param_1[2],0x80000000);
        bVar4 = true;
      }
      else {
        bVar4 = true;
        if (*(char *)(param_1 + 7) != '\0') {
          iVar9 = param_1[3];
          iVar5 = FUN_089fbcb8(param_1[2]);
          bVar4 = true;
          if (iVar9 != iVar5) {
            iVar5 = param_1[3];
            uVar6 = FUN_089fbcb8(param_1[2]);
            memcpy_jak(iVar5,uVar6,param_1[4]);
            bVar4 = true;
          }
        }
      }
    }
  }
LAB_089c3d28:
  iVar5 = param_1[9];
  if (((bVar2) && (*(char *)(param_1 + 7) != '\0')) && (*(char *)((int)param_1 + 0x1d) != '\0')) {
    bVar2 = false;
  }
  FUN_089bb790(param_1[1]);
  if (bVar2) {
    iVar9 = iVar5 * 8;
    iVar10 = (int)param_1 + (int)*(short *)(iVar9 + 0x8ac560c);
    pcVar12 = *(code **)(iVar9 + 0x8ac5610);
    if (*(short *)(iVar9 + 0x8ac560e) != 0) {
      psVar11 = (short *)(*(int *)(pcVar12 + iVar10) + *(short *)(iVar9 + 0x8ac560e) * 8);
      iVar10 = iVar10 + *psVar11;
      pcVar12 = *(code **)(psVar11 + 2);
    }
    (*pcVar12)(iVar10);
  }
  if (bVar3) {
    FUN_089bbef8();
  }
  else {
    FUN_089bb728(param_1[1]);
    cVar8 = *(char *)(param_1 + 0x32);
    cVar1 = *(char *)(param_1 + 0x31);
    iVar9 = param_1[0x33];
    *(undefined *)(param_1 + 0x32) = 0;
    iVar10 = param_1[0x34];
    FUN_089bb790(param_1[1]);
    if (cVar1 == '\0') {
      if ((bVar4) && (iVar7 = FUN_089c4814(iVar13), iVar7 != 0)) {
        uVar6 = FUN_089c487c(iVar13);
        FUN_089c4b94(uVar6);
      }
      if (((cVar8 != '\0') && (iVar5 != 1)) && (iVar5 = FUN_089c4814(iVar13), iVar5 != 0)) {
        uVar6 = FUN_089c487c(iVar13);
        FUN_089c4d24(uVar6,iVar9,iVar10);
      }
    }
  }
  zz_sceDisplayWaitVblankStartCB();
  iVar5 = iVar13 + 6;
  do {
    iVar9 = DONE_Get_DAT_08AC5874();
    if (*(char *)(iVar9 + 0x8be4) == '\0') {
      return 1;
    }
    bVar2 = true;
    zz_sceDisplayWaitVblankStartCB();
    if (iVar13 == 0) {
      iVar10 = 10;
      iVar9 = 1;
      do {
        iVar7 = FUN_089bbe6c(iVar10);
        if (iVar7 != 0) {
          bVar2 = false;
          iVar9 = FUN_089bbfdc(iVar10);
          if (iVar9 != 0) {
            FUN_089bbf78(iVar10);
          }
          break;
        }
        iVar14 = iVar9 + 6;
        iVar10 = FUN_089bbe6c(iVar14);
        iVar7 = iVar9 + -1;
        if (iVar10 != 0) {
          bVar2 = false;
          iVar9 = FUN_089bbfdc(iVar14);
          if (iVar9 != 0) {
            FUN_089bbf78(iVar14);
          }
          break;
        }
        iVar10 = iVar9 + 8;
        iVar9 = iVar7;
      } while (0 < iVar7);
    }
    if (bVar2) {
      iVar9 = FUN_089bbe6c(iVar5);
      if (iVar9 == 0) {
        FUN_089bbd80(iVar13 + 9);
      }
      else {
        iVar9 = FUN_089bbfdc(iVar5);
        if (iVar9 != 0) {
          FUN_089bbf78(iVar5);
        }
      }
    }
  } while( true );
}

