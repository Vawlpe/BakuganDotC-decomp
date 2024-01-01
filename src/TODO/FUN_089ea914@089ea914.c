#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ea914(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  bVar1 = *param_2;
  uVar4 = 0;
  iVar6 = 0;
  uVar5 = 0;
  iVar7 = 2;
  if ((-1 < (char)bVar1) && ((char)bVar1 < -0x80)) {
    iVar7 = 0;
  }
  if ((0x9f < bVar1) && (bVar1 < 0xe0)) {
    iVar7 = 1;
  }
  iVar8 = 0;
  pcVar9 = 
  " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ "
  ;
  do {
    bVar2 = *pcVar9;
    if (((char)bVar2 < '\0') || ('\x7f' < (char)bVar2)) {
      if ((bVar2 < 0xa0) || (0xdf < bVar2)) {
        if (((iVar7 == 2) && (bVar2 == bVar1)) && (((byte *)pcVar9)[1] == param_2[1])) {
          uVar5 = iVar6 + 1;
          goto LAB_089eaa30;
        }
        iVar8 = iVar8 + 2;
        bVar3 = iVar8 < 0x61;
      }
      else {
        if ((iVar7 == 1) && (bVar2 == bVar1)) {
          uVar5 = iVar6 + 1;
          goto LAB_089eaa30;
        }
        iVar8 = iVar8 + 1;
        bVar3 = iVar8 < 0x61;
      }
    }
    else {
      if ((iVar7 == 0) && (bVar2 == bVar1)) {
        uVar5 = iVar6 + 1;
        goto LAB_089eaa30;
      }
      iVar8 = iVar8 + 1;
      bVar3 = iVar8 < 0x61;
    }
    iVar6 = iVar6 + 1;
    pcVar9 = " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ "
             + iVar8;
    if (!bVar3) {
LAB_089eaa30:
      if (uVar5 != 0) {
        if (uVar5 < 200) {
          *param_1 = (char)uVar5;
          return 1;
        }
        *param_1 = (char)(uVar5 - 200 >> 8) + -0x38;
        param_1[1] = (char)(uVar5 - 200);
        uVar4 = 2;
      }
      return uVar4;
    }
  } while( true );
}

