//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMFHTTPClient;

@protocol HMFHTTPClientDelegate <NSObject>

@optional
- (void)clientDidBecomeUnreachable:(HMFHTTPClient *)arg1;
- (void)clientDidBecomeReachable:(HMFHTTPClient *)arg1;
- (void)client:(HMFHTTPClient *)arg1 didRequestPingWithCompletionHandler:(void (^)(_Bool))arg2;
@end

