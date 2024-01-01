#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fb298(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20;
  
  if (DAT_08ac61ad != '\0') {
    FUN_089fb194(param_1,0);
    DAT_08ac61ad = '\0';
  }
  FUN_089bb728(*(undefined4 *)(DAT_08ac61a8 + 0x20));
  if (DAT_08ac61ac == '\0') {
    if (*(char *)(DAT_08ac61a8 + 4) != '\0') {
      memset_jak((undefined *)(DAT_08ac61a8 + 8),0,0x14);
      *(undefined *)(DAT_08ac61a8 + 4) = 0;
    }
  }
  else if (*(char *)(DAT_08ac61a8 + 4) == '\0') {
    iVar2 = zz_sceIoDevctl(&DAT_08aa3d7c,0x2425818,DAT_08ac61a8 + 0x1c,4,0,0);
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x108);
      goto LAB_089fb35c;
    }
    *(undefined *)(DAT_08ac61a8 + 4) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  }
  cVar1 = *(char *)(param_1 + 0x108);
LAB_089fb35c:
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 4) == '\0') {
      if (*(char *)(param_1 + 0x106) != '\0') {
        iVar2 = zz_sceIoMkdir(param_1 + 6,0);
        if (iVar2 == 0) {
          *(undefined *)(param_1 + 0x107) = 1;
          *(undefined *)(param_1 + 0x106) = 0;
        }
        else {
          *(undefined *)(param_1 + 0x106) = 0;
        }
      }
    }
    else {
      iVar2 = zz_sceIoGetstat(param_1 + 6,DAT_08ac61a8 + 0x28);
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 5) = 1;
        *(undefined *)(param_1 + 4) = 0;
      }
      else {
        *(undefined *)(param_1 + 4) = 0;
      }
    }
  }
  else {
    *(undefined *)(param_1 + 5) = 0;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0x108) = 0;
  }
  if (((DAT_08ac61ac != '\0') && (*(char *)(DAT_08ac61a8 + 4) != '\0')) &&
     (*(int *)(param_1 + 0x114) < 0)) {
    iVar2 = zz_sceIoDevctl(&DAT_08aa3d7c,0x2425824,0,0,&local_20,4);
    if (-1 < iVar2) {
      iVar2 = local_20;
    }
    *(int *)(param_1 + 0x114) = iVar2;
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0x118) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x118) = 1;
    }
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac61a8 + 0x20));
  return;
}

