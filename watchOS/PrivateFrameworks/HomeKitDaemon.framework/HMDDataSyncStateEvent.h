//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent
{
    unsigned int _dataSyncState;
}

+ (id)dataSyncStateEstablished:(unsigned int)arg1;
+ (id)uuid;
@property(nonatomic) unsigned int dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (id)initWithDataSyncState:(unsigned int)arg1;

@end

