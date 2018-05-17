//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDisplayLayoutObserver.h"

@class BKSApplicationStateMonitor, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver>
{
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableArray *_foregroundAppInfos;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateForAppInfoDictionaries:(id)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)foregroundAppInfos;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
