#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899c71c(undefined4 param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 0x32;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x35);
  iVar2 = 0x36;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x37);
  iVar2 = 0x3a;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x43);
  iVar2 = 0x43;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x49);
  iVar2 = 0x37;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3a);
  iVar2 = 0x49;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x58);
  iVar2 = 0x58;
  do {
    cVar1 = FUN_0899c5b0(param_1,param_2,iVar2);
    cVar3 = cVar3 + cVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x5b);
  FUN_0899c658(param_1);
  return cVar3 != '\0';
}

