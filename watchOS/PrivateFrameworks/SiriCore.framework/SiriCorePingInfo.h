//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying>
{
    NSMapTable *_outstandingPings;
    int _pingAcknowledgedCount;
    double _avgPingTime;
}

@property(readonly, nonatomic) double avgPingTime; // @synthesize avgPingTime=_avgPingTime;
@property(readonly, nonatomic) int pingAcknowledgedCount; // @synthesize pingAcknowledgedCount=_pingAcknowledgedCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)numberOfUnacknowledgedPings;
- (void)markPongReceivedWithIndex:(int)arg1;
- (void)markPingSentWithIndex:(int)arg1;

@end

