//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPNRRequestSentInfo, CTXPCServiceSubscriptionContext, NSDictionary;

@protocol CoreTelephonyClientPNRDelegate <NSObject>

@optional
- (void)pnrReadyStateNotification:(CTXPCServiceSubscriptionContext *)arg1 regState:(BOOL)arg2;
- (void)pnrResponseReceived:(CTXPCServiceSubscriptionContext *)arg1 pnrRspData:(NSDictionary *)arg2;
- (void)pnrRequestSent:(CTXPCServiceSubscriptionContext *)arg1 pnrReqData:(CTPNRRequestSentInfo *)arg2;
@end
