//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NEExtensionTunnelProviderHostProtocol.h"

@class NEAppRule, NSUUID;

@protocol NEExtensionAppProxyProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)openFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg1;
- (void)verifyAppWithPID:(int)arg1 uuid:(NSUUID *)arg2 matchesAppRule:(NEAppRule *)arg3 completionHandler:(void (^)(_Bool))arg4;
@end

