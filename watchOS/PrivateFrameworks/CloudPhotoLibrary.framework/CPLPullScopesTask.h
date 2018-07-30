//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScopeStorage, CPLEngineStore, NSError, NSString;

@interface CPLPullScopesTask : CPLEngineSyncTask
{
    _Bool _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id <CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
    NSError *_badError;
    unsigned int _deletedScopeCount;
    unsigned int _newScopeCount;
    unsigned int _modifiedScopeCount;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (void)_handleFinalScopeListSyncAnchor:(struct NSData *)arg1 error:(id)arg2;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(struct NSData *)arg3;
- (_Bool)_checkShouldHandleBatchInTransaction:(id)arg1;
- (id)taskIdentifier;
- (id)initWithEngineLibrary:(id)arg1;

@end
