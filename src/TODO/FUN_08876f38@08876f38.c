#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876f38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b00870 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_08b00870 + 0xb8);
  iVar3 = DAT_08b00870;
  do {
    iVar2 = *(int *)(iVar3 + 4);
    if (iVar1 < 0x44) {
      if (iVar1 < 0xd) {
        if (0xb < iVar1) {
          iVar1 = *(int *)(iVar3 + 0xb0);
LAB_08877014:
          if (iVar1 == param_1) {
            FUN_08876ee0(iVar3);
            FUN_08824658(DAT_08b00920,0xffffffff,iVar3 + 0x60);
          }
        }
      }
      else if (iVar1 == 0x2b) {
        iVar1 = *(int *)(iVar3 + 0xb0);
        goto LAB_08877014;
      }
    }
    else {
      switch(iVar1) {
      case 0x5b:
      case 0x61:
      case 0x69:
      case 0x6f:
      case 0x76:
      case 0x7b:
        iVar1 = *(int *)(iVar3 + 0xb0);
        goto LAB_08877014;
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        break;
      default:
        if (iVar1 < 0x48) {
          if (iVar1 < 0x45) {
            iVar1 = *(int *)(iVar3 + 0xb0);
            goto LAB_08877014;
          }
        }
        else if (iVar1 < 0x49) {
          iVar1 = *(int *)(iVar3 + 0xb0);
          goto LAB_08877014;
        }
      }
    }
    if (iVar2 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar2 + 0xb8);
    iVar3 = iVar2;
  } while( true );
}

