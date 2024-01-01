#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cc868(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_089cbc7c();
  *(undefined **)(param_1 + 0x10) = &DAT_08af52f4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x76c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5908 = iVar2;
  memset_jak(iVar2,0,0x76c);
  FUN_089cbd70(param_1,DAT_08ac5908,0x600);
  *(undefined4 *)(DAT_08ac5908 + 0x30) = 4;
  *(undefined4 *)(DAT_08ac5908 + 0x5f0) = 0;
  strcpy(DAT_08ac5908 + 0x3c,"ULUS10536");
  strcpy(DAT_08ac5908 + 0x4c,PTR_s_BAKUGAN2_08ac58ec);
  strcpy(DAT_08ac5908 + 100,PTR_s_PLAYDATA_BIN_08ac58f8);
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_089b4c84(DAT_08ac5908 + iVar4 + 0x6b8,"%s%03d",PTR_s_BAKUGAN2_08ac58ec,iVar2);
    iVar4 = iVar4 + 0x14;
  } while (iVar2 < 8);
  *(int *)(DAT_08ac5908 + 0x60) = DAT_08ac5908 + 0x6b8;
  memcpy_jak(DAT_08ac5908 + 0x5dc,PTR_DAT_08ac58e8,0x10);
  *(undefined4 *)(DAT_08ac5908 + 0x5ec) = 0;
  *(undefined4 *)(DAT_08ac5908 + 0x5f0) = 0;
  strcpy(DAT_08ac5908 + 0x80,PTR_PTR_DAT_08aacaf4);
  FUN_0880e0c4(DAT_08ac5908 + 0x80);
  *(undefined *)(DAT_08ac5908 + 0x580) = 4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(DAT_08ac5908 + 0x5d4) = uVar3;
  memset_jak(*(undefined4 *)(DAT_08ac5908 + 0x5d4),0,0x40);
  strcpy(*(undefined4 *)(DAT_08ac5908 + 0x5d4),DAT_08ac5908 + 0x3c);
  strcpy(*(int *)(DAT_08ac5908 + 0x5d4) + 0x10,DAT_08ac5908 + 0x4c);
  *(undefined4 *)(DAT_08ac5908 + 0x600) = 8;
  *(int *)(DAT_08ac5908 + 0x5f4) = DAT_08ac5908 + 0x600;
  *(undefined4 *)(DAT_08ac5908 + 0x60c) = 8;
  *(undefined4 *)(DAT_08ac5908 + 0x610) = 0;
  *(undefined4 *)(DAT_08ac5908 + 0x614) = 1;
  *(int *)(DAT_08ac5908 + 0x5f8) = DAT_08ac5908 + 0x60c;
  *(int *)(DAT_08ac5908 + 0x5fc) = DAT_08ac5908 + 0x630;
  uVar1 = FUN_0880d2fc();
  *(undefined4 *)(DAT_08ac5908 + 0x74) = uVar1;
  uVar1 = FUN_0880c840();
  *(undefined4 *)(DAT_08ac5908 + 0x78) = uVar1;
  uVar1 = FUN_0880c840();
  *(undefined4 *)(DAT_08ac5908 + 0x7c) = uVar1;
  *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 0;
  *(undefined4 *)(DAT_08ac5908 + 0x6b0) = 0;
  DAT_08ac590c = 0;
  return param_1;
}

