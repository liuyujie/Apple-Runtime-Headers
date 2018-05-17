//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetServiceBrowser, NSObject<OS_dispatch_queue>, NSString;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    int _browserType;
    NSString *_homeSharingGroupID;
    id <HSBrowserDelegate> _delegate;
    NSMutableArray *_availableLibraries;
    NSMutableArray *_resolvingServices;
    NSMutableArray *_librariesPendingRemoval;
    NSObject<OS_dispatch_queue> *_serviceBrowserQueue;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
}

+ (id)homeSharingBrowserWithGroupID:(id)arg1;
@property(retain, nonatomic) NSNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue; // @synthesize serviceBrowserQueue=_serviceBrowserQueue;
@property(retain, nonatomic) NSMutableArray *librariesPendingRemoval; // @synthesize librariesPendingRemoval=_librariesPendingRemoval;
@property(retain, nonatomic) NSMutableArray *resolvingServices; // @synthesize resolvingServices=_resolvingServices;
@property(retain, nonatomic) NSMutableArray *availableLibraries; // @synthesize availableLibraries=_availableLibraries;
@property(nonatomic) __weak id <HSBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(readonly, nonatomic) int browserType; // @synthesize browserType=_browserType;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)_removalTimerFired:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWithBrowserType:(int)arg1 groupID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
