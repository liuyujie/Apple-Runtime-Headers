//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"

@class CADisplay, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayStatus, NSHashTable, NSMapTable, NSSet, NSString;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable>
{
    id <FBSDisplayObserving> _bookendObserver;
    NSHashTable *_observers;
    CADisplay *_mainDisplay;
    FBSDisplayStatus *_mainDisplayStatus;
    NSMapTable *_statusByDisplay;
    id <FBSDisplayMonitorDelegate> _displayMonitorDelegate;
}

@property(nonatomic) __weak id <FBSDisplayMonitorDelegate> displayMonitorDelegate; // @synthesize displayMonitorDelegate=_displayMonitorDelegate;
@property(nonatomic) __weak id <FBSDisplayObserving> bookendObserver; // @synthesize bookendObserver=_bookendObserver;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_enumerateConnectedWithBlock:(CDUnknownBlockType)arg1;
- (void)_noteDisconnectStatus:(id)arg1;
- (void)_noteUpdateStatus:(id)arg1 withConfiguration:(id)arg2;
- (void)_noteConnectStatus:(id)arg1 withConfiguration:(id)arg2 debounce:(BOOL)arg3 broadcast:(BOOL)arg4;
- (void)_updateDisplaysIfNecessary;
- (void)_reevaluateConnectionStatusForAllDisplays;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)configurationForIdentity:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *connectedIdentities;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
- (void)dealloc;
- (void)_invalidate;
- (id)initWithInitializationCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

