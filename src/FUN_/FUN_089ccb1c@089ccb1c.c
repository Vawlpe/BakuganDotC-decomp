#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ccb1c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = 1;
  *(uint *)(param_1 + 0x14) = param_2;
  if (param_2 < 0xf) {
    iVar4 = (int)(param_2 * 4) >> 2;
    switch(param_2) {
    case 0:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 5;
      *(undefined4 *)(DAT_08ac5908 + 0x5c8) = 3;
      iVar4 = FUN_089be228(DAT_08ac520c,"ICON0.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x584) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x58c) = uVar2;
        *(undefined4 *)(iVar1 + 0x588) = uVar2;
        iVar1 = DAT_08ac5908;
        puVar5 = (undefined4 *)(DAT_08ac5908 + 0x69c);
        memset_jak(puVar5,0,0x14);
        *(undefined4 **)(DAT_08ac5908 + 0x5c4) = puVar5;
        *puVar5 = *(undefined4 *)(iVar4 + 4);
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(iVar1 + 0x6ac) = 0;
        *(undefined4 *)(iVar1 + 0x6a4) = uVar2;
        *(undefined4 *)(iVar1 + 0x6a0) = uVar2;
      }
      iVar4 = FUN_089be228(DAT_08ac520c,"PIC1.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x5a4) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x5ac) = uVar2;
        *(undefined4 *)(iVar1 + 0x5a8) = uVar2;
      }
      break;
    case 1:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 4;
      *(undefined4 *)(DAT_08ac5908 + 0x5c8) = 3;
      break;
    case 2:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 7;
      break;
    case 3:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x5c8) = 3;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0;
      strcpy(DAT_08ac5908 + 0x4c,DAT_08ac5908 + 0x6b8);
      break;
    case 4:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 8;
      *(int *)(DAT_08ac5908 + 0x5d0) = DAT_08ac5908 + 0x66c;
      *(int *)(DAT_08ac5908 + 0x5d8) = DAT_08ac5908 + 0x680;
      strcpy(DAT_08ac5908 + 100,PTR_s_PLAYDATA_BIN_08ac58f8);
      iVar4 = FUN_089be228(DAT_08ac520c,"ICON0.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x584) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x58c) = uVar2;
        *(undefined4 *)(iVar1 + 0x588) = uVar2;
      }
      iVar4 = FUN_089be228(DAT_08ac520c,"PIC1.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x5a4) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x5ac) = uVar2;
        *(undefined4 *)(iVar1 + 0x5a8) = uVar2;
      }
      break;
    default:
      if (iVar4 == 9) {
        *(undefined4 *)(DAT_08ac5908 + 0x30) = 1;
        *(undefined4 *)(DAT_08ac5908 + 0x5d0) = 0;
        strcpy(DAT_08ac5908 + 0x100,PTR_s_Language_Setting_08aacafc);
        strcpy(DAT_08ac5908 + 0x180,PTR_DAT_08aacb00);
      }
      else if (iVar4 == 8) {
        *(undefined4 *)(DAT_08ac5908 + 0x30) = 1;
        strcpy(DAT_08ac5908 + 0x100,PTR_s_Language_Setting_08aacafc);
        strcpy(DAT_08ac5908 + 0x180,PTR_DAT_08aacb00);
      }
      else if (iVar4 == 7) {
        *(undefined4 *)(DAT_08ac5908 + 0x30) = 9;
      }
      else if (iVar4 == 5) {
        *(undefined4 *)(DAT_08ac5908 + 0x30) = 8;
        *(int *)(DAT_08ac5908 + 0x5d0) = DAT_08ac5908 + 0x66c;
      }
      memset_jak(DAT_08ac5908 + 100,0,0xd);
      strcpy(DAT_08ac5908 + 0x4c,PTR_s_Install_08ac5904);
      *(undefined4 *)(DAT_08ac5908 + 0x74) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 0xe700000;
      if (iVar4 != 8) {
        iVar4 = FUN_089be228(DAT_08ac520c,"INST_ICON0.PNG");
        if (iVar4 != 0) {
          *(undefined4 *)(DAT_08ac5908 + 0x584) = *(undefined4 *)(iVar4 + 4);
          iVar1 = DAT_08ac5908;
          uVar2 = *(undefined4 *)(iVar4 + 8);
          *(undefined4 *)(DAT_08ac5908 + 0x58c) = uVar2;
          *(undefined4 *)(iVar1 + 0x588) = uVar2;
        }
        iVar4 = FUN_089be228(DAT_08ac520c,"INST_PIC1.PNG");
        if (iVar4 != 0) {
          *(undefined4 *)(DAT_08ac5908 + 0x5a4) = *(undefined4 *)(iVar4 + 4);
          iVar1 = DAT_08ac5908;
          uVar2 = *(undefined4 *)(iVar4 + 8);
          *(undefined4 *)(DAT_08ac5908 + 0x5ac) = uVar2;
          *(undefined4 *)(iVar1 + 0x5a8) = uVar2;
        }
      }
      break;
    case 6:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 8;
      *(int *)(DAT_08ac5908 + 0x5d0) = DAT_08ac5908 + 0x66c;
      *(int *)(DAT_08ac5908 + 0x5d8) = DAT_08ac5908 + 0x680;
      strcpy(DAT_08ac5908 + 100,PTR_s_LANGUAGE_BIN_08ac58fc);
      strcpy(DAT_08ac5908 + 0x4c,PTR_DAT_08ac58f0);
      *(undefined4 *)(DAT_08ac5908 + 0x74) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 0;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 4;
      break;
    case 10:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 3;
      iVar4 = FUN_0880cc48();
      *(undefined4 *)(DAT_08ac5908 + 0x74) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 4;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 4;
      strcpy(DAT_08ac5908 + 100,PTR_s_LANGUAGE_BIN_08ac58fc);
      strcpy(DAT_08ac5908 + 0x4c,PTR_DAT_08ac58f0);
      FUN_0880e338(DAT_08ac5908 + 0x80,DAT_08ac5908 + 0x80);
      break;
    case 0xb:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 0;
      iVar4 = FUN_0880cc48();
      *(undefined4 *)(DAT_08ac5908 + 0x74) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 4;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 4;
      strcpy(DAT_08ac5908 + 100,PTR_s_LANGUAGE_BIN_08ac58fc);
      strcpy(DAT_08ac5908 + 0x4c,PTR_DAT_08ac58f0);
      break;
    case 0xc:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 8;
      uVar2 = FUN_0880cc48();
      uVar2 = FUN_0880cdd8(uVar2);
      *(undefined4 *)(DAT_08ac5908 + 0x74) = uVar2;
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 0x1e4;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 0x1e4;
      *(int *)(DAT_08ac5908 + 0x5d0) = DAT_08ac5908 + 0x66c;
      *(int *)(DAT_08ac5908 + 0x5d8) = DAT_08ac5908 + 0x680;
      strcpy(DAT_08ac5908 + 100,PTR_s_RECORD_BIN_08ac5900);
      strcpy(DAT_08ac5908 + 0x4c,PTR_s_RECORD_08ac58f4);
      FUN_0880e3dc(DAT_08ac5908 + 0x80,DAT_08ac5908 + 0x80);
      break;
    case 0xd:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 1;
      iVar4 = FUN_089cc674();
      if ((iVar4 < 0) || (8 < iVar4)) {
        iVar3 = 0;
      }
      else {
        memset_jak(DAT_08ac5908 + 0x4c,0,0x14);
        FUN_089b4c84(DAT_08ac5908 + 0x4c,"%s%03d",PTR_s_BAKUGAN2_08ac58ec,iVar4 + 1);
        strcpy(*(int *)(DAT_08ac5908 + 0x5d4) + 0x10,DAT_08ac5908 + 0x4c);
        memcpy_jak(DAT_08ac5908 + iVar4 * 0x14 + 0x6b8,DAT_08ac5908 + 0x4c,0x14);
      }
      iVar4 = FUN_089be228(DAT_08ac520c,"ICON0.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x584) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x58c) = uVar2;
        *(undefined4 *)(iVar1 + 0x588) = uVar2;
      }
      iVar4 = FUN_089be228(DAT_08ac520c,"PIC1.PNG");
      if (iVar4 != 0) {
        *(undefined4 *)(DAT_08ac5908 + 0x5a4) = *(undefined4 *)(iVar4 + 4);
        iVar1 = DAT_08ac5908;
        uVar2 = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(DAT_08ac5908 + 0x5ac) = uVar2;
        *(undefined4 *)(iVar1 + 0x5a8) = uVar2;
      }
      break;
    case 0xe:
      *(undefined4 *)(DAT_08ac5908 + 0x30) = 0;
      uVar2 = FUN_0880cc48();
      uVar2 = FUN_0880cdd8(uVar2);
      *(undefined4 *)(DAT_08ac5908 + 0x74) = uVar2;
      *(undefined4 *)(DAT_08ac5908 + 0x78) = 0x1e4;
      *(undefined4 *)(DAT_08ac5908 + 0x7c) = 0x1e4;
      strcpy(DAT_08ac5908 + 100,PTR_s_RECORD_BIN_08ac5900);
      strcpy(DAT_08ac5908 + 0x4c,PTR_s_RECORD_08ac58f4);
      FUN_0880e3dc(DAT_08ac5908 + 0x80,DAT_08ac5908 + 0x80);
    }
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(DAT_08ac5908 + 0x6b4) = 1;
    FUN_089cbe08(param_1,1);
  }
  return iVar3;
}

