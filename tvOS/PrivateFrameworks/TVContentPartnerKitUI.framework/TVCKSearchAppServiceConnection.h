//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVSSSearchAppServiceProtocol.h"

@class NSString, NSXPCConnection;

@interface TVCKSearchAppServiceConnection : NSObject <TVSSSearchAppServiceProtocol>
{
    NSXPCConnection *_remoteConnection;
    NSString *_clientBundleIdentifier;
}

@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(retain, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;
- (id)_clientBundleIdentifierFromConnection;
- (void)updateWithSearchResult:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resume;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
