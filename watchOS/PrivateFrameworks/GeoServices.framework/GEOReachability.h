//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;
    unsigned int _errorCount;
}

+ (id)sharedReachability;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (_Bool)anyFailures;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)_resetErrors;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
