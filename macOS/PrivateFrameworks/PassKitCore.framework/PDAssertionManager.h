//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "PDAssertionCoordinatorDelegate.h"

@class NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate>
{
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
}

- (void).cxx_destruct;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

