//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, PBCodable;

@protocol NFAWDEventProtocol <NSObject>

@optional
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateExceptionUUID:(NSData *)arg1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(NSData *)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (PBCodable *)getMetric;
- (unsigned int)getMetricId;
@end
