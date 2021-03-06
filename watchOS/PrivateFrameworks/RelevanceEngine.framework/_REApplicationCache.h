//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, REKeyValueMap;

@interface _REApplicationCache : RESingleton <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_restrictedApps;
    NSMutableDictionary *_removedApps;
    NSMutableDictionary *_applicationTypes;
    NSObject<OS_dispatch_queue> *_queue;
    REKeyValueMap *_remoteApplicationsMap;
}

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)_queue_loadApplicationTypes;
- (void)_queue_loadStateForBundleID:(id)arg1;
- (void)_queue_loadApplicationWorkspace:(CDUnknownBlockType)arg1;
- (unsigned int)typeForApplication:(id)arg1;
- (void)_accessRemoteApplicationsMapWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteApplicationForLocalApplication:(struct NSString *)arg1;
- (id)localApplicationForRemoteApplication:(struct NSString *)arg1;
- (_Bool)applicationIsRemote:(id)arg1;
- (_Bool)_queue_applicationIsRestricted:(id)arg1;
- (_Bool)applicationIsRestricted:(id)arg1;
- (_Bool)_queue_applicationIsRemoved:(id)arg1;
- (_Bool)applicationIsRemoved:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

