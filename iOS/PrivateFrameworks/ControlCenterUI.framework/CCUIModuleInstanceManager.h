//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCSModuleRepositoryObserver.h"
#import "CCUIContentModuleContextDelegate.h"

@class CCSModuleRepository, NSArray, NSHashTable, NSMutableDictionary, NSSet, NSString;

@interface CCUIModuleInstanceManager : NSObject <CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate>
{
    id <CCUIControlCenterSystemAgent> _systemAgent;
    CCSModuleRepository *_repository;
    NSMutableDictionary *_moduleInstanceByIdentifier;
    NSHashTable *_observers;
    id <CCUIContentModuleContextDelegate> _contextDelegate;
    NSSet *_enabledModuleIdentifiers;
}

+ (id)sharedInstance;
+ (void)setupSharedInstanceWithSystemAgent:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSSet *enabledModuleIdentifiers; // @synthesize enabledModuleIdentifiers=_enabledModuleIdentifiers;
@property(nonatomic) __weak id <CCUIContentModuleContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
- (void).cxx_destruct;
- (id)_instantiateModuleWithMetadata:(id)arg1;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (void)loadableModulesChangedForModuleRepository:(id)arg1;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_updateModuleInstances;
@property(readonly, nonatomic) NSArray *moduleInstances; // @dynamic moduleInstances;
- (id)_initWithSystemAgent:(id)arg1 repository:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
