#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089b2e1c(int param_1,int param_2,uint param_3,char param_4)

{
  short sVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + param_3 * 4);
  if (pcVar3 == (char *)0x0) {
    return 2;
  }
  bVar2 = false;
  iVar4 = 0;
  iVar6 = *(int *)(pcVar3 + 8);
  pcVar5 = pcVar3;
  while (iVar6 != 0) {
    iVar4 = iVar4 + 1;
    iVar6 = *(int *)(pcVar5 + 0x20);
    pcVar5 = pcVar5 + 0x18;
  }
  iVar6 = 0;
  pcVar5 = pcVar3;
  if (0 < iVar4) {
    do {
      if (*pcVar5 != '\0') {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x18;
    } while (iVar6 < iVar4);
  }
  if (iVar4 <= param_2) {
    return 2;
  }
  if ((param_4 != '\0') && (!bVar2)) {
    return 2;
  }
  if (param_4 == '\0') {
    sVar1 = *(short *)(pcVar3 + param_2 * 0x18 + 2);
  }
  else {
    iVar4 = (int)*(short *)(pcVar3 + param_2 * 0x18 + 4);
    if (iVar4 != 0) goto LAB_089b2f14;
    sVar1 = *(short *)(pcVar3 + param_2 * 0x18 + 2);
  }
  iVar4 = (int)sVar1;
  if (iVar4 == 0) {
    return (uint)((param_3 & 1) != 0);
  }
LAB_089b2f14:
  return iVar4 - 1;
}

