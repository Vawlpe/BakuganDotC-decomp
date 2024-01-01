#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884eab0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x448);
  if (iVar6 < 2) {
    if (-1 < iVar6) {
      if (iVar6 < 1) {
        iVar6 = FUN_089bf93c(0x19a,1);
        if (iVar6 == 0) {
          if (*(int *)(DAT_08ac58c4 + 0xc) == 0xf) {
            if (DAT_08abe8f5 != '\0') {
              FUN_088c29b8();
            }
            uVar4 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d0e8(uVar4,0x40000000);
            FUN_089bf6e8(0x2724,100);
            *(undefined4 *)(param_1 + 0x448) = 10;
            return;
          }
          if (*(int *)(DAT_08ac58c4 + 0xc) == 0xe) {
            FUN_089bf6e8(0x12d,100);
            *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
            return;
          }
          iVar6 = FUN_089bf93c(0x6e,1);
          if (iVar6 != 0) {
            uVar4 = FUN_089bfa40(0x6e);
            FUN_089bf300(uVar4,3);
          }
          iVar6 = FUN_089bf93c(0x1e0,1);
          if (iVar6 != 0) {
            uVar4 = FUN_089bfa40(0x1e0);
            FUN_089bf300(uVar4,3);
          }
          iVar6 = FUN_089bf93c(0x1e1,1);
          if (iVar6 == 0) {
            *(undefined4 *)(param_1 + 0x440) = 1;
          }
          else {
            uVar4 = FUN_089bfa40(0x1e1);
            FUN_089bf300(uVar4,3);
            *(undefined4 *)(param_1 + 0x440) = 1;
          }
          *(undefined4 *)(param_1 + 0x444) = 1;
          *(undefined4 *)(param_1 + 0x448) = 0;
          switch(*(undefined4 *)(DAT_08ac58c4 + 0xc)) {
          case 1:
            break;
          case 2:
            *(undefined *)(param_1 + 0x55b) = 0;
            FUN_0884e67c(param_1);
            FUN_0889d9c8();
            *(undefined4 *)(param_1 + 0x440) = 2;
            *(undefined4 *)(param_1 + 0x444) = 2;
            *(undefined4 *)(param_1 + 0x448) = 0x14;
            FUN_0884b3d0(param_1,0);
            uVar4 = _DONE_Get_DAT_08AC5874();
            FUN_089c69a4(uVar4);
            break;
          case 3:
          case 4:
          case 5:
          case 6:
          case 0xb:
          case 0x10:
            FUN_0889d9c8();
            *(undefined4 *)(param_1 + 0x440) = 2;
            *(undefined4 *)(param_1 + 0x444) = 2;
            *(undefined4 *)(param_1 + 0x448) = 100;
            FUN_0884b3d0(param_1,0);
            uVar4 = _DONE_Get_DAT_08AC5874();
            FUN_089c69a4(uVar4);
            break;
          default:
            bVar3 = true;
            iVar6 = FUN_0882c13c();
            if ((iVar6 != 0) && (iVar6 = FUN_0882c15c(), *(char *)(iVar6 + 0x919) != '\0')) {
              bVar3 = false;
            }
            if (bVar3) {
              FUN_0889d9e4();
              *(undefined4 *)(param_1 + 0x440) = 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x440) = 1;
            }
            *(undefined4 *)(param_1 + 0x444) = 1;
            *(undefined4 *)(param_1 + 0x448) = 0;
          }
        }
      }
      else {
        iVar6 = FUN_089bf93c(0x12d,1);
        if (iVar6 == 0) {
          FUN_0884e994(param_1);
          *(undefined4 *)(param_1 + 0x448) = 0;
        }
      }
    }
  }
  else if ((iVar6 == 10) && (iVar6 = FUN_089bf93c(0x2724,1), iVar6 == 0)) {
    uVar4 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880d808(uVar4,0x40000000);
    FUN_0884e994(param_1);
    iVar6 = FUN_089bfa40(0x19a);
    if (iVar6 != 0) {
      FUN_089109ec();
    }
    iVar6 = FUN_089edb80();
    if (0.0 < *(float *)(iVar6 + 0x2c)) {
      iVar6 = FUN_089edb80();
      iVar5 = FUN_089edb80();
      uVar4 = *(undefined4 *)(iVar5 + 0x24);
      uVar1 = *(undefined4 *)(iVar5 + 0x28);
      uVar2 = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar6 + 0x34) = uVar4;
      *(undefined4 *)(iVar6 + 0x38) = uVar1;
      *(undefined4 *)(iVar6 + 0x3c) = uVar2;
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0;
      *(undefined4 *)(iVar6 + 0x48) = 0;
      *(undefined4 *)(iVar6 + 0x4c) = 0;
      uVar4 = FUN_089edb80();
      FUN_089edf24(uVar4,10);
      *(undefined4 *)(param_1 + 0x448) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x448) = 0;
    }
  }
  return;
}

