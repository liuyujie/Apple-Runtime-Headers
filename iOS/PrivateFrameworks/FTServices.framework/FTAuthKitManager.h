//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAppleIDSession, NSObject<OS_dispatch_queue>;

@interface FTAuthKitManager : NSObject
{
    AKAppleIDSession *_akAppleIDSession;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
