//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface VCConnectionHealthMonitor : NSObject
{
    struct _opaque_pthread_rwlock_t _stateRWLock;
    unsigned char _lastReportedIndex;
    struct ConnectionStats _currentReceivingStats;
    struct ConnectionStatsHistory _statsHistory;
    struct _opaque_pthread_rwlock_t _peerStateRWLock;
    struct ConnectionStatsHistory _peerStatsHistory;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property id <VCConnectionHealthMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isPrimaryConnectionImprovedFromHistory:(struct ConnectionStatsHistory *)arg1 withIndex:(int)arg2;
- (_Bool)isHistoryImproved:(char *)arg1 currentIndex:(int)arg2;
- (_Bool)isHistoryValid:(char *)arg1;
- (void)updateRatiosForHistory:(struct ConnectionStatsHistory *)arg1 withIndex:(int)arg2;
- (void)reportConnectionHealthWithStatsHistory:(struct ConnectionStatsHistory *)arg1 index:(int)arg2 isPeerStats:(_Bool)arg3;
- (void)resetHistory:(struct ConnectionStatsHistory *)arg1;
- (void)updateStatsHistory;
- (void)resetConnectionStats:(_Bool)arg1;
- (void)processPeerStatsBlob:(unsigned int)arg1;
- (unsigned int)generateStatsBlob;
- (void)updateReceiveStats;
- (void)receiveNewPacket:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end
