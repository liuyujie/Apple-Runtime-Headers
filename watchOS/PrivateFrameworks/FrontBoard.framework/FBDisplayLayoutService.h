//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDisplayLayoutDelegate.h"
#import "FBDisplayLayoutServiceServerDelegate.h"

@class FBDisplayLayoutServiceServer, NSMutableDictionary, NSString;

@interface FBDisplayLayoutService : NSObject <FBDisplayLayoutServiceServerDelegate, FBDisplayLayoutDelegate>
{
    FBDisplayLayoutServiceServer *_server;
    NSMutableDictionary *_layoutByDisplayType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)publishDisplayLayout:(id)arg1;
- (id)server:(id)arg1 displayLayoutForDisplayType:(int)arg2;
- (id)_displayLayoutForDisplayType:(int)arg1;
- (void)flushLayoutForDisplayType:(int)arg1;
- (id)layoutForDisplayType:(int)arg1;
- (_Bool)isTransitioningForDisplayType:(int)arg1;
- (void)removeLayoutElementAssertion:(id)arg1;
- (void)updateLayoutElementAssertion:(id)arg1;
- (void)addLayoutElementAssertion:(id)arg1;
- (void)endLayoutTransition:(id)arg1;
- (void)beginLayoutTransition:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

