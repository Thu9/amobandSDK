//
//  YCBTConstants.h
//  SmartHealth
//
//  Created by qiaoliwei on 2019/3/24.
//  Copyright © 2019年 yucheng. All rights reserved.
//

#ifndef YCBTConstants_h
#define YCBTConstants_h

//static BOOL enableDebug = YES;

//#define DBG_ON 1
//
//#if DBG_ON
//#define DBG(fmt, arg...) do{NSLog(fmt, ##arg);}while(0)
//#else
//#define DBG(fmt, arg...) do{}while(0)
//#endif

typedef enum : NSUInteger {
    Error_Ok,
    Error_BLENOTOpen,
    Error_BLEDisconnect,
    Error_Failed,
    Error_TimeOut
} Error_Code;

typedef void (^YCSendCallBack)(Error_Code code,  NSDictionary * _Nullable result);

/*
 设备 蓝牙连接状态 改变
 */
extern NSString * const YCBTConnectStateChangeKey;


#endif /* YCBTConstants_h */
