#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885ea0c(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = FUN_089d9680();
  if (iVar3 != 0) {
    FUN_089e0860(param_1);
    piVar6 = *(int **)(&DAT_08ab9c2c + *(int *)(param_1 + 8) * 4);
    if (piVar6 != (int *)0x0) {
      uVar4 = FUN_089d9674();
      iVar3 = FUN_089d9c84(uVar4,*piVar6);
      if (iVar3 == -1) {
        uVar4 = FUN_089d9674();
        FUN_089d9914(uVar4,(&PTR_DAT_08ab9ba8)[*(int *)(param_1 + 8)]);
      }
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar5 = FUN_089d7d74(0x252,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x164) = uVar5;
      iVar3 = 0;
      iVar8 = 0;
      piVar7 = piVar6;
      do {
        uVar2 = 0xffff;
        if (*piVar7 != 0) {
          uVar4 = FUN_089d9674();
          uVar2 = FUN_089d9c84(uVar4,*piVar7);
        }
        *(undefined2 *)(*(int *)(param_1 + 0x164) + iVar8) = uVar2;
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + 2;
      } while (iVar3 < 0x129);
      if ((DAT_08aba80c & 1 << (*(uint *)(param_1 + 8) & 0x1f)) == 0) {
        if (DAT_08af7ab0 == 0) {
          DAT_08af7ab0 = 1;
          DAT_08af7ad0 = 0;
          DAT_08af7ad4 = 0x42a00000;
          DAT_08af7ad8 = 0;
          DAT_08af7adc = 0;
        }
        if (DAT_08af7ab4 == 0) {
          DAT_08af7ab4 = 1;
          DAT_08af7ae0 = 0;
          DAT_08af7ae4 = 0x41f00000;
          DAT_08af7ae8 = 0;
          DAT_08af7aec = 0;
        }
        if (DAT_08af7ab8 == 0) {
          DAT_08af7ab8 = 1;
          DAT_08af7af0 = 0;
          DAT_08af7af4 = 0x41c80000;
          DAT_08af7af8 = 0;
          DAT_08af7afc = 0;
        }
        if (DAT_08af7abc == 0) {
          DAT_08af7abc = 1;
          DAT_08af7b00 = 0;
          DAT_08af7b04 = 0xc2480000;
          DAT_08af7b08 = 0;
          DAT_08af7b0c = 0;
        }
        if (DAT_08af7ac0 == 0) {
          DAT_08af7ac0 = 1;
          DAT_08af7b10 = 0;
          DAT_08af7b14 = 0x41c80000;
          DAT_08af7b18 = 0;
          DAT_08af7b1c = 0;
        }
        if (DAT_08af7ac4 == 0) {
          DAT_08af7ac4 = 1;
          DAT_08af7b20 = 0x41a00000;
          DAT_08af7b24 = 0xc1c80000;
          DAT_08af7b28 = 0xc1a00000;
          DAT_08af7b2c = 0;
        }
        if (DAT_08af7ac8 == 0) {
          DAT_08af7ac8 = 1;
          DAT_08af7b30 = 0;
          DAT_08af7b34 = 0xc2100000;
          DAT_08af7b38 = 0;
          DAT_08af7b3c = 0;
          uVar4 = *(undefined4 *)(param_1 + 8);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 8);
        }
        bVar1 = true;
        switch(uVar4) {
        case 2:
          FUN_088863c8(piVar6[0x1a],0,&DAT_08af7ae0);
          break;
        default:
          bVar1 = false;
          break;
        case 6:
          FUN_0888653c(0xbf800000,piVar6[0x112]);
          FUN_0888653c(0xbf800000,piVar6[0x93]);
          FUN_088863c8(piVar6[0x93],0,&DAT_08af7b10);
          FUN_088863c8(piVar6[0x94],0,&DAT_08af7b10);
          FUN_08886444(piVar6[0x95],0,&DAT_08af7b10);
          break;
        case 9:
          FUN_088864c0(piVar6[0x107],0,&DAT_08af7ad0);
          FUN_088864c0(piVar6[0x108],0,&DAT_08af7ad0);
          FUN_088864c0(piVar6[0x109],0,&DAT_08af7ad0);
          break;
        case 0xb:
          FUN_088863c8(piVar6[0x10f],0,&DAT_08af7b20);
          break;
        case 0xd:
          FUN_088863c8(piVar6[0x1a],0,&DAT_08af7af0);
          FUN_0888653c(0xbf800000,piVar6[0x93]);
          break;
        case 0xe:
          FUN_088863c8(piVar6[0x1a],0,&DAT_08af7ae0);
          iVar3 = FUN_0889daa8();
          if (iVar3 != 0) {
            uVar4 = FUN_089f7720("10_D_Hades_Refrec");
            FUN_089f7218(uVar4,0,1);
          }
          FUN_088863c8(piVar6[0x10f],0,&DAT_08af7b30);
          break;
        case 0x11:
          FUN_088863c8(piVar6[0x107],0,&DAT_08af7b00);
          FUN_088863c8(piVar6[0x108],0,&DAT_08af7b00);
          FUN_088863c8(piVar6[0x109],0,&DAT_08af7b00);
          break;
        case 0x12:
          FUN_088863c8(piVar6[0x92],0,&DAT_08af7ae0);
          FUN_088863c8(piVar6[0x93],0,&DAT_08af7ae0);
          FUN_088863c8(piVar6[0x94],0,&DAT_08af7ae0);
          FUN_08886444(piVar6[0x95],0,&DAT_08af7ae0);
        }
        if (bVar1) {
          DAT_08aba80c = DAT_08aba80c | 1 << (*(uint *)(param_1 + 8) & 0x1f);
        }
      }
    }
  }
  return;
}

