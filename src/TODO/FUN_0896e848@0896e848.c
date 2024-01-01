#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896e848(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x77);
  uVar3 = 0;
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      bVar2 = *(byte *)(param_1 + 0x74);
      if (*(char *)(param_1 + 0x29bd) < '\x03') {
        if ((char)bVar2 < '\x02') {
          if (-1 < (char)bVar2) {
            uVar3 = 0;
            if ((char)bVar2 < '\x01') {
              *(undefined *)(param_1 + 0x29be) = 0;
            }
            else {
              uVar3 = 1;
            }
          }
        }
        else if ((char)bVar2 < '\x03') {
          uVar3 = 2;
        }
        else if ((char)bVar2 < '\x04') {
          uVar3 = 0;
          *(undefined *)(param_1 + 0x29be) = 1;
        }
      }
      else if (bVar2 < 6) {
        if (bVar2 == 1) {
          uVar3 = 0;
          *(undefined *)(param_1 + 0x29be) = 1;
        }
        else if (bVar2 == 2) {
          uVar3 = 1;
        }
        else if (bVar2 == 3) {
          uVar3 = 2;
        }
        else if (bVar2 == 4) {
          uVar3 = 0;
          *(undefined *)(param_1 + 0x29be) = 2;
        }
        else if (bVar2 == 5) {
          uVar3 = 0;
          *(undefined *)(param_1 + 0x29be) = 3;
        }
        else {
          uVar3 = 0;
          *(undefined *)(param_1 + 0x29be) = 0;
        }
      }
      if (uVar3 == 0) {
        FUN_0896acb8(param_1,0,0);
        *(undefined *)(param_1 + 0x77) = 1;
        *(undefined *)(param_1 + 0x75) = 0;
        FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
        FUN_0896d24c(param_1,1);
        FUN_0896d610(param_1,1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
      else if (uVar3 < 2) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      else if (uVar3 < 3) {
        *(undefined4 *)(param_1 + 0x28) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  else if (cVar1 < '\x02') {
    *(undefined4 *)(param_1 + 0x2c) = 6;
  }
  else if (cVar1 < '\x03') {
    FUN_0896a478(param_1,*(undefined *)(param_1 + 0x29be));
    *(undefined4 *)(param_1 + 0x2c) = 7;
  }
  return;
}

