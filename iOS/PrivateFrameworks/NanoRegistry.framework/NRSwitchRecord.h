//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoRegistry/NRPBSwitchRecord.h>

#import "NSSecureCoding.h"

@class NSDate, NSUUID;

@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>
{
}

+ (id)switchRecordWithHistoryEntry:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *activeDeviceID;
@property(retain, nonatomic) NSDate *date;
- (id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned int)arg3;

@end
