//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CXTransaction, NSString;

@protocol CXCallControllerHostProtocol <NSObject>
- (oneway void)requestTransaction:(CXTransaction *)arg1 forExtensionIdentifier:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)requestCalls:(void (^)(NSArray *))arg1;
@end
