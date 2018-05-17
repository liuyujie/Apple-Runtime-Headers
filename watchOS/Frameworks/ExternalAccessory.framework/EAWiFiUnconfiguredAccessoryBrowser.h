//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSPredicate, NSSet;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject
{
    _Bool __debugLog;
    id <EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
    NSSet *_unconfiguredAccessories;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSPredicate *_accessorySearchPredicate;
}

@property(retain) NSPredicate *accessorySearchPredicate; // @synthesize accessorySearchPredicate=_accessorySearchPredicate;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, copy) NSSet *unconfiguredAccessories; // @synthesize unconfiguredAccessories=_unconfiguredAccessories;
@property(nonatomic) __weak id <EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end
