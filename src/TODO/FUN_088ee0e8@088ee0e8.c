#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ee0e8(int param_1,byte param_2,char param_3,short param_4)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)param_4;
  if (0x67 < param_2) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x58),param_2,param_3,uVar2);
    return;
  }
  cVar1 = (char)param_4;
  switch(param_2) {
  case 0:
    return;
  case 1:
    FUN_088ebc24();
    return;
  case 2:
    FUN_088ebc4c(param_1,param_4);
    return;
  case 3:
    FUN_088ebd24();
    return;
  case 4:
    FUN_088ebd54(param_1,param_4);
    return;
  case 5:
    FUN_088ebdd8(param_1,param_4);
    return;
  case 6:
    FUN_088ebe48(param_1,param_4);
  case 7:
    return;
  case 8:
    FUN_088ebea0(param_1,param_4);
  case 9:
    return;
  case 10:
    FUN_088ebeb8(param_1,(int)cVar1);
    return;
  case 0xb:
    FUN_088ec090(param_1,param_4);
    return;
  case 0xc:
    FUN_088ec0d0(param_1,(int)cVar1);
    return;
  case 0xd:
    FUN_088ec0d8(param_1,param_4);
    return;
  case 0xe:
    FUN_088ec0e0(param_1,(int)cVar1);
    return;
  case 0xf:
    FUN_088ec0e8(param_1,param_4);
  case 0x10:
    return;
  case 0x11:
    FUN_088ebea8();
    return;
  case 0x12:
    FUN_088ec400(param_1,uVar2 != 0);
    return;
  case 0x13:
    FUN_088ec428(param_1,uVar2 & 0xff);
    return;
  case 0x14:
    FUN_088ec44c();
    return;
  case 0x15:
    FUN_088ec474(param_1,param_4);
    return;
  case 0x16:
    FUN_088ec49c();
    return;
  case 0x17:
    FUN_088ec504();
    return;
  case 0x18:
    FUN_088ec56c();
    return;
  case 0x19:
    FUN_088ec6d4(param_1,param_4);
    return;
  case 0x1a:
    FUN_088ecdc8();
    return;
  case 0x1b:
    FUN_088ece44();
    return;
  case 0x1c:
    FUN_088ecec0();
    return;
  case 0x1d:
    FUN_088ecf3c(param_1,param_4);
    return;
  case 0x1e:
    FUN_088ecf5c();
    return;
  case 0x1f:
    FUN_088ecfc4();
    return;
  case 0x20:
    FUN_088ed02c();
    return;
  case 0x21:
    FUN_088ed094(param_1,param_4);
    return;
  case 0x22:
    FUN_088ed0b4();
    return;
  case 0x23:
    FUN_088ed130();
    return;
  case 0x24:
    FUN_088ed1ac();
    return;
  case 0x25:
    FUN_088ed228(param_1,param_4);
    return;
  case 0x26:
    FUN_088ed248(param_1,param_4);
    return;
  case 0x27:
    FUN_088ed258(param_1,param_4);
    return;
  case 0x28:
    FUN_088ed278();
    return;
  case 0x29:
    FUN_088ed2d0(param_1,param_4);
    return;
  case 0x2a:
    FUN_088ed328(param_1,param_3,uVar2);
    return;
  case 0x2b:
    FUN_088ed3e4(param_1,param_3);
  case 0x2c:
    return;
  case 0x2d:
    FUN_088ed458(param_1,param_3,uVar2);
    return;
  case 0x2e:
    FUN_088ed4e0(param_1,param_3,uVar2);
    return;
  case 0x2f:
    FUN_088ed568(param_1,param_3,uVar2);
    return;
  case 0x30:
    FUN_088ed740(param_1,param_3,param_4);
    return;
  case 0x31:
    FUN_088ed764(param_1,param_3,uVar2);
    return;
  case 0x32:
    FUN_088ed800(param_1,param_3,uVar2);
    return;
  case 0x33:
    FUN_088ed89c(param_1,param_3,uVar2);
    return;
  case 0x34:
    FUN_088ed938(param_1,param_3,param_4);
    return;
  case 0x35:
    FUN_088ed95c(param_1,param_3,uVar2);
    return;
  case 0x36:
    FUN_088ed9c0(param_1,param_3,uVar2);
    return;
  case 0x37:
    FUN_088eda24(param_1,param_3,uVar2);
    return;
  case 0x38:
    FUN_088eda88(param_1,param_3,param_4);
    return;
  case 0x39:
    FUN_088edaac(param_1,param_3,uVar2);
    return;
  case 0x3a:
    FUN_088edb1c(param_1,param_3,uVar2);
    return;
  case 0x3b:
    FUN_088edb8c(param_1,param_3,uVar2);
    return;
  case 0x3c:
    FUN_088edbfc(param_1,param_3,param_4);
    return;
  case 0x3d:
    FUN_088edc20(param_1,param_3,param_4);
    return;
  case 0x3e:
    FUN_088edcec(param_1,param_3,param_4);
    return;
  case 0x3f:
    FUN_088edda8(param_1,param_3,param_4);
    return;
  case 0x40:
    FUN_088eddcc();
    return;
  case 0x41:
    FUN_088edddc(param_1,uVar2 != 0);
    return;
  case 0x42:
    FUN_088ede00(param_1,param_3,uVar2 & 0xff);
    return;
  case 0x43:
    FUN_088ede60(param_1,param_3,param_4);
    return;
  case 0x44:
    FUN_088ede98(param_1,param_3,param_4);
    return;
  case 0x45:
    FUN_088edebc(param_1,param_3);
    return;
  case 0x46:
    FUN_088edee0(param_1,param_3,uVar2 != 0);
    return;
  case 0x47:
    FUN_088edf28();
    return;
  case 0x48:
    FUN_088edf44(param_1,param_3 != '\0',uVar2);
    return;
  case 0x49:
    FUN_088edf7c(param_1,uVar2 != 0);
    return;
  case 0x4a:
    FUN_088edf84();
    return;
  case 0x4b:
    FUN_088edf8c();
    return;
  case 0x4c:
    FUN_088edf94();
    return;
  case 0x4d:
    FUN_088edfb0();
    return;
  case 0x4e:
    FUN_088edfbc(param_1,uVar2 != 0);
    return;
  case 0x4f:
    FUN_088edfd8(param_1,param_3,uVar2);
    return;
  case 0x50:
    FUN_088edffc(param_1,uVar2 != 0);
    return;
  case 0x51:
    FUN_088ee004(param_1,uVar2 & 0xff);
    return;
  case 0x52:
    FUN_088ee020();
    return;
  case 0x53:
    FUN_088ee03c(param_1,param_3);
    return;
  case 0x54:
    FUN_088ee044(param_1,param_3,uVar2 & 0xff);
    return;
  case 0x55:
    FUN_088ee04c(param_1,param_3);
    return;
  case 0x56:
    FUN_088ee054(param_1,param_3,uVar2);
    return;
  case 0x57:
    FUN_088ee05c(param_1,param_3,uVar2);
    return;
  case 0x58:
    FUN_088ee064(param_1,param_3,uVar2);
    return;
  case 0x59:
    FUN_088ee06c(param_1,param_3,param_4);
    return;
  case 0x5a:
    FUN_088ee074(param_1,param_3,uVar2);
    return;
  case 0x5b:
    FUN_088ee07c(param_1,param_3,uVar2);
    return;
  case 0x5c:
    FUN_088ee084(param_1,param_3,uVar2);
    return;
  case 0x5d:
    FUN_088ee08c(param_1,param_3,param_4);
    return;
  case 0x5e:
    FUN_088ee094(param_1,param_3,uVar2);
    return;
  case 0x5f:
    FUN_088ee09c(param_1,param_3,uVar2);
    return;
  case 0x60:
    FUN_088ee0a4(param_1,param_3,uVar2);
    return;
  case 0x61:
    FUN_088ee0ac(param_1,param_3,param_4);
    return;
  case 0x62:
    FUN_088ee0b4(param_1,param_3,uVar2);
    return;
  case 99:
    FUN_088ee0bc(param_1,param_3,uVar2);
    return;
  case 100:
    FUN_088ee0c4(param_1,param_3,uVar2);
    return;
  case 0x65:
    FUN_088ee0cc(param_1,param_3,param_4);
    return;
  case 0x66:
    FUN_088ee0d4(param_1,param_3,uVar2);
    return;
  case 0x67:
    FUN_088ee0dc(param_1,uVar2 != 0);
    return;
  }
}

