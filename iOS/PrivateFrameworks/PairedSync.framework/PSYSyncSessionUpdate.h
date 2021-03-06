//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject
{
    PSYSyncSession *_originalSession;
    PSYSyncSession *_updatedSession;
}

@property(readonly, nonatomic) PSYSyncSession *updatedSession; // @synthesize updatedSession=_updatedSession;
@property(readonly, nonatomic) PSYSyncSession *originalSession; // @synthesize originalSession=_originalSession;
- (void).cxx_destruct;
- (_Bool)didUpdateCompleteSyncSession;
- (void)enumerateNewlyCompletedActivitiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNewlyRunningActivitiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChangedActivitiesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2;

@end

